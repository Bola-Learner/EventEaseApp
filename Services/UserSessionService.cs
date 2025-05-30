using EventEaseApp.Models;
using System;
using System.Collections.Generic;
using System.Linq;

namespace EventEaseApp.Services
{
    public class UserSessionService
    {
        // User state properties
        public string? UserName { get; set; }
        public string? UserEmail { get; set; }
        public bool IsLoggedIn { get; set; }
        
        // Event tracking
        private List<int> viewedEvents = new List<int>();
        private List<int> registeredEvents = new List<int>();
        private DateTime sessionStartTime = DateTime.Now;
        
        // Analytics tracking
        private Dictionary<int, int> eventViewCounts = new Dictionary<int, int>();
        private Dictionary<int, DateTime> firstViewTimes = new Dictionary<int, DateTime>();
        private Dictionary<int, DateTime> lastViewTimes = new Dictionary<int, DateTime>();
        private Dictionary<int, DateTime> registrationTimes = new Dictionary<int, DateTime>();
        
        // User preferences (inferred from behavior)
        private Dictionary<string, int> locationInterests = new Dictionary<string, int>();
        
        // Event delegates for state changes
        public event Action? OnUserLogin;
        public event Action<int>? OnEventViewed;
        public event Action<int>? OnEventRegistered;
        
        // Tracking methods
        public void TrackEventView(int eventId)
        {
            // Record the event view
            if (!viewedEvents.Contains(eventId))
            {
                viewedEvents.Add(eventId);
                firstViewTimes[eventId] = DateTime.Now;
                OnEventViewed?.Invoke(eventId);
            }
            
            // Update view count
            if (!eventViewCounts.ContainsKey(eventId))
                eventViewCounts[eventId] = 1;
            else
                eventViewCounts[eventId]++;
                
            // Update last view time
            lastViewTimes[eventId] = DateTime.Now;
        }
        
        public void TrackEventRegistration(int eventId)
        {
            if (!registeredEvents.Contains(eventId))
            {
                registeredEvents.Add(eventId);
                registrationTimes[eventId] = DateTime.Now;
                OnEventRegistered?.Invoke(eventId);
            }
        }
        
        // Track location interests based on viewed events
        public void TrackLocationInterest(string location)
        {
            if (string.IsNullOrEmpty(location))
                return;
                
            if (!locationInterests.ContainsKey(location))
                locationInterests[location] = 1;
            else
                locationInterests[location]++;
        }
        
        public void Login(string userName, string email)
        {
            UserName = userName;
            UserEmail = email;
            IsLoggedIn = true;
            OnUserLogin?.Invoke();
        }
        
        public void ClearSession()
        {
            UserName = null;
            UserEmail = null;
            IsLoggedIn = false;
            viewedEvents.Clear();
            registeredEvents.Clear();
            eventViewCounts.Clear();
            firstViewTimes.Clear();
            lastViewTimes.Clear();
            registrationTimes.Clear();
            locationInterests.Clear();
            sessionStartTime = DateTime.Now;
        }
        
        // Session analytics
        public TimeSpan GetSessionDuration() => DateTime.Now - sessionStartTime;
        public List<int> GetViewedEvents() => viewedEvents.ToList();
        public List<int> GetRegisteredEvents() => registeredEvents.ToList();
        public bool HasViewedEvent(int eventId) => viewedEvents.Contains(eventId);
        public bool HasRegisteredForEvent(int eventId) => registeredEvents.Contains(eventId);
        
        // Enhanced analytics
        public int GetViewCount(int eventId) => 
            eventViewCounts.ContainsKey(eventId) ? eventViewCounts[eventId] : 0;
            
        public DateTime? GetFirstViewTime(int eventId) => 
            firstViewTimes.ContainsKey(eventId) ? firstViewTimes[eventId] : null;
            
        public DateTime? GetLastViewTime(int eventId) => 
            lastViewTimes.ContainsKey(eventId) ? lastViewTimes[eventId] : null;
            
        public DateTime? GetRegistrationTime(int eventId) => 
            registrationTimes.ContainsKey(eventId) ? registrationTimes[eventId] : null;
            
        public TimeSpan? GetTimeToRegister(int eventId)
        {
            if (!firstViewTimes.ContainsKey(eventId) || !registrationTimes.ContainsKey(eventId))
                return null;
                
            return registrationTimes[eventId] - firstViewTimes[eventId];
        }
        
        // Get top user interests based on location views
        public List<string> GetTopLocationInterests(int count = 3)
        {
            return locationInterests
                .OrderByDescending(x => x.Value)
                .Take(count)
                .Select(x => x.Key)
                .ToList();
        }
        
        // Calculate user engagement score (higher is better)
        public int GetUserEngagementScore()
        {
            int score = 0;
            
            // Base score from views and registrations
            score += viewedEvents.Count * 5;
            score += registeredEvents.Count * 20;
            
            // Bonus for repeat views
            score += eventViewCounts.Sum(kv => kv.Value > 1 ? (kv.Value - 1) * 3 : 0);
            
            // Session duration bonus (1 point per minute, max 60)
            score += Math.Min((int)GetSessionDuration().TotalMinutes, 60);
            
            return score;
        }
    }
}

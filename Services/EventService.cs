using EventEaseApp.Models;
using System;
using System.Collections.Generic;
using System.Linq;

namespace EventEaseApp.Services
{
    public class EventService
    {
        private readonly List<Event> events = new List<Event>()
        {
            new Event { Id = 1, Title = "Corporate Gala", Date = DateTime.Now.AddDays(10), Location = "London" },
            new Event { Id = 2, Title = "Social Mixer", Date = DateTime.Now.AddDays(20), Location = "Manchester" },
            new Event { Id = 3, Title = "Tech Symposium", Date = DateTime.Now.AddDays(30), Location = "Birmingham" }
        };

        public List<Event> GetEvents() => events;

        public Event? GetEventById(int id) =>
            events.FirstOrDefault(e => e.Id == id);

        public void AddEvent(Event newEvent)
        {
            newEvent.Id = events.Count > 0 ? events.Max(e => e.Id) + 1 : 1;
            events.Add(newEvent);
        }
    }
}
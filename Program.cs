global using EventEaseApp.Models;
global using EventEaseApp.Services; 
global using Microsoft.AspNetCore.Components.Forms;

using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using System.Net.Http;

var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<EventEaseApp.App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

builder.Services.AddScoped(sp => new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) });

builder.Services.AddScoped<EventEaseApp.Services.EventService>();
builder.Services.AddScoped<EventEaseApp.Services.UserSessionService>();
var app = builder.Build();

await app.RunAsync();

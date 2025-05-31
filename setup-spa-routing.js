// This script generates GitHub Pages compatible routing for SPAs like Blazor WebAssembly
// It creates "fake" HTML files for each route that redirect to the index.html

const routes = [
  '/eventlisting',
  '/eventdetails',
  '/eventreg',
  '/userprofile',
  '/addevent',
];

const fs = require('fs');
const path = require('path');

// The directory where the app is built/published
const publishDir = path.join(__dirname, 'docs');

// For each route, create a directory and an index.html file in that directory
routes.forEach(route => {
  // Remove the leading slash
  const routePath = route.substring(1);
  const routeDir = path.join(publishDir, routePath);
  
  // Create the directory if it doesn't exist
  if (!fs.existsSync(routeDir)) {
    fs.mkdirSync(routeDir, { recursive: true });
    console.log(`Created directory: ${routeDir}`);
  }
  
  // Create the index.html file that will redirect to the app's index.html
  const indexPath = path.join(routeDir, 'index.html');
  const redirectHtml = `
<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>Redirecting...</title>
    <script type="text/javascript">
        // Store the URL the user was trying to access
        sessionStorage.setItem('spa-path', '${route}');
        // Redirect to the app's base URL
        window.location.replace('/EventEaseApp/');
    </script>
    <meta http-equiv="refresh" content="0;URL='/EventEaseApp/'" />
</head>
<body>
    <p>Redirecting to the app...</p>
</body>
</html>
`;
  
  fs.writeFileSync(indexPath, redirectHtml);
  console.log(`Created redirect file: ${indexPath}`);
});

console.log('SPA routing setup complete!');

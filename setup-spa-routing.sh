#!/bin/zsh

# Parameters
PUBLISH_DIR="/Users/bolajiyakub/WorkStation/DevTwo/BlazorFramework/TrainingOne/PartTwo/Three/EventEaseApp/docs"
BASE_URL="/EventEaseApp/"
ROUTES=("eventlisting" "eventdetails" "eventreg" "userprofile" "addevent")

# Color variables
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

echo "${YELLOW}Setting up SPA routing for GitHub Pages...${NC}"

# Create route directories and index.html files
for route in "${ROUTES[@]}"; do
    # Create the directory
    mkdir -p "${PUBLISH_DIR}/${route}"
    echo "${GREEN}Created directory: ${BLUE}${route}${NC}"
    
    # Create the index.html file
    cat > "${PUBLISH_DIR}/${route}/index.html" << EOF
<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EventEaseApp - Redirecting</title>
    <script type="text/javascript">
        // Store the URL the user was trying to access
        sessionStorage.setItem('spa-path', '${route}');
        // Redirect to the app's base URL
        window.location.replace('${BASE_URL}');
    </script>
    <meta http-equiv="refresh" content="0;URL='${BASE_URL}'" />
</head>
<body>
    <p>Redirecting to the app...</p>
</body>
</html>
EOF
    echo "${GREEN}Created redirect file for: ${BLUE}${route}${NC}"
done

# Also handle routes with parameters like "eventdetails/1"
echo "${YELLOW}Creating parameter route handlers...${NC}"

# For eventdetails/1, eventdetails/2, etc.
for i in {1..10}; do
    mkdir -p "${PUBLISH_DIR}/eventdetails/${i}"
    cat > "${PUBLISH_DIR}/eventdetails/${i}/index.html" << EOF
<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EventEaseApp - Redirecting</title>
    <script type="text/javascript">
        // Store the URL the user was trying to access
        sessionStorage.setItem('spa-path', 'eventdetails/${i}');
        // Redirect to the app's base URL
        window.location.replace('${BASE_URL}');
    </script>
    <meta http-equiv="refresh" content="0;URL='${BASE_URL}'" />
</head>
<body>
    <p>Redirecting to the app...</p>
</body>
</html>
EOF
    echo "${GREEN}Created redirect file for: ${BLUE}eventdetails/${i}${NC}"
done

# For eventreg/1, eventreg/2, etc.
for i in {1..10}; do
    mkdir -p "${PUBLISH_DIR}/eventreg/${i}"
    cat > "${PUBLISH_DIR}/eventreg/${i}/index.html" << EOF
<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EventEaseApp - Redirecting</title>
    <script type="text/javascript">
        // Store the URL the user was trying to access
        sessionStorage.setItem('spa-path', 'eventreg/${i}');
        // Redirect to the app's base URL
        window.location.replace('${BASE_URL}');
    </script>
    <meta http-equiv="refresh" content="0;URL='${BASE_URL}'" />
</head>
<body>
    <p>Redirecting to the app...</p>
</body>
</html>
EOF
    echo "${GREEN}Created redirect file for: ${BLUE}eventreg/${i}${NC}"
done

echo "${YELLOW}SPA routing setup complete!${NC}"

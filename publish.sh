#!/bin/zsh

# Color variables
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

echo "${YELLOW}Starting publish process for EventEaseApp to GitHub Pages...${NC}"

# Step 1: Clean and restore dependencies
echo "${GREEN}Cleaning and restoring dependencies...${NC}"
dotnet clean
dotnet restore

# Step 2: Build in Release mode
echo "${GREEN}Building in Release mode...${NC}"
dotnet build -c Release --nologo

# Step 3: Publish to the docs folder
echo "${GREEN}Publishing to docs folder...${NC}"
dotnet publish -c Release -o docs --nologo

# Step 4: Create required files for GitHub Pages
echo "${GREEN}Creating required files for GitHub Pages...${NC}"
touch docs/.nojekyll

# Step 5: Ensure correct base path in index.html
echo "${GREEN}Updating base path in index.html...${NC}"
sed -i '' 's|<base href="/" />|<base href="/EventEaseApp/" />|g' docs/index.html

# Step 6: Cleanup any duplicate base tags
echo "${GREEN}Cleaning up any duplicate base tags...${NC}"
sed -i '' '/<base href="\/EventEaseApp\/" \/>/!{/<base href/d;}' docs/index.html

echo "${YELLOW}Publish process completed successfully.${NC}"
echo "${GREEN}You can now commit and push your changes to GitHub.${NC}"
echo "${GREEN}Your app will be available at https://yourusername.github.io/EventEaseApp/${NC}"

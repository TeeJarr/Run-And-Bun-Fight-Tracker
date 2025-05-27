cmake_minimum_required(VERSION 3.16)
project(app VERSION 1.0 LANGUAGES CXX)

# Use C++17 or higher
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Use wxWidgets (find it with wx-config if available)
find_package(wxWidgets REQUIRED COMPONENTS core base)

# Setup include/link
include(${wxWidgets_USE_FILE})

file(GLOB_RECURSE SOURCES src/*.cpp )
# Add your source files here
add_executable(${PROJECT_NAME} ${SOURCES})

# Link against wxWidgets
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
target_include_directories(${PROJECT_NAME} PUBLIC include include/GUI include/Pokemon include/Pokemon/Stats include/Pokemon/Abilities include/Pokemon/Species include/Pokmeon/Items include/Pokemon/Moves include/Pokemon/Natures include/Pokemon/Types include/Pokemon/*)


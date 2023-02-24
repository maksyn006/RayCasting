cmake_minimum_required(VERSION 3.10)
project(RayCasting)

set(CMAKE_CXX_STANDART 17)

# include dirs
include_directories("${PROJECT_SOURCE_DIR}/include")
include_directories("${PROJECT_SOURCE_DIR}/libs/sfml/include")
link_directories("${PROJECT_SOURCE_DIR}/libs/sfml/lib")

# build exec
file(GLOB
    CPPS "src/*.cpp"
)

add_executable(${PROJECT_NAME} ${CPPS})
# Link Libraries
target_link_libraries(${PROJECT_NAME}
    sfml-system
    sfml-window
    sfml-graphics
    sfml-audio
    sfml-network
)
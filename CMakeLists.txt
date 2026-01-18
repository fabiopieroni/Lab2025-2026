cmake_minimum_required(VERSION 3.28)
project(ProgettoLaboratorioProg LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(FetchContent)

# ---------------- SFML ----------------
FetchContent_Declare(
        SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 3.0.2
)
FetchContent_MakeAvailable(SFML)

# ---------------- GoogleTest ----------------
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# ---------------- Main game ----------------
add_executable(main
        src/main.cpp
        src/Enemy.cpp
        src/MyEntity.cpp
        src/Map.cpp
)

target_link_libraries(main PRIVATE SFML::Graphics)

# ---------------- Unit Tests ----------------
add_executable(unit_tests
        test/test_enemy.cpp
        test/test_myentity.cpp
        test/test_map.cpp
        src/Enemy.cpp
        src/MyEntity.cpp
        src/Map.cpp
)

target_link_libraries(unit_tests PRIVATE gtest_main SFML::Graphics)

add_test(NAME AllTests COMMAND unit_tests)

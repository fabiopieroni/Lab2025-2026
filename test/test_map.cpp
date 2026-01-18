#include "../src/Map.h"
#include <gtest/gtest.h>
#include <filesystem>

TEST(TileMapTest, LoadFailsWithWrongFile) {
    TileMap map;
    int tiles[1] = {0};

    bool result = map.load("file_che_non_esiste.png", {32, 32}, tiles, 1, 1);
    EXPECT_FALSE(result);
}



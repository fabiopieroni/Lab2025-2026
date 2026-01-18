//
// Created by fabio on 18/01/2026.
//
#include "../src/Enemy.h"
#include <gtest/gtest.h>

TEST(EnemyTest, PositionIsCorrect) {
    Enemy e(3, 5);
    EXPECT_EQ(e.getX(), 3);
    EXPECT_EQ(e.getY(), 5);
}

TEST(EnemyTest, HpInRange) {
    Enemy e(0, 0);
    EXPECT_GE(e.getHP(), 20);
    EXPECT_LE(e.getHP(), 100);
}

TEST(EnemyTest, AttackInRange) {
    Enemy e(0, 0);
    EXPECT_GE(e.getAttack(), 5);
    EXPECT_LE(e.getAttack(), 20);
}

TEST(EnemyTest, TakeDamageWorks) {
    Enemy e(0, 0);
    int hp = e.getHP();
    e.takeDamage(10);
    EXPECT_EQ(e.getHP(), hp - 10);
}

TEST(EnemyTest, IsDeadWorks) {
    Enemy e(0, 0);
    e.takeDamage(1000);
    EXPECT_TRUE(e.isDead());
}

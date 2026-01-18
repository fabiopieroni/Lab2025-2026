//
// Created by fabio on 18/01/2026.
//
#include "../src/MyEntity.h"
#include <gtest/gtest.h>

TEST(MyEntityTest, VitaUpStats) {
    MyEntity e(MyEntity::PlayerClass::VitaUp);
    EXPECT_EQ(e.getHP(), 150);
    EXPECT_EQ(e.getAttack(), 10);
}

TEST(MyEntityTest, BilanciatoStats) {
    MyEntity e(MyEntity::PlayerClass::Bilanciato);
    EXPECT_EQ(e.getHP(), 100);
    EXPECT_EQ(e.getAttack(), 15);
}

TEST(MyEntityTest, DamageUpStats) {
    MyEntity e(MyEntity::PlayerClass::DamageUp);
    EXPECT_EQ(e.getHP(), 70);
    EXPECT_EQ(e.getAttack(), 25);
}

TEST(MyEntityTest, TakeDamageWorks) {
    MyEntity e(MyEntity::PlayerClass::Bilanciato);
    int hp = e.getHP();
    e.takeDamage(20);
    EXPECT_EQ(e.getHP(), hp - 20);
}

TEST(MyEntityTest, IsDeadWorks) {
    MyEntity e(MyEntity::PlayerClass::DamageUp);
    e.takeDamage(1000);
    EXPECT_TRUE(e.isDead());
}

TEST(MyEntityTest, MovementChangesPixelPosition) {
    MyEntity e(MyEntity::PlayerClass::Bilanciato);

    float x0 = e.shape.getPosition().x;
    float y0 = e.shape.getPosition().y;

    e.movement(x0 + 100, y0); // target a destra

    float x1 = e.shape.getPosition().x;
    float y1 = e.shape.getPosition().y;

    EXPECT_TRUE(x1 != x0 || y1 != y0);
}


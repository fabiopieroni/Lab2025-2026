//
// Created by fabio on 18/01/2026.
//

#include "Enemy.h"
#include <cstdlib>


Enemy::Enemy(int tileX, int tileY) {
    shape.setRadius(16.f);
    shape.setFillColor(sf::Color::Red);
    shape.setOrigin({16.f, 16.f});
    shape.setPosition({ tileX * 32.f + 16.f, tileY * 32.f + 16.f });

    hp = 20 + rand() % 81;      // 20..100
    attack = 5 + rand() % 16;  // 5..20
}


void Enemy::draw(sf::RenderWindow& window) {
    if (!isDead())
        window.draw(shape);
}

bool Enemy::isDead() const {
    return hp <= 0;
}

int Enemy::getX() const {
    return shape.getPosition().x / 32;
}

int Enemy::getY() const {
    return shape.getPosition().y / 32;
}

int Enemy::getHP() const {
    return hp;
}

int Enemy::getAttack() const {
    return attack;
}

void Enemy::takeDamage(int dmg) {
    hp -= dmg;
}



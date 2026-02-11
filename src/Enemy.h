
#pragma once
#include <SFML/Graphics.hpp>

class Enemy {
public:
    Enemy(int tileX, int tileY);

    void draw(sf::RenderWindow& window);
    bool isDead() const;

    int getX() const;
    int getY() const;

    int getHP() const;
    int getAttack() const;

    void takeDamage(int dmg);

private:
    sf::CircleShape shape;
    int hp;
    int attack;
};

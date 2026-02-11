

#include "MyEntity.h"

MyEntity::MyEntity(PlayerClass type): pclass(type) {
    shape.setRadius(16.f); //raggio
    shape.setFillColor(sf::Color::White);
    shape.setOrigin({16.f,16.f}); //centro la forma

    if (type == PlayerClass::VitaUp) {
        hp = 150;
        attack = 10;
    }
    else if (type == PlayerClass::Bilanciato) {
        hp = 100;
        attack = 15;
    }
    else if (type == PlayerClass::DamageUp) {
        hp = 70;
        attack = 25;
    }
}
void MyEntity::takeDamage(int dmg) {
    hp -= dmg;
}
void MyEntity::setPlayerClass(PlayerClass playerClass) {
    pclass = playerClass;
}

bool MyEntity::isDead() const {
    return hp <= 0;
}

int MyEntity::getAttack() const {
    return attack;
}

int MyEntity::getHP() const {
    return hp;
}

int MyEntity::getPositionX() { int x=floor(shape.getPosition().x/32);
    return x; } //pixel dove sono fratto n pixel per casella

int MyEntity::getPositionY() { int y=floor(shape.getPosition().y/32);
    return y; }

void MyEntity::movement(float targetx, float targety) {
    float posx;
    float posy;
    posx=shape.getPosition().x;
    posy=shape.getPosition().y;
    float moveX = 0;
    float moveY = 0;
    moveX = (posx < targetx) ? 1 : (posx > targetx) ? -1 : 0;
    if (moveX==0) {
        moveY = (posy < targety) ? 1 : (posy > targety) ? -1 : 0;
    }
    shape.move({moveX, moveY});
}
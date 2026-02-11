

#ifndef MYENTITY_H
#define MYENTITY_H
#include <math.h>
#include <iostream>
#include <SFML/Graphics.hpp>

class MyEntity{
public:
    //classe giocatore
    enum class PlayerClass {
        VitaUp, //tanta vita poca forza
        Bilanciato, //bilanciato
        DamageUp //poca vita tanta forza
    };
    void setPlayerClass(PlayerClass playerClass);

 MyEntity(PlayerClass type);
    int getPositionX();
    int getPositionY();
    void movement(float targetx, float targety);

    //commbattimento
    void takeDamage(int dmg);
    bool isDead() const;
    int getAttack() const;
    int getHP() const;

    sf::CircleShape shape;

private:    //attributi
    int hp;
    int attack;
    PlayerClass pclass;
};



#endif //MYENTITY_H

#include "character.h"
class Monster: public character{
   private: 
        int attack;
        unsigned int xAxis;
        unsigned int yAxis;
    public:        
        Monster(int health, int attackvalue, int x, int y):character(health){
            attack =  attackvalue;
            xAxis =  x;
            yAxis = y;
        }
        void setAttack(int attackValue){
            attack = attackValue;
        }
        int getAttack(){
            return attack;
        }
        void setX(int value){
            xAxis = value;
        }
        int getX(){
            return xAxis;
        }
        void setY(int value){
            yAxis =  value;
        }
        int getY()
        {
            return yAxis;
        }
};

#ifndef CHARACTER_H
#define CHARACTER_H
class character{
    private:
        int health;
    public:
    character(int healthVal){
        health = healthVal;
    }
    void sethealth(int value){
        health =  value;
    }
     int gethealth(){
         return health;
     }
    
};
#endif

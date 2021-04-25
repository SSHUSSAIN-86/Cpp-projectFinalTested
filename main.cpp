#include <iostream>
#include <string>
#include <Windows.h>
#include "Monk.cpp"
#include "Monster.cpp"

using namespace std;

int main(){

    Monk Tom(10,7,5,6);
    Monster Hydra (5,6,1,2);
    Monster Mantis (9,5,3,4);

    const int sizeY = 5;
    const int sizeX = 5;

    // Uncomment to play with bigger maze
    // const int sizeY = 20;
    // const int sizeX = 40;

    int room[sizeY][sizeX] = {
        {1,4,1,1,1},
        {1,3,0,0,1},
        {1,0,2,0,1},
        {1,0,0,0,1},
        {1,1,1,1,1}
    };

    //Bigger Maze uncomment to play
    // int room[sizeY][sizeX] = {
    //     {1,0,1,4,0,0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
    //     {1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
    //     {1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
    //     {1,1,1,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
    //     {1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
    //     {1,0,1,0,0,0,0,0,0,3,0,2,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
    //     {1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
    //     {1,1,0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
    //     {1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
    //     {1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
    //     {1,0,1,0,0,0,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
    //     {1,1,1,0,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
    //     {1,1,0,0,0,0,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
    //     {1,1,1,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
    //     {1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
    //     {1,0,1,0,0,0,0,0,0,3,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    //     {1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1},
    //     {1,1,0,0,0,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1},
    //     {1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1},
    //     {1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
       
    // };

    Tom.setX(3);
    Tom.setY(4);

    Hydra.setX(1);
    Hydra.setY(1);

    Mantis.setX(2);
    Mantis.setY(2);

    bool win = false;
    char move = 0; 
    char fightorFlee=0;

   
    //Uncomment to print out the maze
    // for(int i=0 ; i<sizeY ; i++){
    //     for(int j=0; j<sizeX ; j++){
    //         cout << "(x: " << i <<", " << "y:" << j <<")  " << room[i][j] <<" ";
    //         }
    //         cout<<endl;
    // }

    while(move!='q'){
        if(win == false){
            for(int i=0; i<sizeY;i++){
                cout << endl;
                for(int j=0; j<sizeX; j++){
                    if (j == Tom.getX() && i== Tom.getY()){
                        cout << "\u26F9";                        
                    } else {
                        if(room[i][j] == 1){
                            cout << '*';
                        }
                        if(room[i][j] == 0){
                             cout << ' ';
                        } 
                        if(room[i][j] == 2){
                            cout << 'M';
                        } 
                        if(room[i][j] == 3){
                             cout << 'H';
                        }
                        if(room[i][j] == 4){
                            cout << 'T';
                         } 
                     }                
                win = false;   
                }
            }
        }
        cout << endl;

         //---Move---//        

        cout << "Welcome to the Dungeon!!" << endl;    
        cout << "To move upwards press 'W', left 'A', down 'S', right 'D'" << endl;
        cout << "Make your move " << endl;
        cin  >> move;         
        
        if((move == 'w' || move =='W') && Tom.getY() > 0 && room[Tom.getY()-1][Tom.getX()] !=1){            
            Tom.setY(Tom.getY()-1);            
        } 
        if((move == 'a' || move =='A') && Tom.getX() > 0 && room[Tom.getY()][Tom.getX()-1] != 1){
            Tom.setX(Tom.getX()-1);
        }
        if((move == 's' || move =='S') && Tom.getY() < sizeY && room[Tom.getY()+1][Tom.getX()] !=1){            
            Tom.setY(Tom.getY()+1);            
        }
        if((move == tolower('d')) && Tom.getX() < sizeX && room[Tom.getY()][Tom.getX()+1] != 1){
            Tom.setX(Tom.getX()+1);
        }
        if(room[Tom.getY()][Tom.getX()] == 4){
            cout << "YOU WIN!!" << endl;
            system("pause");
            exit(1);
        }
        if (Tom.getX() == Mantis.getX() && Tom.getY() == Mantis.getY()) {

            cout << "Mantis position x " << Mantis.getX() << endl;
            cout << "Mantis position y " << Mantis.getY() << endl;
            cout << "Mantis health is "  << Mantis.gethealth() << endl;           
            
            for(Mantis.gethealth()==9; Mantis.gethealth()>0 ;Mantis.gethealth()){
                cout << "Type F to fight or type L to bail and loose! " << endl;
                cin >> fightorFlee;
                if(fightorFlee == 'f' || fightorFlee == 'F' ){
                    Mantis.sethealth(Mantis.gethealth()-Tom.getAttack());
                    cout << "Mantis health is: " << Mantis.gethealth() << endl;
                    if(Mantis.gethealth() <= 0){
                        cout << "Mantis defeated, continue to play" << endl;
                     }
                    if(Mantis.gethealth() > 0){
                        Tom.sethealth(Tom.gethealth()-Mantis.getAttack());                     
                        fightorFlee=0;
                        win = false;
                        //chance for player to defend and recover one health point
                        Tom.sethealth(Tom.gethealth()+rand()%2);
                        cout << "Tom new health after attack and defense is " << Tom.gethealth() << endl;
                        cout << "Type F to fight or type L to bail and loose! " << endl;
                    }
                } else if(fightorFlee == 'l' || fightorFlee == 'L' ){
                    cout << "You have lost!" << endl;
                    system("pause");
                    exit(1);
                }
            }  

            
        }
        if (Tom.getX() == Hydra.getX() && Tom.getY() == Hydra.getY()) {

            cout << "Hydra position x " << Hydra.getX() << endl;
            cout << "Hydra position y " << Hydra.getY() << endl;
            cout << "Hydra health is "  << Hydra.gethealth() << endl;           
            
            for(Hydra.gethealth()==9; Hydra.gethealth()>0 ;Hydra.gethealth()){
                cout << "Type F to fight or type L to bail and loose! " << endl;
                cin >> fightorFlee;
                if(fightorFlee == 'f' || fightorFlee == 'F' ){
                    Hydra.sethealth(Hydra.gethealth()-Tom.getAttack());
                    cout << "Hydra health is: " << Hydra.gethealth() << endl;
                    if(Hydra.gethealth() <= 0){
                        cout << "Hydra defeated, continue to play" << endl;
                     }
                    if(Hydra.gethealth() > 0){
                        Tom.sethealth(Tom.gethealth()-Hydra.getAttack());                     
                        fightorFlee=0;
                        win = false;
                        //chance for player to defend and recover one health point
                        Tom.sethealth(Tom.gethealth()+rand()%2);
                        cout << "Tom new health after attack and defense is " << Tom.gethealth() << endl;
                        cout << "Type F to fight or type L to bail and loose! " << endl;
                    }
                } else if(fightorFlee == 'l' || fightorFlee == 'L' ){
                    cout << "You have lost!" << endl;
                    system("pause");
                    exit(1);
                }
            }
             

            
        } 

        
        
       

    }
       

    return 0;
}
#include<iostream>

using namespace std;

class player{
private :
int health;
int age;
int score;
bool alive;

public:
// getter :

int gethealth(){
    return health;
}
int getage(){
    return age;
}
int getscore(){
    return score;
}
int isAlive(){
    return alive;
}

// setter

void sethealth(int health){
    this->health = health;
}
void setage(int age){
    this->age = age;
}
void setscore(int score){
    this->score = score;
}
void setIsAlive(bool alive){
    this->alive = alive;
}

};





int main(){

    player harsh; // Object creation statically.
    player raghav; // Complile Time, Static Allocation.

    player *urvi = new player; // Object creation dynamically. Run Time, Dynamic Allocation.

    harsh.sethealth(100);
    harsh.setage(20);
    harsh.setscore(200);
    harsh.setIsAlive(true);


    raghav.sethealth(100);
    raghav.setage(20);
    raghav.setscore(220);
    raghav.setIsAlive(true);


    // (*urvi).sethealth(100);
    // (*urvi).setage(20);
    // (*urvi).setscore(250);
    // (*urvi).setIsAlive(true);

    // Below line will do the same as above lines.
    urvi ->sethealth(100);
    urvi ->setage(20);
    urvi ->setscore(250);
    urvi ->setIsAlive(true);

    // cout <<(*urvi).getscore() << endl;
    cout << urvi->getscore() << endl;

}
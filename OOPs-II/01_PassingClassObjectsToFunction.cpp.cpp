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


int addScore(player a, player b){
    return a.getscore() + b.getscore();
}

player  getMaximumScore(player a, player b){
    if( a.getscore() > b.getscore() )  return a;
    
    else  return b;
    
}

int main(){

    player harsh; // Object creatio statically.
    player raghav;

    harsh.sethealth(100);
    harsh.setage(20);
    harsh.setscore(200);
    harsh.setIsAlive(true);


    raghav.sethealth(100);
    raghav.setage(20);
    raghav.setscore(220);
    raghav.setIsAlive(true);


    cout << "Total score: " << addScore(harsh, raghav) << endl;

    player maxScorePlayer = getMaximumScore(harsh, raghav);
    cout << "Maximum score: " << maxScorePlayer.getscore() << endl;
    cout << "Maximum score player age: " << maxScorePlayer.getage() << endl;
    return 0;
}
#include<iostream>

using namespace std;

class player {
    private :
    int score; // Data Members
    int health;
    public:
        // Setter function
        void setScore(int s){
            score = s;
        }
        void setHealth(int h){
            health = h;
        }

        // Getter function
        int getScore(){
            return score;
        }
        int getHealth(){
            return health;
        }
};

int main(){

    player harsh;
    harsh.setScore(100);
    harsh.setHealth(80);

    cout << harsh.getScore() << endl;
    cout <<  harsh.getHealth() << endl;

    return 0;
}
#include<iostream>

using namespace std;

class abc{
private :
    //mutable int x; // mutable : it enables the  const variable to modify.
    int x;
    int *y;
    int z;

public :
    
    abc(int _x, int _y, int _z = 0){
        x = _x;
        y = new int (_y);
        z = _z;
    }
    int getx() const{
        // x = 50;
        return x;
    }
    int gety() const {
        // int f = 20;
        // y = &f;
        return *y;
    }
    int getz() const{
        // z = 50;
        return z;
    }
    int setx(int _val){
        x = _val;
    }
    int sety(int _val){
        *y = _val;
    }
    int setz(int _val){
        z = _val;
    }
};

void printABC(const abc &a){
    cout << a.getx() << " " << a.gety() << " " << a.getz() << endl;
}




int main (){
    // abc a;
    // cout << a.getx() << endl;
    // cout << a.gety() << endl;

    abc a(1,2,3);
    printABC(a);

    return 0;
}
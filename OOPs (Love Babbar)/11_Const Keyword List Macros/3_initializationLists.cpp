#include<iostream>

using namespace std;

class abc{
private :
    //mutable int x; // mutable : it enables the  const variable to modify.
    int x;
    int *y;
    const int z;

public :
    // Ctor : Old style.
    // abc(int _x, int _y, int _z = 0){
    //     x = _x;
    //     y = new int (_y);
    //     // z = _z;
    // }

    // initialization lists
    abc(int _x, int _y, int _z = 0) : x(_x), y(new int(_y)), z(_z) {
        cout << "in init lists" << endl;
        *y = *y * 10;
        
    } 
    // Initializtion lists helps to modify the value of const variable in ctor


};
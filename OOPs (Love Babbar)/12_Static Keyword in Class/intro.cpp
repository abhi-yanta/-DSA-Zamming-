#include<iostream>

using namespace std;

class abc{
public:
    int x,y;

    void print(){
        // this-> ensures that x, y of obj1 class and x, y of obj2 class are different 
        cout << this->x << " " << this->y << endl;
    }

};

int main(){

    abc obj1 = {1, 2};
    abc obj2 = {4, 5};

    obj1.print();
    obj2.print();

    return 0;
}
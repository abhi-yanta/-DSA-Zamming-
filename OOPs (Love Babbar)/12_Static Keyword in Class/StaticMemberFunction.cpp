// # Static Member Function-
// There is no instance of that 
// bring passed into that method.

// Ek Function(print) sarree obj me common hoga kisi ke liye particular nhi hoga.

#include<iostream>

using namespace std;

class abc{
public:
    int x,y;

    abc(): x(0), y(0){}
        static void print(){

        // No this pointer is not accessible.  this->

        cout << "I'm in Static Function "  << endl;
        
    }

};


int main(){

    abc obj1;
    abc::print();

    abc obj2;

    abc::print();
    abc::print();

    return 0;
}
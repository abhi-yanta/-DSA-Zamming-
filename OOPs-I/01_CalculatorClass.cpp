#include<iostream>

using namespace std;

class calculator{
    private:
    int a; // Data Members
    int b;
    public:
    void add(){ // Member function
        cout << a + b << endl;
    }
    void sub(){
        cout << a - b << endl;
    }
    void mul(){
        cout << a * b << endl;
    }
    void div(){
        cout << a / b << endl;
    }
};


int main(){

    calculator calu;
    // Since variable are private we cannot access them directly from outside the class.
    // calu.a = 10; // Accessing data members
    // calu.b = 5;
    calu.add();
    calu.sub();
    calu.mul();
    calu.div();





    return 0;
}
#include<iostream>

using namespace std;

class student{
public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;

    // Constructor(ctor): Default Ctor
    student(){
        cout << "Student default constructor called" << endl;
    }


    // Behaviour/ Methods/ Functions
    void study(){
        cout << this -> name <<" is studying" << endl;
    }
    void sleep(){
        cout << this -> name << " is sleeping" << endl;
    }
    void bunk(){
        cout << this -> name << " is bunking" << endl;
    }

    // Destructor(dtor): Default Dtor
    ~student(){
        cout << "Student default destructor called" << endl;
    }


};

int main(){

    student A; // Object A of class student is created
    A.id = 1;
    A.age = 19;
    A.name = "John";
    A.nos = 6;

    A.study();

    student B; // Object A of class student is created
    B.id = 2;
    B.age = 20;
    B.name = "Jane";
    B.nos = 5;

    B.bunk();
    



    return 0;
}
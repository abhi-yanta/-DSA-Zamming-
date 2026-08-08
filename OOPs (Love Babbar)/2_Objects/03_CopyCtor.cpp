#include<iostream>

using namespace std;

class student{
public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;

    // // Constructor(ctor): Default Ctor
    // student(){
    //     cout << "Student default constructor called" << endl;
    // }

    // Parametrized Constructor(ctor):
    student(int id, int age, string name, int nos){
        cout << "Student parametrized constructor called" << endl;
        this -> id = id;
        this -> age = age;
        this -> name = name;
        this -> nos = nos;
    }

    // Copy Constructor(ctor):
    student(const student &srcobj){
        cout << "Student copy constructor called" << endl;
        this -> id = srcobj.id;
        this -> age = srcobj.age;
        this -> name = srcobj.name;
        this -> nos = srcobj.nos;
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

    // Stack Memory Allocation //Staatic Memory Allocation
    student A(1, 19, "John", 6); // Object A of class student is created
    // student B(2, 20, "Jane", 5); // Object B of class student is created
    // student C(3, 21, "Jack", 4); // Object C of class student is created
    // student D(4, 22, "Jill", 3); // Object D of class student is created
    
    // cout << "Student A: " << A.name << ", Age: " << A.age << ", ID: " << A.id << ", Number of Subjects: " << A.nos << endl;
    // cout << "Student B: " << B.name << ", Age: " << B.age << ", ID: " << B.id << ", Number of Subjects: " << B.nos << endl;
    // cout << "Student C: " << C.name << ", Age: " << C.age << ", ID: " << C.id << ", Number of Subjects: " << C.nos << endl;
    // cout << "Student D: " << D.name << ", Age: " << D.age << ", ID: " << D.id << ", Number of Subjects: " << D.nos << endl;

    // A.bunk();
    // B.sleep();
    // C.study();
    // D.bunk();

    // Copy Constructor Example
    // student C = A; // Copy Constructor is called here
    student C(A); // same as above.
    cout << C.name << " is copied from " << A.name << endl;
    return 0;
}
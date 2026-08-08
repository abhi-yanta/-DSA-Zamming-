#include<iostream>

using namespace std;

class student{
public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;
    int *gpa; // Pointer to dynamically allocated memory for GPA

    // // Constructor(ctor): Default Ctor
    // student(){
    //     cout << "Student default constructor called" << endl;
    // }

    // Parametrized Constructor(ctor):
    student(int id, int age, string name, int nos, float gpa){
        cout << "Student parametrized constructor called" << endl;
        this -> id = id;
        this -> age = age;
        this -> name = name;
        this -> nos = nos;
        // Dynamically allocate memory for GPA
        this -> gpa = new int(gpa);
    }
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
        // Deallocate dynamically allocated memory for GPA
        delete this->gpa;
    }


};

int main(){

    // Stack Memory Allocation //Staatic Memory Allocation
    // student A(1, 19, "John", 6); // Object A of class student is created

    // Heap Memory Allocation //Dynamic Memory Allocation
    student *B = new student(2, 20, "Jane", 5, 9.8);

    // Accessing members of dynamically allocated object
    cout << "Student B: " << B->name << endl;
    cout << "Student B: " << B->age << endl;
    

    // The issue now is that the destructor of the dynamically allocated object 
    // will not be called automatically when the program ends, so we need to explicitly 
    //deallocate the memory using delete operator.

    // Deallocating memory for dynamically allocated object
    delete B;
   
    return 0;
}
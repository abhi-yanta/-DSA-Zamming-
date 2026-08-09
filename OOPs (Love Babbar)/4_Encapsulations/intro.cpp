#include<iostream>

using namespace std;

class student{
public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;

private:
    float *gpa; // Pointer to dynamically allocated memory for GPA
    string gf;


public:
    // Setter methods
    void setGPA(float a){
        // Another layer of authentication: Check if the GPA is within a valid range (0.0 to 4.0)
        // Dynamically allocate memory for GPA
        *this->gpa = a;
    }
    void setGF(string gf){
        this -> gf = gf;
    }

    // Getter methods
    float getGPA() const{
        return *this->gpa;
    }
    string getGF() const{
        return this -> gf;
    }


    // // Constructor(ctor): Default Ctor
    // student(){
    //     cout << "Student default constructor called" << endl;
    // }

    // Parametrized Constructor(ctor):
    student(int id, int age, string name, int nos, float gpa, string gf){
        cout << "Student parametrized constructor called" << endl;
        this -> id = id;
        this -> age = age;
        this -> name = name;
        this -> nos = nos;
        this -> gf = gf;
        // Dynamically allocate memory for GPA
        this -> gpa = new float(gpa);
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

private:

    void gfchatting(){
        cout << this -> name << " is chatting "<< endl;
    }


};


int main(){

    student A(1, 20, "Peter", 5, 3.5, "MJ");

    cout << A.getGPA() << endl;
    cout << A.getGF() << endl;

    A.setGPA(6.7); // This will set the GPA to 6.7, which is outside the valid range (0.0 to 4.0)

    cout << A.getGPA() << endl; // This will print the GPA, which is now 6.7
    return 0;
}
#include<iostream>

using namespace std;

class students{
    public:
    int std;
    int age ;
    int rollno;
};

void showAge(){
    cout << "age is " << age;
}

int main(){

    students Abhi;
    Abhi.std = 14;
    Abhi.age = 21;
    Abhi.rollno = 01;
    
    cout << Abhi.std << endl;
    cout << Abhi.age << endl;
    cout << Abhi.rollno << endl;

    students Abhis;
    Abhis.std = 14;
    Abhis.age = 22;
    Abhis.rollno = 02;
    
    cout << Abhis.std << endl;
    cout << Abhis.age << endl;
    cout << Abhis.rollno << endl;


    // # Access Modifier :--
        // public:
        // private:
        // protected:
         

    return 0;
}


#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>

using namespace std;

class Bird{
public:
    virtual void eat() =0; // Pure Virtual Function : The virtual function that act as interface.
    virtual void fly() = 0;
     
    // classes that inherits this class has ot implement pure virtual funtions.
    // Otherwise they don't resides in the parent  class.
    
};

class sparrow : public Bird {
public:
    void eat(){
        cout << "Sparrow is eating\n" << endl;
    }
    void fly(){
        cout << "Sparrow if flying\n" << endl;
    }
};
class eagle : public Bird {
public:
    void eat(){
        cout << "eagle is eating\n" << endl;
    }
    void fly(){
        cout << "eagle if flying\n" << endl;
    }
};

class pigeon : public Bird {
public:
    void eat(){
        cout << "pigeon is eating\n" << endl;
    }
    void fly(){
        cout << "pigeon if flying\n" << endl;
    }
};



#endif // BIRD_H
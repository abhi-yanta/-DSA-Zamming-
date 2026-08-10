#include<iostream>

using namespace std;

class Vehicle{
protected:
    string name;
    string model;
    int no_of_wheels;

    string getname(){
        return this->name;
    }
    // Ctor
    Vehicle(string name, string model, int no_of_wheels){
        cout << "vehicle constructor called" << endl;
        this->name = name ;
        this->model = model;
        this->no_of_wheels = no_of_wheels;
    }

public:
    void startEngine(){
        cout << "Engine is starting " << name << " " << model <<  endl;
    }
    void stopEngine(){
        cout << "Engine is stoping " << name << " " << model <<  endl;
    }

    ~Vehicle(){
        cout << "vehicle deconstructor called" << endl;
    }
};

class car : public Vehicle {
protected:
    int no_of_doors;
    string transmissionType;

public:
    // Ctor
    car(string name, string model, int no_of_wheels, int no_of_doors, string transmissiontype): Vehicle(name, model, no_of_wheels){
        cout << "car constructor called" << endl;
        this->no_of_doors = no_of_doors;
        this->transmissionType = transmissionType;
    }


    void startAC(){
        cout << "AC has started " << getname() << endl;
    }


   ~car(){
    cout << "car deconstructor called" << endl;
   }
};

class MotorCycle: public Vehicle{
protected:
    string handleBarStyle;
    string suspensionType;
public:
    //Ctor
    MotorCycle(string name, string model, int no_of_wheels, string handleBarStyle, string suspensionType): Vehicle(name, model, no_of_wheels){
        cout << "Motor constructor called" << endl;
        this->handleBarStyle = handleBarStyle;
        this->suspensionType = suspensionType;
    }

    void wheelie(){
        cout << "Doing Wheelie " << name << endl;
    }

    ~MotorCycle(){
        cout << "Motor Deconstructor called" << endl;
    }
};


int main(){

    car A ("Maruti 800", "LXI", 4, 4, "Manual");

    A.startEngine();
    A.startAC();
    A.stopEngine();

    MotorCycle M("BMW", "VXI", 2, "U", "Hard");
    M.startEngine();
    M.wheelie();
    M.stopEngine();

    

}



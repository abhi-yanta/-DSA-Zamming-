#include<iostream>


using namespace std;

// # Function Overloading----->


class Add{
public:
    int sum(int x, int y){
        cout << "Sum of two int: " << endl;
        return x + y;
    }
    int sum(int x, int y, int z){
        cout << "Sum of three int: " << endl;
        return x + y +z;
    }
    double sum(double x, double y){
        cout << "Sum of two doubles: " << endl;
        return x + y;
    }

};

// # Operator Overloading------>

class complex{
public:
    int real;
    int imag;

    complex(){
        real = imag = -1;
    }
    // Ctor
    complex(int r, int i): real(r), imag(i){

    };

    complex operator+(const complex &B){
        // this->A instance 
        complex temp;
        temp.real = this->real + B.real;
        temp.imag = this->imag + B.imag;
        return temp;
    }
    complex operator-(const complex &B){
        // this->A instance 
        complex temp;
        temp.real = this->real - B.real;
        temp.imag = this->imag - B.imag;
        return temp;
    }
    bool operator==(const complex &B){
        return (this->real == B.real) && (this->imag == B.imag);
    }

    void print(){
        cout << "[" << this->real << " + i" << this->imag << "]" << endl;
    }

};

int main(){

    // # Function Overloading----->

    int x = 5, y = 5, z = 2;
    double a = 8.3, b = 8.5;

    Add Add;
    cout << Add.sum(x, y) << endl;
    cout << Add.sum(x, y, z) << endl;
    cout << Add.sum(a, b) << endl;

    cout << endl;

    // # Operator Overloading----->

    complex A(2,3);
    A.print();
    complex B(3,5); 
    B.print();

    complex C = A + B;
    C.print();

    complex D = B - A;
    D.print();

    bool E = A == B;
    cout << E << endl;

    return 0;
}
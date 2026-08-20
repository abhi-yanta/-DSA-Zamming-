#include<iostream>

using namespace  std;

class abc{
public:
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int(_y)) {}

    // // Default Dumb copy construction: it does Shallow copy.
    // abc(const abc& obj){
    //     x = obj.x;
    //     y = obj.y;
    // }

    // Our Smart Deep Copy
    abc(const abc &obj){
        x = obj.x;
        y = new int (*obj.y);
    }

    void print() const{
        cout << " x: " << x << endl;
        cout << "PTR y: " << y << endl;
        cout << "Content of y (*y): " << *y << endl;
        cout << endl;
    }
    ~abc(){
        delete y;
    }
};


int main(){

    abc a(1, 2);
    cout << "Printing a: " << endl;
    a.print();

    // abc b(a);
    abc b = a; // call hota hai, Copy Constructor.
    //            (by default dump copy constructor)
    cout << "Printing b1: " << endl;
    b.print(); 
    *b.y = 20;
    cout << "Printing b2 : " << endl;
    b.print();
    cout << "Printing a: " << endl;
    a.print();

    // a and b dono same y ki loction show karr raha hai.


    // // For Shallow Copy
    // abc *a = new abc(1,2);
    // abc b = *a;
    // delete a;
    // b.print();

    



    return 0;

}
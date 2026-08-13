#include<iostream>

using namespace std;

int main(){

    // 1.const variable
    const int k = 5;
    // initialization can be done 
    // but we reassign a value
    // k = 10;
    cout << k << endl;
    cout << endl;


    // 2. const with pointers [Const Data, Non-Const pointer].
    const int *a = new int(2); // CONST data, NON const pointer initialize.
    // int const *a =  new int(2); // same as line no 15
    cout << *a << endl;

    //*a = 4; // Value of the pointer can not be re-assign.
    //cout << *a << endl;

    // pointer itself can be modified.
    int b = 20;
    a = &b;
    cout << a << endl;

    // # NOTE;
    // if we write const before '*', then content will be constant.


    // 3. Const Pointer, but Non-Const data.

    int *const c = new int(2);
    cout << *c << endl;
    *c = 20; // chal jaega.
    cout << *c << endl;

    int d = 50;
   // e = &d; // nahi chalega, Const pointer

    // Const pointer, const data
    const int *const x = new int(10);
    cout << x << endl;
    // *x = 50;
    int y = 100;
    // y = &x ;

 
    return 0;
}
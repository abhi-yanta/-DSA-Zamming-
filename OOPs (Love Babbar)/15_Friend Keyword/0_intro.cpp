#include<iostream>

using namespace std;

class A{

private:
    int x;

public:
    A(int _val): x(_val){}
    int getx()const {return x;}
    void setx(int _val){ x = _val;}

    friend class B; // By this we can now access 
                    // the private variable x of class A in class B

    friend void print(const A &); // Same can be directly done with the function also
                   
};

class B
{

public:
    void print (const A &a){
        cout << a.getx()<< endl;
        cout << a.x << endl;
    }    
};

void print (const A &a){
    cout << a.x << endl;
}

int main(){
    A a(5);
    B b;
    b.print(a);
    

    return 0;
}
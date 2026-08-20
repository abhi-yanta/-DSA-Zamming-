#include<iostream>

using namespace std;

class Box{
    
    int width ;

public:
    //CTOR
    Box(int _w): width(_w){};

    int getWidth() const{
        return width;
    }
    void setwidth(int _val){
        width = _val;
    }
    friend class BoxFactory;
};

class BoxFactory{
    int count;
public:
    Box getABox(int _w){
        count++;
        return Box(_w);
    }
};

int main(){

    // Box b(5);;
    // cout << b.getWidth() << endl;
    // It can not be directly access as it is CTOR.

    BoxFactory bfact;
    Box b = bfact.getABox(5);
    cout << b.getWidth() << endl;

    return 0; 
}


// YES, It can be made Private but it can not be accessed directly in main functon.
// We have to create a friend class and access through it.
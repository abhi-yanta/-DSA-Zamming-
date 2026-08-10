#include<iostream>


using namespace std;
//class shape final { // final : Keyword (prevent class inheritance)and (prevent virtual function overriding)
class shape{
public:
virtual void draw(){ // Virtual : Keyword (for late binding )
    cout << " Generic Drawing..." << endl;
}
};
class circle : public shape{
public:
    void draw() override{
    cout << " Circle is Drawing..." << endl;
    }
};
class rectangle : public shape{
public:
    void draw() override{
    cout << " Rectangle is Drawing..." << endl;
    }
};
class triangle : public shape{
public:
    void draw() override{
    cout << " Triangle is Drawing..." << endl;
    }
};
void shapeDrawing (shape *s){
    s->draw(); // Draw is polymorphic
}

int main(){
    // circle c;
    // rectangle r;
    
    // shape *s = &c; // upcasting
    // shapeDrawing(&c);
    // shapeDrawing(&r);
    // triangle *t = new triangle();
    // shapeDrawing(t);

    //  ###without virtual keyword;
    // left me jo likha hai.
    // jiske obj me acctual obj store hai.
    // class A = new class B (here A)
    // uska funntion call hoga

    
    shape *s = new shape();
    s->draw();

    // #  Upcasting 
    shape *s3 = new circle();
    s3->draw();

    circle *c = new circle();
    c->draw();

    // # downcasting
    shape *s2 = new shape();
    circle *c2 =  (circle *)s2;
    c2->draw();


    
    return 0;
}
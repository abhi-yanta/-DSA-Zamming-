#include<iostream>
#include"1_bird.h"

using namespace std;

void birddoesSomething(Bird *&bird){
    bird->eat();
    bird->fly();
    bird->eat();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->eat();
    bird->fly();
    bird->eat();
}

int main(){

    Bird*bird1 = new sparrow();
    birddoesSomething(bird1);
    Bird*bird2 = new pigeon();
    birddoesSomething(bird2);

    // Bird *b2 = new Bird();
    // Object of abstract class type "Bird" is not allowed .
    return 0;
}
#include<iostream>

using namespace std;

int gcd(int a, int b){
    if(a==0)return b;
    else return gcd(b%a, a);
}

int main(){

int a = 27;
int b = 45;

cout << gcd(a,b);
//cout << gcd(b,a); it gives the same value bcz b%a = b (if a > b).
gcd(a,b) == gcd(b,a); // 27%45 = 27, 45%27 = 18, 27%18 = 9, 18%9 = 0
   

return 0;
}


// #Note --->

// Time Complexity of this method is O(log(a+b)).
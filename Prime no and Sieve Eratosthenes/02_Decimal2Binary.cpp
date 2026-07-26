#include<iostream>
#include<string>



using namespace std;

string decimal2binary(int num){
    string result = "";
    while(num > 0){
        if(num % 2 == 0) {
            result = "0" + result;
        }else {
            result = "1" + result;
        }
        num = num >> 1;
        //num = num / 2;
    }
    return result;
}



int main(){

    cout << decimal2binary(45) << endl; ;

    return 0;
}
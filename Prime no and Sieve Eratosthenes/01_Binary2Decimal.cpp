#include<iostream>

using namespace std;
int binary2decimal(string &Binary){
    int n = Binary.size();
    int result  = 0;
    for(int i = 0; i < n; i++){
        char ch = Binary [i];
        int num = ch - '0'; 
        result = result + num*(1 << (n - i -1));
    }
    return result;
}

int main(){

    string str = "101101";
    cout << binary2decimal(str);



    return 0;
}
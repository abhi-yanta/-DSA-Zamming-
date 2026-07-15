#include<iostream>
using namespace std;

// Practice Question --->
// generate all binary strings of size n. But the condition is no two one comes together.
// For example if n = 3 then the output will be 000, 001, 010, 100, 101.

void generatebin(string s, int n){
    if(s.length() == n){
    // if(n == 0){
        cout << s << endl;
        return ;
    }
    generatebin(s + "0", n);
    if(s == "" || s[s.length() - 1] == '0'){
        generatebin(s + "1", n);
    }
}


int main(){
    int n;
    cout << "Enter the number of bits: ";
    cin >> n;
    generatebin("", n);

    return 0;
}

// # Note -->
// Time complexity of this method is O(2^n) because for every bit we have 2 choices either 0 or 1.

// Total no of binary string formed is 2^n.

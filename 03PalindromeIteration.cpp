#include<iostream>
#include<vector>

using namespace std;

bool ispalindrome(string s){
    int i = 0;
    int j = s.length()-1;
    while(i<j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
}

int main(){
    
    string  s = "mom";
    cout << ispalindrome(s);


    return 0;
}
#include<iostream>

using namespace std;

class Book{
    public:
    char name;
    int price;
    int nopages;

    int countBooks(int p){
        if(price < p)
            return 1;
        else
            return 0;
    }
                
    bool isBookPresent(char book){
        if(name == book)
            return true;
        else
            return false;
    }      
    

};

int main(){

    Book HarryPotter;
    HarryPotter.name = 'H';
    HarryPotter.price = 500;
    HarryPotter.nopages = 300;

    cout << HarryPotter.countBooks(2000) << endl;
    cout << HarryPotter.isBookPresent('H') << endl;

    return 0;
}
#include <iostream>
using namespace std;

int x = 2; // GLOBAL VARIABLE

void fun()
{
    int x = 60;
    cout << x << endl;
    ::x = 40; // Accessing Global Variablr::
    cout << ::x << endl;
}

int main()
{
    ::x = 4;        // global x
    int x = 20;     // local to main() fn.
    // cout << x << endl;
    // cout << ::x << endl; // accessing Global with ::

    {
        int x = 50;
        {
            int x = 44;
            cout << x << endl;
        }
        cout << x << endl;
        cout << ::x << endl;
    }

    // fun();
    return 0;
}
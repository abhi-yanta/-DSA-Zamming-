#include<iostream>
#include<vector>


using namespace std;
    // # Count Invesion:
    // An inversion is a pair (i, j) such that i < j and arr[i] > arr[j]. 
    // It measures how far an array is from being sorted.
    // We have to count the maximum number of inversions.
    // #Counting Inversion in an array using Merge Sort

    
    int main(){

        // #Method 1: Using Brute Force Approach or NAIVE Approach

        // Time Complexity: O(n^2)
        // Number of operatons = n(n-1)/2 = O(n^2)
        // Space Complexity: O(1)


        int arr[] = {1, 20, 6, 4, 5};
        int n = sizeof(arr)/sizeof(arr[0]);
        vector<int> v(arr, arr + n);

        for(int i = 0; i < n; i++){
            cout << v[i] << " ";
        }

        int count = 0;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(v[i] > v[j]){
                    count++;
                }
            }
        }

        cout << "\nCount of Inversions: " << count << endl;





        return 0;
    }
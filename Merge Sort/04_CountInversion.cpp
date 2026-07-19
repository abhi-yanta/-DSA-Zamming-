#include<iostream>
#include<vector>


using namespace std;
    // # Count Invesion:
    // An inversion is a pair (i, j) such that i < j and arr[i] > arr[j]. 
    // It measures how far an array is from being sorted.
    // We have to count the maximum number of inversions.
    // #Counting Inversion in an array using Merge Sort



    int inversions(vector<int> &a, vector<int> &b){
        int i = 0, j = 0, c = 0;
        while (i < a.size() && j < b.size()) {
            if (a[i] <= b[j]) {
                i++;
            } else {
                c += a.size() - i; // Count the number of inversions.
                j++;
            }
        }
        return c;
    }
    void merge(vector<int> &a, vector<int> &b, vector<int> &res) {
            int i = 0, j = 0, k = 0;
            while (i < a.size() && j < b.size()) {
                if (a[i] <= b[j]) {
                    res[k] = a[i];
                    i++;
                    k++;
                } else {
                    res[k] = b[j];
                    j++;
                    k++;
                }
            }
            if(i == a.size()){
                while(j < b.size()){
                    res[k] = b[j];
                    j++;
                    k++;
                }
            }
            if(j == b.size()){
                while(i < a.size()){
                    res[k] = a[i];
                    i++;
                    k++;
                }
            }
        

        }
        int mergeSort(vector<int> &v){
            int count = 0;
            int n = v.size();
            if(n == 1) return 0;
            int n1 = n/2;
            int n2 = n - n1;
            
            vector<int> a(n1), b(n2); // Initializing two vectors at once.

            for(int i = 0; i < n1; i++){
                a[i] = v[i];
            }
            for(int i = 0; i < n2; i++){
                b[i] = v[n1 + i];
            }

            count += inversions(a, b); // Count the number of inversions in the two subarrays.


            count += mergeSort(a);
            count += mergeSort(b);
            merge(a, b, v);

            a.clear();
            b.clear();
            return count;
        }
    
int main(){

        // #Method 1: Using Brute Force Approach or NAIVE Approach

        // Time Complexity: O(n^2)
        // Number of operatons = n(n-1)/2 = O(n^2)
        // Space Complexity: O(1)


        // int arr[] = {1, 20, 6, 4, 5};
        // int n = sizeof(arr)/sizeof(arr[0]);
        // vector<int> v(arr, arr + n);

        // for(int i = 0; i < n; i++){
        //     cout << v[i] << " ";
        // }

        // int count = 0;

        // for(int i = 0; i < n; i++){
        //     for(int j = i + 1; j < n; j++){
        //         if(v[i] > v[j]){
        //             count++;
        //         }
        //     }
        // }

        // cout << "\nCount of Inversions: " << count << endl;


        cout << endl;

        // #Method 2: Using Merge Sort Approach

        // # Whatif --->

        // We have a array made up of two subarrays, both sorted.
        // what can be said about the inversions including a certsin element?


        int arr[] = {1, 20, 6, 4, 5};
        int n = sizeof(arr)/sizeof(arr[0]);
        vector<int> v(arr, arr + n);

        for(int i = 0; i < n; i++){
            cout << v[i] << " ";
        }

        cout << endl;
       

        cout << mergeSort(v) << endl;


        return 0;
}

// #Notes --->

 // Time Complexity: O(n log n)
 // Number of operations: 2nlogn
 // Space Complexity: O(n) + O(n) + O(n) = O(3n) = O(n) 
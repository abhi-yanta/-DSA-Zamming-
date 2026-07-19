#include<iostream>
#include<vector>

using namespace std;

    // #Sorting of a Unsorted array using Merge Sort

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


    void mergeSort(vector<int> &v){
        int n = v.size();
        if(n == 1) return;
        int n1 = n/2;
        int n2 = n - n1;
        
        vector<int> a(n1), b(n2); // Initializing two vectors at once.

        for(int i = 0; i < n1; i++){
            a[i] = v[i];
        }
        for(int i = 0; i < n2; i++){
            b[i] = v[n1 + i];
        }
        mergeSort(a);
        mergeSort(b);
        merge(a, b, v);


    }
int main(){
    int arr[] = {5,1,3,0,5,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr, arr + n); // Pushing elements of arr into res vector
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    mergeSort(v);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    

    return 0;
}


// #Note-->

// Time Complexity: Merge Sort: O(n log n)

// Number of operations: 2nlogn

// # Appliction of Merge Sort:
// 1. Sorting a linked list
// 2. External sorting
// 3. Inversion count in an array

// # Drawback of Merge Sort:
// 1. It requires extra space for temporary arrays, which can be a concern for large datasets.
  // Space Complexity: O(nlogn)

//   space complexity can be reduced to O(n) by using an iterative approach 
//   or by using a single auxiliary array for merging.
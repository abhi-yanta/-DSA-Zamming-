#include<iostream>
#include<vector>

using namespace std;

    // # Sort of two sorted arrays using Merge Sort
void merge(vector<int> &a, vector<int> &b, vector<int> &res) {
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
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

int main(){
    int arr[] = {1,4,5,8};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    vector<int> a(arr, arr + n1); // Pushing elements of arr into res vector
    int brr[] = {2,3,6,7,10,12};
    int n2 = sizeof(brr)/sizeof(brr[0]);
    vector<int> b(brr, brr + n2); // Pushing elements of brr into res vector
    vector<int> res(n1 + n2); 
    merge(a, b, res);

    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }

    return 0;
}


// #Note-->

// Time Complexity:
//     Bubble Sort: O(n^2) Stable Sort
//     Selection Sort: O(n^2)
//     Insertion Sort: O(n^2) Stable Sort

//     Merge Sort: O(n log n) Stable Sort
//     Quick Sort: O(n log n) on average, O(n^2) in the worst case
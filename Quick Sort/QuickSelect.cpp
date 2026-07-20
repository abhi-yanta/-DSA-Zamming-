#include<iostream>

using namespace std;

// #Problem: 
//    Find the kth smallest element in the array using Quick Sort.

int partition (int arr[], int strtidx, int endidx){
    // int pivotele = arr[strtidx]; // #previously
     int pivotele = arr[(strtidx + endidx)/2]; // #now
    int count = 0 ;
    for(int i = strtidx + 1; i <= endidx; i++){
         // if(i == strtidx) continue; //#previously
         if(i == (strtidx + endidx)/2) continue; // #now 

        // #now wale se sahi sorting nahi ho rhi!

        if(arr[i] <= pivotele) count++;
    }
        int pvtidx = strtidx + count;
        swap(arr[(strtidx + endidx)/2], arr[pvtidx]);
        int i = strtidx;
        int j = endidx;
        while(i < pvtidx && j > pvtidx){
            while(arr[i] <= pivotele) i++;
            while(arr[j]> pivotele) j--;
            if(j > pvtidx && i <= pvtidx){
                swap(arr[i], arr[j]);
                i++;
                j--;

            }
        }
        return pvtidx;

    

}
int kthSmallest(int arr[], int strtidx, int endidx, int k){
   int pi = partition(arr, strtidx, endidx);
    if(pi + 1 == k) return arr[k];
    else if(pi + 1 < k) return kthSmallest (arr,pi + 1, endidx, k);
    else return kthSmallest (arr,strtidx,pi-1, k);
    

}
int main(){

    int arr[] = {5,1,8,2,7,6,3,4};

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        cout  << arr[i] << " " ;
    }
    cout << endl;

    int k = 4;

    int a = kthSmallest(arr,0,n-1, k);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout <<"Arr[" << a << "] = " << arr[a] <<  endl;
    





    return 0;
}

// #Note:-  Time Complexity:

//  Selection Sort : O(k*n)
//  Merge Sort : O(nlogn) Unstable for this not preffered.
//  Quick Sort or Quick Select : Avg Case O(n)  Poor Case O(n^2)
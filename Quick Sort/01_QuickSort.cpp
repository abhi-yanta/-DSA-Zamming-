#include<iostream>

using namespace std;

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
void quickSort(int arr[], int strtidx, int endidx){
    if(strtidx >= endidx) return ;
    int pi = partition(arr, strtidx, endidx);

    quickSort (arr,strtidx,pi-1);
    quickSort (arr,pi + 1, endidx);



}

int main(){

    int arr[] = {5,1,8,2,7,6,3,4};

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        cout  << arr[i] << " " ;
    }
    cout << endl;

    quickSort(arr,0,n-1);
    
    for(int i = 0; i < n; i++){
        cout  << arr[i] << " " ;
    }




    return 0;
}



// #NOtes-->

// Unstable sorting
// Average Time Complexity - O(nlogn)

// Poor Time Complexity - O(n^2)
// Poor cases are - {1,2,3,4,5} or {5,4,3,2,1}
// Solution to this problem is # Randomised pivot point .
// previously - pvtele = arr[si];
// now - pvtele = arr[(si+en)/2];
// T.C - O(nlogn)
// Space Complexity- O(logn).


// Application of Quick Sort -->

// 1. Internal sorting Uses variation of Quick Sort.
// 2. Quick Select.
// 3. whenever there is no need of stability, quick sort is used.

// # Difference between :--

// Properties    |       Merge sort     |       Quick Sort 
// T.C           |        O(nlogn)      |        O(nlogn)
// S.C           |        O(n)          |         O(logn)  in place sorting
// Stability     |         yes          |           no    

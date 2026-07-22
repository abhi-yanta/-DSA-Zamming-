#include<iostream>
#include<vector>
#include<algorithm>




using namespace std;

int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        // Sorting 
        sort(satisfaction.begin(),satisfaction.end());

        int suff[n];
        suff[n-1] = satisfaction[n-1];
        for(int i = n-2; i >= 0; i--){
            suff[i] = suff[i+1] + satisfaction[i];
        }
        // find the pivot index
        int idx = -1;
        for(int i = 0; i < n; i++){
            if(suff[i] >= 0)
            {idx = i;
            break;}
        }
        if(idx == -1) return 0;
        // Max sum of Like-Time Coefficient 
        int x = 1;
        int maxsum = 0;
        for(int i = idx; i < n; i++){
            maxsum += satisfaction[i] * x;
            x++;
        }
        return maxsum;
    }


int main(){

    int satisfaction[] = {-1,-8,0,5,-9};
    int n = sizeof(satisfaction)/sizeof(satisfaction[0]);
    vector <int> v;
    for(int i = 0; i < n; i++){
        v.push_back(satisfaction[i]);
    }

    int maxsum = maxSatisfaction(v);

    cout << maxsum << " "; 

    cout << endl;




    return 0;
}
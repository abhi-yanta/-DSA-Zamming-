#include<iostream>

using namespace std;

int bestClosingTime(string customers) {
        int n = customers.size();
        int pre[n+1]; // no of N before kth hours.
        int suff[n+1]; // no of Y after and at kth hours.
        pre[0] = 0;
        for(int i = 0; i < n; i++){
            pre[i+1] = pre[i] + ((customers[i] == 'N') ? 1 : 0);
        }
        suff[n] = 0;
        for(int i = n-1; i >= 0; i--){
            suff[i] = suff[i+1] + ((customers[i] == 'Y') ? 1 : 0);
        }
        int minPen = n+5;
        for(int i = 0; i <= n; i++){
            pre[i] += suff[i];
            int pen = pre[i];
            minPen = min(minPen, pen);
        }
        for(int i = 0; i <= n; i++){
            int pen = pre[i];
            if(pen == minPen) return i;
        }
        return n;
    }


int main(){

    string s = "YYNY";

    int minPenalty = bestClosingTime(s);

    cout << minPenalty << endl;
    





    return 0;
}
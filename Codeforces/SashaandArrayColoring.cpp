#include<iostream>
#include<algorithm>
#include<vector>
#define w while
#define i cin
#define o cout
#define ll long long
using namespace std;
int main(){
    int t;
    i>>t;
    while(t--){
        int n;
        i>>n;
        vector<int> a(n);
        for(int j=0; j<n; j++){
            i>>a[j];
        }

        sort(a.begin(),a.end());

        // int diff1 = a[n-1] - a[0];
        // int diff2 = a[n-2] - a[1];

        // int max = diff1+diff2;
        int maxCost = 0;
        int x =n-1;
        for(int i=0; i<n/2; i++){
            int diff = a[x--] - a[i];
            maxCost = maxCost + diff;

        }
        // if(n==1){
        //     o<<"0"<<endl;
        // }
        // else{
            o<<maxCost<<endl;
        // }
   

    }
}
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sq = n*n;
    vector<int> a(sq);
    for(int i=0; i<sq; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    // int biggestSum = 0;
    // for(int i=sq-1; i>=sq-n; i--){
    //     biggestSum+=a[i];
    // }

    // int smallestSum = 0;
    // for(int i=0; i<n; i++){
    //     smallestSum+=a[i];
    // }

    // int maximumSum = biggestSum-(smallestSum);
    int maximumSum = 0;
    // for(int i=sq-1; i>=sq-n-2; i--){
    //     maximumSum+=a[i];
    // }
    int mainDio = 0;
    for(int i=sq-1; i>=sq-n; i--){
        mainDio+=a[i];
    }
    int secDio = 0;
    for(int i=0; i<n; i++){
        secDio+=a[i];
    }
    int diff = mainDio-secDio;
    cout<<diff<<endl;
    // cout<<maximumSum<<endl;
}
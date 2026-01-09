#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#define e endl
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int median = abs(a[0]);
        int greaterMedian = 0;
        int lessMedian = 0;
        for(int i=1; i<n; i++){
            if(abs(a[i])>median){
                greaterMedian++;
            } else if(abs(a[i]<median)){
                lessMedian++;
            }
        }
        if(lessMedian<=n/2){
            cout<<"YES"<<e;
        } else{
            cout<<"NO"<<e;
        }
    }
}
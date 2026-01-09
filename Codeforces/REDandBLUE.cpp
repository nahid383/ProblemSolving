#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"-1"<<endl
#define ans  cout<<result<<endl
#define e endl
#define ll long long
using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int prefixSum1 = INT16_MIN;
        int sum = 0;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
            prefixSum1 = max(prefixSum1, sum);

        }
        sum = 0;

        int prefixSUm2 = INT16_MIN;
        int m;
        cin>>m;
        vector<int> b(m);
        for(int i=0; i<m; i++){
            cin>>b[i];
            sum+=b[i];
            prefixSUm2 = max(prefixSUm2, sum);

        }
        if(prefixSum1<0){
            prefixSum1=0;
        }
        if(prefixSUm2<0){
            prefixSUm2=0;
        }
        int result = prefixSum1+prefixSUm2;
        if(result<0){
            result = 0;
        }
        ans;


    }
}
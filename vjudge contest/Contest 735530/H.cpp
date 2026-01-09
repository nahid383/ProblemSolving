#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int balance = 300;
    int t=51;
    while(t--){
        int n;
        cin>>n;
        if(n==0){
            continue;
        }
        vector<int> a(n);
        int sum = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum=sum+a[i];
            if(sum>300){
                sum=sum-a[i];
            }
        }
        cout<<sum<<"\n";
    }
}
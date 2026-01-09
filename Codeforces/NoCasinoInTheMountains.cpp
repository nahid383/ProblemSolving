#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<list>
#include<unordered_map>
#include<map>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mone cout<<"0"<<endl
#define ans  cout<<result<<endl
#define en endl
#define MOD 998244353
#define ll long long
using namespace std;
void solve(int n, int k, vector<int>& a){
    int count = 0;
    int toi=0;
    for(int i=0; i<=n-k;){
        bool isHike = true;

        for(int j=i; j<i+k; j++){
            if(a[j]==1){
                isHike = false;
                break;
            }
            
        }
        if(isHike){
            count++;
            i+=k+1;
        } else{
            i++;
        }
    }
    cout<<count<<en;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        solve(n,k,a);
    }
       
}

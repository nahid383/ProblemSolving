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
    int currenth = a[k-1];
    int maxh = currenth;
    vector<int> b;
    
    for(int i=0; i<n; i++){
        if(a[i]>=currenth){
            b.push_back(a[i]);
        }
    }
    sort(b.begin(), b.end());
    bool isPossible = true;
    for(int i=0; i<b.size(); i++){
        int diff = abs(b[i]-currenth);
        if(diff>maxh){
        isPossible=false;
        break;
    } 
    currenth=b[i];
    }
    if(isPossible){
        yes;
    } else{
        no;
    }
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

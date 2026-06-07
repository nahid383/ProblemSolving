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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mone cout<<"-1\n"
#define ans  cout<<result<<"\n"
#define en "\n"
#define MOD 998244353
#define ll long long
using namespace std;
const int MAX = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k;
    cin>>k;
    int n = 12;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(k==0){
        cout<<0<<en;
        return 0;
    }
    sort(a.rbegin(), a.rend());
    int sum = 0;
    int count = 0;
    bool isPossible = false;
    for(int i=0; i<12; i++){
        sum=sum+a[i];
        count++;
        if(sum>=k){
            isPossible=true;
            break;

        }
        
    }
    if(isPossible){
        cout<<count<<en;
    } else{
        mone;
    }
}

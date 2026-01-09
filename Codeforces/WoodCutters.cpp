/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D    D
 N  NN  A     A H   H   I   D   D
 N   N  A     A H   H  III  DDDD
*/

#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define mone cout<<"-1\n"
#define ans  cout<<result<<"\n"
#define countt cout<<count<<"\n"
#define vl vector<ll>
#define vi vector<int>
#define foriton for(long long i=0; i<n; i++)
#define forntoi for(long long i=n-1; i>=0; i=i-2)
#define en cout<<"\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;

    if (n==1) {
        cout<<1<<endl;
        return 0;
    }

    vector<pair<ll,ll>> vp(n);
    for (auto &it : vp){
        cin >> it.first >> it.second;
    }

    ll result = 2;
    vl u(n);
    u[0] = vp[0].first;

    for (ll i = 1; i < n - 1; i++) {
        if (vp[i].first-vp[i].second>u[i-1]) {
            u[i]=vp[i].first;
            result++;
        } 
        else if (vp[i].first+vp[i].second<vp[i+1].first) {
            u[i]=vp[i].first+vp[i].second;
            result++;
        } 
        else {
            u[i] = vp[i].first;
        }
    }

    ans;

}

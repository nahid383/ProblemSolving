/*
 N   N   AAAAA  H   H  III  DDDD
 NN  N  A     A H   H   I   D   D
 N N N  AAAAAAA HHHHH   I   D    D
 N  NN  A     A H   H   I   D   D
 N   N  A     A H   H  III  DDDD
*/
#include <bits/stdc++.h>
using namespace std;
 
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mone cout << "-1\n"
#define ans cout << result << "\n"
#define countt cout << count << "\n"
#define vl vector<long long>
#define vi vector<int>
#define vs vector<string>
#define foriton(n) for (long long i = 0; i < n; i++)
#define scan(a, n) for (long long i = 0; i < n; i++) cin >> a[i];
#define forntoi(n) for (long long i = n - 1; i >= 0; i--)
#define sorted(a) sort(a.begin(), a.end())
#define countn(a,b) count(a.begin(), a.end(), b)
#define en cout << "\n"
#define MOD 998244353
#define ll long long
const int MAX = 1e5 + 5;
ll n;
vl seg;

void build(vl &a, ll node, ll l, ll r){
    if(l==r){
        seg[node]=a[l];
        return;
    }

    ll mid = (l+r)/2;
    build(a, node*2, l, mid);
    build(a, node*2+1, mid+1, r);
    seg[node] = min(seg[node*2], seg[node*2+1]);

}

ll query(ll node, ll l, ll r, ll ql, ll qr){
    if(qr<l || r<ql){
        return LLONG_MAX;
    }
    if(ql<=l && r<=qr){
        return seg[node];
    }

    ll mid = (l+r)/2;

    return min(query(node*2, l, mid, ql, qr), query(node*2+1, mid+1, r, ql, qr));

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    cin>>n;
    vl a(n+1);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    seg.assign(4*n,LLONG_MAX);
    build(a, 1, 1, n);

    ll q;
    cin>>q;
    while(q--){
        ll x,y;
        cin>>x>>y;
        cout<<query(1, 0, n-1, x-1, y-1)<<endl;
    }
}
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
ll n,q;
vl seg, a;

void build(ll node, ll l, ll r, bool isOR){
    if(l==r){
        seg[node]=a[l];
        return;
    }

    ll mid = (l+r)/2;
    build(node*2, l, mid, !isOR);
    build(node*2+1, mid+1, r, !isOR);
    
    if(isOR){
        seg[node] = seg[node*2] | seg[node*2+1];
    } else{
        seg[node] = seg[node*2] ^ seg[node*2+1];
    }

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

void update(ll node, ll l, ll r, ll idx, ll val, bool isOR){
    if(l==r){
        seg[node] = val;
        return;
    }

    ll mid = (l+r)/2;

    if(idx<=mid){
        update(node*2, l, mid, idx, val, !isOR);
    } else{
        update(node*2+1, mid+1, r, idx, val, !isOR);
    }

    if(isOR){
        seg[node] = seg[node*2] | seg[node*2+1];
    } else{
        seg[node] = seg[node*2] ^ seg[node*2+1];
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    cin>>n;
    cin>>q;
    ll N = 1LL<<n;
    a.assign(N, 0);
    for(ll i=0; i<N; i++){
        cin>>a[i];
    }
    seg.assign(4*N, 0);
    bool rootOR = (n%2==1);
    build(1, 0, N-1, rootOR);

    while(q--){
        ll pos, val;
        cin>>pos>>val;
        pos--;

        update(1, 0, N-1, pos, val, rootOR);
        cout<<seg[1]<<endl;
    }
}
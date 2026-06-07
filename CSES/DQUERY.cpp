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
vl tree;
vl arr;

void build(ll node, ll start, ll end){
    if(start==end){
        tree[node]=arr[start];
        return;
    }

    ll mid = (start+end)/2;
    build(node*2, start, mid);
    build(node*2+1, mid+1, end);
    tree[node] = tree[node*2] + tree[node*2+1];
}

ll query(ll node, ll start, ll end, ll l, ll r){
    if(r<start || end<l){
        return 0;
    }

    if(l<=start && end<=r){
        return tree[node];
    }

    ll mid = (start+end)/2;

    return query(node*2, start, mid, l, r) + query(node*2+1, mid+1, end, l, r);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll q;
    cin>>n>>q;
    vl a(n+1), last(1e6+5, 0);
    tree.assign(4*n, 0);

    for(ll i=1; i<=n; i++){
        cin>>arr[i];
    }
    struct Query{ int l,r,idx; };
    vector<Query> queries(q);
    for(int i = 0; i < q; i++){
        cin >> queries[i].l >> queries[i].r;
        queries[i].idx = i;
    }

    build(1, 1, n);

    while(q--){
        ll a,b;
        cin>>a>>b;
        if(a>b){
            swap(a, b);
        }
        cout<<query(1, 1, n, a, b)<<"\n";
    }
    

    
}
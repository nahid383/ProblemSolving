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
vl tree1, tree2;
vl arr, srtarr;

void build(vl &tree, vl &a, ll node, ll start, ll end){
    if(start==end){
        tree[node]=a[start];
        return;
    }

    ll mid = (start+end)/2;
    build(tree, a, node*2, start, mid);
    build(tree, a, node*2+1, mid+1, end);
    tree[node] = tree[node*2] + tree[node*2+1];
}

ll query(vl &tree, ll node, ll start, ll end, ll l, ll r){
    if(r<start || end<l){
        return 0;
    }

    if(l<=start && end<=r){
        return tree[node];
    }

    ll mid = (start+end)/2;

    return query(tree, node*2, start, mid, l, r) + query(tree, node*2+1, mid+1, end, l, r);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q;
    cin>>n;
    arr.resize(n+1, 0);
    srtarr.resize(n+1, 0);
    tree1.resize(4*n+5, 0);
    tree2.resize(4*n+5, 0);

    for(ll i=1; i<=n; i++){
        cin>>arr[i];
        srtarr[i]=arr[i];
    }

    sorted(srtarr);

    build(tree1, arr, 1, 1, n);
    build(tree2, srtarr, 1, 1, n);
    cin>>q;
    while(q--){
        ll type, l,r;
        cin>>type>>l>>r;
        if(type==1){
            cout<<query(tree1, 1, 1, n, l, r)<<endl;
        } else{
            cout<<query(tree2, 1, 1, n, l, r)<<endl;
        }
    }
    

    
}
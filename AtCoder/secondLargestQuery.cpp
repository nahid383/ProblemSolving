#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> seg;
vector<ll> a;
ll n, q;

void build(ll node, ll l, ll r){
    if(l==r){
        seg[node] = a[l];
        return;
    }

    ll mid = (l+r)/2;

    build(node*2, l, mid);
    build(node*2+1, mid+1, r);

    seg[node] = min(seg[node*2], seg[node*2+1]);

}

void update(ll node, ll l, ll r, ll idx, ll val){
    if(l==r){
        seg[node] = val;
        return;
    }

    ll mid = (l+r)/2;

    if(idx<=mid){
        update(node*2, l, mid, idx, val);
    } else{
        update(node*2+1, mid+1, r, idx, val);
    }

    seg[node] = min(seg[node*2], seg[node*2+1]);
}



int main(){
    cin>>n>>q;
    a.resize(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    seg.assign(4*n, LLONG_MAX);

    build(1, 0, n-1);

    while(q--){
        ll type;
        cin>>type;
        if(type==1){
            ll idx, val;
            cin>>idx>>val;
            idx--;
            update(1, 0, n-1, idx, val);
        } else{
            ll l, r;
            cin>>l>>r;
            l--;
            r--;
            cout<<query(1, 0, n-1, l, r)<<endl;
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> seg, lazy;
ll n, q;

void push(ll node, ll l, ll r){
    if(lazy[node]!=0){
        seg[node] += (r-l+1)*lazy[node];
        if(l!=r){
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }

        lazy[node] = 0;
    }
}

void update(ll node, ll l, ll r, ll i, ll j, ll val){
    push(node, l, r);

    if(r<i || l>j){
        return;
    }
    if(l>=i && r<=j){
        lazy[node] += val;
        push(node, l, r);
        return;
    }

    ll mid = (l+r)/2;

    update(node*2, l, mid, i, j, val);
    update(node*2+1, mid+1, r, i, j, val);

    seg[node] = seg[node*2] + seg[node*2+1];
}

ll query(ll node, ll l, ll r, ll i, ll j){
    push(node, l, r);

    if(r<i || l>j){
        return 0;
    } 
    if(l>=i && r<=j){
        return seg[node];
    }

    ll mid = (l+r)/2;

    return query(node*2, l, mid, i, j)+query(node*2+1, mid+1, r, i, j);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>q;
        seg.assign(4*n, 0);
        lazy.assign(4*n, 0);

        while(q--){
            ll type;
            cin>>type;

            if(type == 0){
                ll p, q, v;
                cin>>p>>q>>v;
                update(1, 0, n-1, p-1, q-1, v);
            } else{
                ll p, q;
                cin>>p>>q;
                cout<<query(1, 0, n-1, p-1, q-1)<<endl;
            }
        }
    }
}
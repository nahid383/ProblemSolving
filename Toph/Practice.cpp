#include<bits/stdc++.h>
using namespace std;

vector<long long> seg;
vector<long long> a;
int n, q;

void build(int node, int l, int r){
    if(l==r){
        seg[node] = a[l];
        return;
    }

    int mid = (l+r)/2;

    build(node*2, l, mid);
    build(node*2+1, mid+1, r);

    seg[node] = min(seg[node*2], seg[node*2+1]);

}

void update(int node, int l, int r, int idx, int val){
    if(l==r){
        seg[node] = val;
        return;

    }

    int mid = (l+r)/2;

    if(idx<=mid){
        update(node*2, l, mid, idx, val);
    } else{
        update(node*2+1, mid+1, r, idx, val);
    }

    seg[node] = min(seg[node*2], seg[node*2+1]);
}

int query(int node, int l, int r, int st, int end){
    if(end<l || r<st){
        return LLONG_MAX;
    } 
    if(st<=l && r<=end){
        return seg[node];
    }

    int mid = (l+r)/2;

    return min(query(node*2, l ,mid, st, end), query(node*2+1, mid+1, r, st, end));
}

int main(){
    cin>>n>>q;
    a.resize(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    seg.assign(4*n, LLONG_MAX);

    build(1, 0, n-1);

    cin>>q;
    while(q--){
        int type;
        cin>>type;

        if(type==1){
            int k,u;
            cin>>k>>u;
            k--;
            update(1, 0, n-1, k, u);
        } else{
            int l, r;
            cin>>l>>r;
            l--;
            r--;
            cout<<query(1, 0, n-1, l, r)<<endl;
        }
    }
}
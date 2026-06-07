#include<bits/stdc++.h>
using namespace std;

struct Node 
{
    int left, right;
    int leftFreq, rightFreq;
    int maxFreq;
};

vector<int> arr;
vector<Node> seg;

Node merge(Node a,Node b){
    if(a.maxFreq==0){
        return b;
    }
    if(b.maxFreq == 0){
        return a;
    }

    Node res;
    res.left = a.left;
    res.right= b.right;
    res.leftFreq = a.leftFreq;


    if(a.left==b.left){
        res.leftFreq = res.leftFreq + b.leftFreq;
    }
        

    res.rightFreq=b.rightFreq;
    if(a.right==b.right){
        res.rightFreq += a.rightFreq;
    }

    res.maxFreq=max(a.maxFreq, b.maxFreq);
    if(a.right==b.left){
        res.maxFreq = max(res.maxFreq, a.rightFreq + b.leftFreq);
    }
        

    return res;
}

void build(int idx, int l, int r){
    if(l==r){
        seg[idx] = {arr[l], arr[l], 1, 1, 1};
        return;
    }
    int mid = (l + r)/2;
    build(2*idx, l, mid);
    build(2*idx+1, mid+1, r);
    seg[idx] = merge(seg[2*idx], seg[2*idx+1]);
}

Node query(int idx, int l, int r, int ql, int qr){
    if(r<ql || l>qr){
        return {0, 0, 0, 0, 0};
    }
        
    if(ql<=l && r<=qr){
        return seg[idx];
    }
        

    int mid = (l+r)/2;
    return merge(
        query(2 * idx, l, mid, ql, qr),
        query(2 * idx + 1, mid + 1, r, ql, qr)
    );
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin>>n>>q;

    arr.resize(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
        

    seg.resize(4*n);
    build(1, 0, n-1);

    while(q--){
        int l, r;
        cin>>l>>r;
        l--;
        r--;
        cout<<query(1, 0, n-1, l, r).maxFreq<<endl;
    }
}
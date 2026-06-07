#include<bits/stdc++.h>
using namespace std;

// struct Node{
//     Node* next[2];
//     Node(){
//         next[0] = next[1] = NULL;
//     }
// };

// Node* root;

// void insert(int x){
//     Node* cur = root;
//     for(int i=31; i>=0; i--){
//         int b = (x>>i)&1;
//         if(cur->next[b]==NULL){
//             cur->next[b] = new Node();
//         }
//         cur = cur->next[b];
//     }
// }

// int query(int x){
//     Node*cur = root;
//     int res = 0;
//     for(int i=31; i>=0; i--){
//         int b = (x>>i)&1;
//         if(cur->next[1-b]){
//             res |= (1<<i);
//             cur = cur->next[1-b];
//         } else{
//             cur = cur->next[b];
//         }
//     }
//     return res;
// }

struct Node{
    Node* next[2];
    Node(){
        next[0]  = next[1] = NULL;
    }
};

Node* root;

void insert(int x){
    Node* cur = root;
    for(int i=31; i>=0; i--){
        int b = (x>>i)&1;
        if(cur->next[b]==NULL){
            cur->next[b] = new Node();
        }
        cur=cur->next[b];
    }
}

int query(int x){
    Node* cur = root;
    int res = 0;
    for(int i=31; i>=0; i--){
        int b = (x>>i)&1;

        if(cur->next[1-b]){
            res |= (1<<i);
            cur = cur->next[1-b];
        } else{
            cur = cur->next[b];
        }
    }

    return res;
}

int main(){

    root = new Node();
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        insert(a[i]);
    }

    int q;
    cin>>q;
    while(q--){
        int queries;
        cin>>queries;
        cout<<query(queries)<<endl;
    }
}
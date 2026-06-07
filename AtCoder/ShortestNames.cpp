#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node* next[26];
    int cnt = 0;
    Node(){
        for(int i=0; i<26; i++){
            next[i] = NULL;
        }
    }
};

Node* root;

void insert(string s){
    Node* cur = root;
    for(char c:s){
        int id = c-'a';

        if(cur->next[id] == NULL){
            cur->next[id] = new Node();
        }

        cur = cur->next[id];
        cur->cnt++;
    }
}

long long query(string s){
    Node* cur = root;
    int len = 0;
    for(char c:s){
        int id = c-'a';
        cur = cur->next[id];
        len++;

        if(cur->cnt == 1){
            return len;
        }
    }

    return len;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        root = new Node();
        vector<string> v(n);

        for(int i=0; i<n; i++){
            cin>>v[i];
            insert(v[i]);
        }

        long long res = 0;
        for(int i=0; i<n; i++){
            res += query(v[i]);
        }

        cout<<res<<endl;
    }
}
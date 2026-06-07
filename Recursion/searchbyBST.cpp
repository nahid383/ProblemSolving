#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val ){
        data=val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int val){
    if(root==NULL){
        return new Node(val);
    }

    if(val<root->data){
        root->left = insert(root->left, val);
    } else{
        root->right = insert(root->right, val);
    }

    return root;
}

Node* builtBST(vector<int> arr){
    Node* root = NULL;

    for(int val: arr){
        root = insert(root, val);
    }

    return root;
}

bool search(Node* root, int val){
    if(root==NULL){
        return false;
    }

    if(root->data==val){
        return true;
    }

    if(root->data>val){
        return search(root->left, val);
    } else{
        return search(root->right, val);
    }
}

int main(){
    vector<int> a = {3,2,1,5,6,4};

    Node* root  = builtBST(a);
    int val = 9;
    if(search(root, val)){
        cout<<"exist"<<endl;
    } else{
        cout<<"not"<<endl;
    }

}
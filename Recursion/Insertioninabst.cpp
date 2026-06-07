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
    root = insert(root, 9);

    return root;
}

void preorder(Node* root){

    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    vector<int> a = {3,2,1,5,6,4};

    Node* root  = builtBST(a);

    
    preorder(root);
}
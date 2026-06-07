#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node* right;

    Node(int val){
        data=val;
        left = NULL;
        right= NULL;
    }
};

Node* searchi(Node* root, int key){

    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }

    if(root->data>key){
        return searchi(root->left, key);
    } else{
        return searchi(root->right, key);
    }
}
int main(){

    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);

    root->left = new Node(1);
    root->left->right = new Node(3);

    root->right->right = new Node(6);
    int val = 0;

    if(searchi(root, val)){
        cout<<"exist"<<endl;
    } else{
        cout<<"Not"<<endl;
    }


}
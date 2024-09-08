//Implementation of Graph
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

void Inorder(Node* root){
    if(root!=NULL){
        Inorder(root->left);
        cout<<root->key<<" ";
        Inorder(root->right);
    }
}

void Preorder(Node* root){
    if(root!=NULL){
        cout<<root->key<<" ";
        Preorder(root->left);
        Preorder(root->right);
    }
}

void Postorder(Node* root){
    if(root!=NULL){
        Postorder(root->left);
        Postorder(root->right);
        cout<<root->key<<" ";
    }
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    cout<<"Inorder Traversal: "<<" ";
    Inorder(root);
    cout<<endl;
    cout<<"Preorder Traversal: "<< " ";
    Preorder(root);
    cout<<endl;
    cout<<"Postorder Traversal: "<<" ";
    Postorder(root);
    return 0;
}
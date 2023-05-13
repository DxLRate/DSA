#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insertInBST(Node* root, int key){
    if(root == NULL){
        return new Node(key);
    }
    if(key < root->data){
        root->left = insertInBST(root->left, key);
    }
    else if(key > root->data){
        root->right = insertInBST(root->right, key);
    }
    
    return root;
}

Node* inorderSucc(Node* root){
    Node *curr = root;
    while(curr && curr->left !=NULL){
        curr = curr->left;
    }
    return curr;
}

Node* deleteInBST(Node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(key < root->data){
        root->left = deleteInBST(root->left, key);
    }
    else if(key > root->data){
        root->right = deleteInBST(root->right, key);
    }
    else{
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }
        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
        
    }
    return root;
}

Node* searchInBST(Node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    if(key < root->data){
        Node* temp = searchInBST(root->left, key);
        return temp;
    }
    else if(key > root->data){
        Node* temp = searchInBST(root->right, key)
        return temp;
    }
}

void inorder(Node* root){
    if(root = NULL){
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    inorder(root);
    cout<<endl;
    root = deleteInBST(root, 5);
    inorder(root);
    cout<<endl;
}

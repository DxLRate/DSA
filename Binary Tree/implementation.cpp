#include<iostream>
#include<queue>
using namespace std;

//  Binary Tree implementation
class Node{
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

//---------------Insertion in BT -----------------------
void insertion(Node* root, int key){

        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            if(!temp->left){
                temp->left = new Node(key);
                return;
            }else{
                q.push(temp->left);
            }

            if(!temp->right){
                temp->right = new Node(key);
                return;
            }else{
                q.push(temp->right);
            }

        }

    }     

void deletDeepest(struct Node* root,
                  struct Node* d_node)
{
    queue<struct Node*> q;
    q.push(root);
 
    // Do level order traversal until last node
    struct Node* temp;
    while (!q.empty()) {
        temp = q.front();
        q.pop();
        if (temp == d_node) {
            temp = NULL;
            delete (d_node);
            return;
        }
        if (temp->right) {
            if (temp->right == d_node) {
                temp->right = NULL;
                delete (d_node);
                return;
            }
            else
                q.push(temp->right);
        }
 
        if (temp->left) {
            if (temp->left == d_node) {
                temp->left = NULL;
                delete (d_node);
                return;
            }
            else
                q.push(temp->left);
        }
    }
}
 
/* function to delete element in binary tree */
Node* deletion(struct Node* root, int key)
{
    if (root == NULL)
        return NULL;
 
    if (root->left == NULL && root->right == NULL) {
        if (root->data == key)
            return NULL;
        else
            return root;
    }
 
    queue<struct Node*> q;
    q.push(root);
 
    struct Node* temp;
    struct Node* key_node = NULL;
 
    // Do level order traversal to find deepest
    // node(temp) and node to be deleted (key_node)
    while (!q.empty()) {
        temp = q.front();
        q.pop();
 
        if (temp->data == key)
            key_node = temp;
 
        if (temp->left)
            q.push(temp->left);
 
        if (temp->right)
            q.push(temp->right);
    }
 
    if (key_node != NULL) {
        int x = temp->data;
        deletDeepest(root, temp);
        key_node->data = x;
    }
    return root;
}

void preorder(Node* root){
        if(root ==NULL)
        return;

        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }

int main(){
    Node* root = new Node(10);
    insertion(root, 5);
    insertion(root, 6);
    insertion(root, 8);
    insertion(root, 9);

    root = deletion(root, 8);
    preorder(root);
    
    

    return 0;
}
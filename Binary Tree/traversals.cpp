// ----------------------- Preorder traversals-----------------------

void preorder(Node* root){
    if(root==nullptr)
    return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


// ---------------------Inorder Traversal -----------------------

void inorder(Node* root){
    if(root==nullptr)
    return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


// ---------------------- Postorder Traversal -------------------------

void postorder(Node* root){
    if(root==nullptr)
    return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

// ---------------------Level Order Traversal ----------------------

void levelOrder(Node* root){
    if(root == nullptr)
    return;

    queue<Node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp != nullptr){
            cout<<temp->data<<" ";
            if(temp-left)
            q.push(temp->left);

            if(temp->right)
            q.push(temp->right);
        }else if(!empty()){
            q.push(nullptr);
        }
    }
}
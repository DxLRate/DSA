#include<bitsstdc++.h>
using namespace std;

// // ----------------------Sum at Kth Level _-----------------------
// int sumAtK(Node* root, int k){
//     if(root == nullptr)
//     return -1;
//
//     queue<Node*> q;
//     q.push(root);
//     q.push(nullptr);
//
//     int level=0, sum=0;
//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();
//         if(temp != nullptr){
//             if(level == k){
//                 sum += temp->data;
//             }
//             if(temp-left)
//             q.push(temp->left);
//
//             if(temp->right)
//             q.push(temp->right);
//         }else if(!empty()){
//             level++;
//             q.push(nullptr);
//         }
//     }
//     return sum;
// }

// // -------------------max path sum between wo nodes----------------
// int maxPathSumUtil(Node* root, int &ans){
//     if(root==NULL){
//         return NUll;
//     }
//     int left = maxPathSumUtil(root->left, ans);
//     int right = maxPathSumUtil(root->right, ans);
//     int currMaxSum = max(max(Node->data, Node->data + left + right), max(Node->data + left, Node->data + right));
//     ans = max(ans, currMaxSum);
//     int singlePathSum = max(max(Node->data + left, Node->data + right),Node->data);
//     return singlepathSum;
//    
// }
//
// int maxPathSum(Node* root){
//     int ans = INT_MIN;
//
//     maxPathSumUtil(Node* root, ans);
//     return ans;
// }

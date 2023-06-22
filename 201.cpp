//find largest subtree sum in a tree
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left, *right;
    Node(int d){
        data=d;
        left=right=NULL;
    }
};

int helper(Node *root, int &ans){
    if(root==NULL){
        return 0;
    }
    int sum=root->data+helper(root->left, ans)+helper(root->right, ans);
    ans=max(ans, sum);
    return sum;
}

int largestSubtreeSum(Node *root){
    if(!root){
        return 0;
    }
    int ans=INT_MIN;
    helper(root, ans);
    return ans;
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(-2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(-6);
    root->right->right=new Node(2);
    cout<<largestSubtreeSum(root);
}



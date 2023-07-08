//Diagnol Traversal of a Binary tree
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

void diagonaltraversal(Node *root){
    vector<int>ans;
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        vector<int>temp;
        for(int i=0; i<n; i++){
            Node *t=q.front();
            q.pop();
            while(t){
                temp.push_back(t->data);
                if(t->left){
                    q.push(t->left);
                }
                t=t->right;
            }
        }
        for(int i=0; i<temp.size(); i++){
                ans.push_back(temp[i]);
            }
        }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    Node* root=new Node(8);
    root->left=new Node(3);
    root->right=new Node(10);
    root->left->left=new Node(1);
    root->right->left=new Node(6);
    root->right->right=new Node(14);
    root->right->left->left=new Node(4);
    root->right->left->right=new Node(7);
    root->right->right->left=new Node(13);
    diagonaltraversal(root);
}


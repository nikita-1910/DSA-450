//Zig-Zag traversal of a binary tree
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

void zigzagtraversal(Node *root){
    vector<int>ans;
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    bool flag=false;
    while(!q.empty()){
        int n=q.size();
        vector<int>temp;
        for(int i=0; i<n; i++){
            Node *t=q.front();
            q.pop();
            temp.push_back(t->data);
            if(t->left){
                q.push(t->left);
            }
            if(t->right){
                q.push(t->right);
            }
        }
        flag=!flag;
        if(flag==false){
            reverse(temp.begin(), temp.end());
        }
        for(int i=0; i<temp.size(); i++){
            ans.push_back(temp[i]);
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i];
    }
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    zigzagtraversal(root);
}

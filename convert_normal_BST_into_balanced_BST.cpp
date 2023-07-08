#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
	int data;
	Node* left, *right;
	Node(int x){
	    data=x;
	    left=right=NULL;
	}
};

void storeNodes(Node* root, vector<Node*> &nodes){
	if(!root){
		return;
    }
	storeNodes(root->left, nodes);
	nodes.push_back(root);
	storeNodes(root->right, nodes);
}

Node* buildBST(vector<Node*> &nodes, int start, int end){
	if(start>end){
		return NULL;
    }
	int mid=(start+end)/2;
	Node *root=nodes[mid];
	root->left=buildBST(nodes, start, mid-1);
	root->right=buildBST(nodes, mid+1, end);
	return root;
}

Node* buildTree(Node* root){
	vector<Node*>nodes;
	storeNodes(root, nodes);
	int n=nodes.size();
	return buildBST(nodes, 0, n-1);
}

void preOrder(Node* node){
	if(node){
	    cout<<node->data<<" ";
	    preOrder(node->left);
	    preOrder(node->right);
	}
}

int main(){
	Node* root=new Node(10);
	root->left=new Node(8);
	root->left->left=new Node(7);
	root->left->left->left=new Node(6);
	root->left->left->left->left=new Node(5);
	root = buildTree(root);
	printf("Preorder traversal of balanced "
			"BST is : \n");
	preOrder(root);
	return 0;
}
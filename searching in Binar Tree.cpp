#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
	
	Node(int value){
		data = value;
		left = right = NULL;
	}
};

bool search(Node* root , int key){
	if(root == NULL){
		return false;
	}
	
	if(root->data == key){
		return true;
	}
	
	return search(root->left , key) || search(root->right , key);
}

void traversal(Node* root){
	if(root == NULL){
		return;
	}
	traversal(root->left);
	cout << root->data <<endl;
	traversal(root->right);
}

int main(){
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	cout << search(root, 3);
}

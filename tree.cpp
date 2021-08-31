#include<iostream>
#include<malloc.h>
using namespace std;
struct bstnode{
	int data;
	bstnode *left;
	bstnode *right;
};

bstnode *getNewNode(int data){
	bstnode *newNode=new bstnode();
	newNode->data=data;
	newNode->left=newNode->right=NULL;
	return newNode;
}

bstnode * Insert(bstnode* root,int data){
	if(root==NULL){
		root=getNewNode(data);
	}else if (data<=root->data){
		root->left=Insert(root->left,data);
	}else{
		root->right=Insert(root->right,data);
	}
	return root;
}
void preorder(bstnode * root){
 if(root==NULL)return;
 cout<<root->data<<"\t";
 preorder(root->left);
 preorder(root->right);
 	
}
void inorder(bstnode * root){
 if(root==NULL)return;
 inorder(root->left);
 cout<<root->data<<"\t";
 inorder(root->right);
 	
}
void postorder(bstnode * root){
 if(root==NULL)return;
 postorder(root->left);
 postorder(root->right);
 cout<<root->data<<"\t";
}
//deletion of a node
bstnode *findMin(bstnode* root){
	while(root->left!=NULL)
		root=root->left;
		return root;
}
struct bstnode* deleteNode(struct bstnode *root,int data){
	if(root==NULL)
	return root;
	else if(data<root->data)
	root->left=deleteNode(root->left,data);
	else if(data>root->data)
	root->right=deleteNode(root->right,data);
	else{
		//case 1: if node is leaf node or node have no child
		if(root->left ==NULL && root->right==NULL){
			delete root;
			root=NULL;
		}
		//case 2:node have one child
	   else if(root->left==NULL){
		bstnode * temp=root;
		root=root->right;
		delete temp;
	}else if(root->right==NULL){
		bstnode * temp=root;
		root=root->left;
		delete temp;
	}
	//case 3: node have two children
	else{
		bstnode *temp=findMin(root->right);
		root->data=temp->data;
		root->right=deleteNode(root->right,temp->data);
	}
}
	return root;
}
int main(){
	bstnode *root=NULL;
	root=Insert(root,15);
	root=Insert(root,10);
	root=Insert(root,20);
	root=Insert(root,25);
	root=Insert(root,12);
	//root=Insert(root,18);
	cout<<"Preoder Traversal is:  ";
	preorder(root);
	cout<<endl<<endl<<"Inorder Traversal is:  ";
	inorder(root);
	cout<<endl<<endl<<"Postorder Traversal is:  ";
	postorder(root);
	//deleteNode(root,12);
	root=deleteNode(root,15);
	cout<<endl<<endl<<"After deletion Preoder Traversal is:  ";
	preorder(root);
	return 0;
}
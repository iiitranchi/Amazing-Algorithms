#include<bits/stdc++.h>
using namespace std;
struct BstNode
{
	int data;
	BstNode* left;
	BstNode* right;
};
BstNode* insert(BstNode* root,int data);
BstNode* GetNewNode(int data);
bool Search(BstNode* root,int data);
int FindHeight(BstNode* root);
void Show(BstNode* root);
int isbst(BstNode* root);
int isbstless(BstNode* root,int data);
int isbstgreater(BstNode* root,int data);
int main()
{
	BstNode* root=NULL;
	root=insert(root,15);
	root=insert(root,10);
	root=insert(root,20);
	root=insert(root,25);
	root=insert(root,8);
	root=insert(root,12);
	if(root==NULL)		
		cout<<"Empty Tree";
	else
	{
		BstNode* max=root;
		BstNode* min=root;
		while(max->right!=NULL)
		{
			max=max->right;
		}
		while(min->left!=NULL)
		{
			min=min->left;
		}
		cout<<min->data<<" ";
		cout<<max->data<<" ";
	}
	cout<<FindHeight(root);
}
int FindHeight(BstNode* root)
{
	if(root==NULL)
		return -1;
	return (max(FindHeight(root->left),FindHeight(root->right))+1);
}
BstNode* insert(BstNode* root,int data)
{
	if(root==NULL)
	{
		root=GetNewNode(data);
	}
	else if(data<=root->data)
	{
		root->left=insert(root->left,data);
	}
	else if(data>root->data)
	{
		root->right=insert(root->right,data);
	}
	return root;
}
BstNode* GetNewNode(int data)
{
	BstNode* newNode=(BstNode*)malloc(sizeof(BstNode));
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}
bool Search(BstNode* root,int data)
{
	if(root==NULL)
		return false;
	if(root->data==data)
		return true;
	if(root->data<data)
		return Search(root->right,data);
	if(root->data>data)
		return Search(root->left,data);
}
void Show(BstNode* root)
{
	cout<<root->data<<" ";
	if(root->left!=NULL)
	{
		Show(root->left);
	}
	if(root->right!=NULL)
	{
		Show(root->right);
	}
}
int isbst(BstNode* root)
{
	if(root==NULL)
		return 1;
	if(isbstless(root->left,root->data) && isbstgreater(root->right,root->data) && isbst(root->left) && isbst(root->right))
		return 1;
	else
		return 0;
}
int isbstless(BstNode* root,int data)
{
	if(root==NULL)
		return 1;
	if(root->data<=data && isbstless(root->left,data) && isbstless(root->right,data))
		return 1;
	else
		return 0;
}
int isbstgreater(BstNode* root,int data)
{
	if(root==NULL)
		return 1;
	if(root->data>data && isbstgreater(root->left,data) && isbstgreater(root->right,data))
		return 1;
	else
		return 0;
}
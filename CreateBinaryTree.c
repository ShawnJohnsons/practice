#include<stdio.h>
#include <stdlib.h> 
typedef struct Binarytree
{
	int data;
	struct Binarytree *LeftChild;
	struct Binarytree *RightChild;
}Binarytree;
Binarytree *CreatTree()
{
	Binarytree *Treeroot;
	int val;
	printf("please input a value of  binary tree: (inputing -1 means NULL)");
	scanf("%d",&val);
	if(val == -1)
	{
		Treeroot = NULL;
	}	
	else
	{
		Treeroot = (Binarytree *)malloc(sizeof(Binarytree));
		Treeroot->data = val;
		printf("LeftChild:");
		Treeroot->LeftChild = CreatTree();
		printf("RightChild:");
		Treeroot->RightChild = CreatTree();
	}
	return Treeroot;
}
void DisplayPretree(Binarytree *Treeroot)
{
	if (Treeroot == NULL)
	{
		return;
	}
	else
	{
		DisplayPretree(Treeroot->LeftChild);
		printf("%d   ",Treeroot->data);
		DisplayPretree(Treeroot->RightChild);		
	}
}
void ChangeMirror(Binarytree *Treeroot)
{
	if(Treeroot == NULL)
	{
		return;
	}
	if(Treeroot->LeftChild == NULL && Treeroot->RightChild ==NULL)
	{
		return;
	}
	Binarytree *temp;
	temp = Treeroot->LeftChild;
	Treeroot->LeftChild = Treeroot->RightChild;
	Treeroot->RightChild = temp;
	if(Treeroot->LeftChild)
	{
		ChangeMirror(Treeroot->LeftChild);
	}	
	if(Treeroot->RightChild)
	{
		ChangeMirror(Treeroot->RightChild);
	}	
}
int main()
{
	Binarytree *root = CreatTree();
	printf("The original binary tree preorder traversal:");
	DisplayPretree(root);
	printf("\n");
	ChangeMirror(root);
	printf("Mirror binary tree preorder traversal:");
	DisplayPretree(root);
	return 0;
} 


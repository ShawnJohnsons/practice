#include<stdio.h>
#include <stdlib.h> 
typedef struct Binarytree
{
	int data;
	struct Binarytree *Leftchild;
	struct Binarytree *Rightchild;
}Binarytree;
Binarytree *creat_tree()
{
	Binarytree *Treeroot;
	int val;
	printf("please input a value of  binary tree: (inputing -1 means NULL)");
	scanf("%d",&val);
	if(val == -1)
	{
		Treeroot =NULL;
	}	
	else
	{
		Treeroot=(Binarytree *)malloc(sizeof(Binarytree));
		Treeroot->data=val;
		printf("leftchild:");
		Treeroot->Leftchild=creat_tree();
		printf("Rightchild:");
		Treeroot->Rightchild=creat_tree();
	}
	return Treeroot;
}
void display_pretree(Binarytree *Treeroot)
{
	if (Treeroot == NULL)
	{
		return;
	}
	else
	{
		display_pretree(Treeroot->Leftchild);
		printf("%d   ",Treeroot->data);
		display_pretree(Treeroot->Rightchild);		
	}
}
void change_mirror(Binarytree *Treeroot)
{
	if(Treeroot == NULL)
	{
		return;
	}
	if(Treeroot->Leftchild == NULL && Treeroot->Rightchild ==NULL)
	{
		return;
	}
	Binarytree *temp;
	temp = Treeroot->Leftchild;
	Treeroot->Leftchild = Treeroot->Rightchild;
	Treeroot->Rightchild = temp;
	if(Treeroot->Leftchild)
		change_mirror(Treeroot->Leftchild);
	if(Treeroot->Rightchild)
		change_mirror(Treeroot->Rightchild);
}
int main()
{
	Binarytree *root=creat_tree();
	printf("The original binary tree preorder traversal:");
	display_pretree(root);
	printf("\n");
	change_mirror(root);
	printf("Mirror binary tree preorder traversal:");
	display_pretree(root);
	return 0;
} 


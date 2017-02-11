#include<stdio.h>
#include<string.h>
typedef struct BinaryTree
{
	int data;
	int leftchild;
	int rightchild;
}BTree;
struct BinaryTree *initBtree(int x,struct BinaryTree a[])     //初始化二叉树
{
	int i;
	for(i=0;i<x;i++)
	{
		a[i].data=0;
		a[i].leftchild=-1;
		a[i].rightchild=-1;
	} 
	return a;
} 
struct BinaryTree *creatBtree(int x, struct BinaryTree a[])    //创建二叉树 
{
	int i;
	printf("请输入你要的二叉树的Node：");
	for(i=0;i<x;i++)
		scanf("%d",&a[i].data);       //将数据放入数据域 
	for (i = 0; i < (x ) / 2; i++)     
	{
		if (a[2 * i + 1].data != 0)
		{
			a[i].leftchild = 2 * i + 1;
		}
		if (a[2 * i + 2].data != 0)
		{	
			a[i] .rightchild= 2 * i + 2;
		}
	}
	if (x==0) return NULL;
	return a;
	
}
int leveroutput( struct BinaryTree b[])    //按层次输出二叉树 
{
	int a[100];
	int tail,head,dp=0;
	
	puts("二叉树的层次："); 
	a[1]=0;
    head=1;
    tail=0;
    do
    {
    	tail++;
    	printf("%d\t",b[a[tail]].data);
    	if (b[a[tail]].leftchild!=-1) 
    	{
    		head++;
    		a[head]=b[a[tail]].leftchild;
    	}
    	if (b[a[tail]].rightchild!=-1)
    	{
    		head++;
    		a[head]=b[a[tail]].rightchild;
    	}
    } while (tail<head);
}
int intostack(int stack[], int top, int head)  //入栈操作 
{
	top++;
	stack[top] = head;
	return top;
}
int outstack(int top)    //出栈操作
{
	top--;
	return top;
}
void changeleft_right_child(int x,struct BinaryTree a[])
{
	int stack[x];
	int top=-1;
	int head;
	int change;   //交换左右孩子时候的时候能够存放左右孩子的数据 
	if(a==NULL)
		printf("the tree did not creat");
	else 
		top=intostack(stack,top,0);
	printf("\n所有的左右子树已经交换成功:\n");
	while(top!=-1)
	{
		top=outstack(top); //栈顶元素出站 
		head=stack[top+1];  //取出每一个存放的地址值 
		change=a[head].leftchild;
		a[head].leftchild=a[head].rightchild; 
		a[head].rightchild=change;
		if (!(a[head].leftchild== -1 && a[head].rightchild == -1))
		{
			if (a[head].rightchild!= -1)
				top = intostack( stack, top, a[head].rightchild);
			if (a[head].leftchild!= -1)
				top = intostack( stack, top, a[head].leftchild);
		}
	}
	
	leveroutput(a);
}
int main()
{
	BTree a[1000];
	BTree *b;
	int n;           //定义用户所要的结点数	
	printf("请输入你想要的结点数：");
	scanf("%d",&n) ;
	initBtree(n,a); 
	b=creatBtree(n,a);
	leveroutput(a);	
	changeleft_right_child(n,a);
	return 0;
} 
 

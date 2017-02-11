#include<stdio.h>
#include<string.h>
typedef struct BinaryTree
{
	int data;
	int leftchild;
	int rightchild;
}BTree;
struct BinaryTree *initBtree(int x,struct BinaryTree a[])     //��ʼ��������
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
struct BinaryTree *creatBtree(int x, struct BinaryTree a[])    //���������� 
{
	int i;
	printf("��������Ҫ�Ķ�������Node��");
	for(i=0;i<x;i++)
		scanf("%d",&a[i].data);       //�����ݷ��������� 
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
int leveroutput( struct BinaryTree b[])    //�������������� 
{
	int a[100];
	int tail,head,dp=0;
	
	puts("�������Ĳ�Σ�"); 
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
int intostack(int stack[], int top, int head)  //��ջ���� 
{
	top++;
	stack[top] = head;
	return top;
}
int outstack(int top)    //��ջ����
{
	top--;
	return top;
}
void changeleft_right_child(int x,struct BinaryTree a[])
{
	int stack[x];
	int top=-1;
	int head;
	int change;   //�������Һ���ʱ���ʱ���ܹ�������Һ��ӵ����� 
	if(a==NULL)
		printf("the tree did not creat");
	else 
		top=intostack(stack,top,0);
	printf("\n���е����������Ѿ������ɹ�:\n");
	while(top!=-1)
	{
		top=outstack(top); //ջ��Ԫ�س�վ 
		head=stack[top+1];  //ȡ��ÿһ����ŵĵ�ֵַ 
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
	int n;           //�����û���Ҫ�Ľ����	
	printf("����������Ҫ�Ľ������");
	scanf("%d",&n) ;
	initBtree(n,a); 
	b=creatBtree(n,a);
	leveroutput(a);	
	changeleft_right_child(n,a);
	return 0;
} 
 

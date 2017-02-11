#include<stdio.h>
#include<stdlib.h>
struct list
{
	int data;
	struct list *next;
}; 
struct list * creat_list()   //创建链表由用户直接输入数据 
{
	struct list *p,*q,*ph;
	int a;
	ph=(struct list *)malloc(sizeof(struct list));
	p=q=ph;
	printf("input a number,enter-1 to the end:\n");
	scanf("%d",&a);
	while(a!=-1)
	{
		p=(struct list*)malloc(sizeof(struct list));
		p->data;
		q->next=p;
		q=p;
		scanf("%d",&a); 
	} 
	p->next='\0';
	return (ph);
}
int main()
{
	struct list * head;
	head=creat_list();
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
struct list
{
	int data;
	struct list *next;
}; 
struct list * creat_list(int n)   //creat a linked list 
{
	int i;
	struct list *p1,*p2,*head=NULL; //*head was use to mark the list,p1 used to point new memory space, p2 ponits to the tail node,and link the newly assigned node  
	int num;
	for(i=1;i<=n;i++)
	{
		p1=(struct list*)malloc(sizeof(struct list));  //Dynamic allocation of memory space
		printf("please input the %d numeber of list:\n",i);
		scanf("%d",&num);	
		p1->data=num;
		if(head==NULL)  //the head point of list
		{
			head=p1;
			p2=p1;
		}
		else
		{
			p2->next=p1;
			p2=p1;
		}
		p2->next=NULL;   //the point of the tail node is NULL
	}
	return head;	
}
void displaylist(struct list * head)
{
	struct list *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
} 
int main()
{
	struct list * head;
	int length;
	printf("input the length of list:");
	scanf("%d",&length);
	head=creat_list(length);
	displaylist(head);
	return 0;
}


//看数据结构的的定义，然后自己来写 
//变量名写一个有意义的东西
//要有个输出显示，可以看出来   输出现实显示 

#include<stdio.h>
#include<stdlib.h>
struct list
{
	int data;
	struct list *next;
}; 
struct list * creat_list(struct list * head, int num)   //creat a linked list 
{	
	
	struct list *p1; 
	p1=(struct list*)malloc(sizeof(struct list));  //Dynamic allocation of memory space
	p1->next=head;
	p1->data=num;
	return p1;
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
	int num;
	int i;
	printf("input the length of list:");
	scanf("%d",&length); 
	head=malloc(sizeof(head));
	head->data=0;
	head->next=NULL; 
	for(i = 0; i < length; i++)
	{
		printf("please input the %d numeber of list:\n",i+1);
		scanf("%d",&num);
		if(head->data==0)  //the head point of list
		{ 
			head->data=num;
		}
		else
		{
			head=creat_list(head,num); 
		}
	}
	displaylist(head);
	return 0;
}

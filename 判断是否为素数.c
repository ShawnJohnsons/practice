#include<stdio.h>
int main()
{
	int n=0;
	int i;
	int a=0;//��¼�������� 
	printf("������һ������");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		a++; 
	} 
	if(a==0)
		printf("%d��һ������",n);
	else
		printf("%d��һ������",n);
	return 0; 
} 

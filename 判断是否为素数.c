#include<stdio.h>
int main()
{
	int n=0;
	int i;
	int a=0;//记录几次整除 
	printf("请输入一个数：");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		a++; 
	} 
	if(a==0)
		printf("%d是一个素数",n);
	else
		printf("%d是一个合数",n);
	return 0; 
} 

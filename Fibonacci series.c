#include<stdio.h>  
int fib(int n)      
{  	
	int num1=0,num2=1,num3=1;
	int i;
	printf("Fibonacci series:\n");
    if (n <= 1)  
    {
    	printf("0");
    	return 0;
    } 
    else  
    {
    	printf("0, 1");
        for(i=2;i<n;i++)
		{
			num3=num1+num2;
			num1=num2;
			num2=num3;
			printf(", %d ",num3);
		} 
		return num3;
	}	
}   
int main()  
{  
    int num;
	int back;  
    printf("Please enter a number of the Fibonacci £º");  
    scanf("%d",&num);
	if(num>=1)  
    {
    	back=fib(num);
    	printf("\nThe %d figure is %d !",num,back);
	}
	return 0;  
}


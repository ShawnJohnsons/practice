#include<stdio.h>  
#include<time.h> 
int fib(int n)      
{  	
	int num1 = 0,num2 = 1,num3 = 1;
	int i;
    if (n <= 1)  
    {
    	return 0;
    } 
    else  
    {
        for(i = 2; i < n; i++)
		{
			num3 = num1 + num2;
			num1 = num2;
			num2 = num3;
		} 
		return num3;
	}	
}   
void main()  
{  
    int check;
	int space;
	int i;
	int num1 = 0,num2 = 1,num3 = 1;
	srand((unsigned)time(NULL));
	check = rand()%40;
	printf("Fibonacci series:\n");
	if(check <= 1)
	{
		printf("0");	
	}
	else
	{
		printf("0	1	");
		for(i = 1; i <= check; i++)
		{
			num3 = num1 + num2;
			num1 = num2;
			num2 = num3;	
			printf("%d	",num3);	
		}
	}
	space = fib(check);
	printf("\nThe %d figure is %d !",check,space);
}


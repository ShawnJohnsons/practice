#include<stdio.h>  
int fib(int n)      //n表示输出数列的项数 
{  	
    if (n <= 1)  
        return n;  
    else  
        return fib(n-1) + fib(n-2);  
}  
  
int main()  
{  
    int n;  
    printf("请输入要输出多少项数列：");  
    scanf("%d",&n);  
    int i;  
    for (i = 0; i < n+1; i++)         //输出所有项  
    {  
        printf("%d\n", fib(i));  
    }  
    return 0;  
}

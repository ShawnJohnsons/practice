#include<stdio.h>  
int fib(int n)      //n��ʾ������е����� 
{  	
    if (n <= 1)  
        return n;  
    else  
        return fib(n-1) + fib(n-2);  
}  
  
int main()  
{  
    int n;  
    printf("������Ҫ������������У�");  
    scanf("%d",&n);  
    int i;  
    for (i = 0; i < n+1; i++)         //���������  
    {  
        printf("%d\n", fib(i));  
    }  
    return 0;  
}

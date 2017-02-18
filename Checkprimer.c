#include<stdio.h>
#include<math.h> 
void Checkprimer(int num)
{
	int square;
	int i;
	square=(int)sqrt( (double)num);
	if(num>1)
	{
		for(i=2;i<=square;i++)
		{
			if(num%i==0)
				break;
		}
		if(i>square)
		{
			printf("%d is a primer number!\n",num);
		}
		else
		{
			printf("%d is not a primer number!\n",num);
	    }
	}
	else
	{
		printf("%d is not a primer number!\n",num);
	}
}

int main()
{
	int check[5]={0,1,2,5,9};
	int i;
	for(i=0;i<5;i++)
	{
		Checkprimer(check[i]);	
	}
	return 0; 
} 

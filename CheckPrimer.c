#include<stdio.h>
#include<math.h>
#include<time.h> 
int CheckPrimer(int num)
{
	int square;
	int i;
	square = (int)sqrt( (double)num);
	if(num > 1)
	{
		for(i = 2; i <= square; i++)
		{
			if(num % i == 0)
				break;
		}
		if(i > square)
		{
			return 1; 
		}
		else
		{
			return 0;
	    }
	}
	else
	{
		return 0;
	}
}

void main()
{
	int check[100] = {0};
	srand((unsigned)time(NULL));
	int i;
	for(i = 0; i < 100; i++)
	{
		check[i] = rand()%100;
		if(CheckPrimer(check[i]))
		{
			printf("%d is a primer number!\n",check[i]);
		}
		else
		{
			printf("%d is not a primer number!\n",check[i]);
		}	
	}
} 

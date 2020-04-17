#include <stdio.h>

int main()
{
	int x,i,ant1,ant2;
	
	scanf("%d",&x);
	
	for (i=0;i<x;i++)
	{
		if (i == 0 && i==x-1)
		{
			printf("%d\n",i);
		}
		else if (i == 0 && i!=x-1)
		{
			printf("%d ",i);
			ant1 = i;
		}
		else if (i == 1 && i==x-1)
		{
			printf("%d\n",i);
		}
		else if (i == 1 && i!=x-1)
		{
			printf("%d ",i);
			ant2 = i;
		}
		else if(i!=0 && i!=1 && i!=x-1)
		{
			printf("%d ",ant1+ant2);
			if (i%2==0)
			{
				ant1 += ant2;
			}
			else if(i%2==1)
			{
				ant2+=ant1;
			}
		}
		else if (i!=0 && i != 1 && i== x-1)
		{
			printf("%d\n",ant1+ant2);
		}
	}	
	
	return 0;
}
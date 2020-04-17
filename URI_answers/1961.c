#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define bool int
#define false 1
#define true 0
int main()
{
	int p,n,ant,agr;
	
	scanf("%d %d",&p,&n);
	bool ganhou = true;
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&agr);
		if(i==0)
		{
			ant = agr;
		}
		else
		{
			if(abs(agr-ant)<=p)
			{
				ant = agr;
				continue;
			}
			else
			{
				ganhou = false;
				break;
			}
		}
	}
	
	if(ganhou==true)
	{
		printf("YOU WIN\n");
	}
	else
	{
		printf("GAME OVER\n");
	}
	
	return 0;
}
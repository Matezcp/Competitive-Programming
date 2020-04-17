#include <stdio.h>

int main()
{
	int a,i,vetor[1000];
	
	scanf("%d",&a);
	
	for(i=0;i<=999;i++)
	{
		if(i==0)	
		{
			vetor[i]=0;
		}
		else if(i!=0)
		{
			if (vetor[i-1]==a-1)
			{
				vetor[i]=0;
			}
			else 
			{
				vetor[i]=vetor[i-1]+1;
			}
		}
		printf("N[%d] = %d\n",i,vetor[i]);
	}
	
	return 0;
}
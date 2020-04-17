#include <stdio.h>

int main()
{
	double a,vetor[100];
	int i;
	
	scanf("%lf",&a);
	
	for(i=0;i<=99;i++)
	{
		if (i==0)
		{
			vetor[i]=a;
		}
		else if(i!=0)
		{
			vetor[i]=vetor[i-1]/2;
		}
		printf("N[%d] = %.4lf\n",i,vetor[i]);
		
	}
	
	return 0;
}
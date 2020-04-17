#include <stdio.h>
#include <string.h>

int main(){
	
	int i,j;
	double vetor[12][12],s=0,m=0;
	char soma[] = "S",multi[] = "M",c[2];

	scanf("%s",c);

	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			scanf("%lf",&vetor[i][j]);
		}
	}

	if(0 == strcmp(c,soma))
	{
		for(i=1;i<=5;i++)
		{
			for(j=0;j<i;j++)
			{
				s+=vetor[i][j];
			}
		}
		for(i=10;i>=6;i--)
		{
			for(j=0;j<11-i;j++)
			{
				s+=vetor[i][j];
			}
		}
		printf("%.1lf\n",s);
	}
	else if(0 == strcmp(c,multi))
	{
		for(i=1;i<=5;i++)
		{
			for(j=0;j<i;j++)
			{
				s+=vetor[i][j];
			}
		}
		for(i=10;i>=6;i--)
		{
			for(j=0;j<11-i;j++)
			{
				s+=vetor[i][j];
			}
		}
		m = s/30;
		printf("%.1lf\n",m);
	}
	
	return 0;
}
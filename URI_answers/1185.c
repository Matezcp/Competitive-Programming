#include <stdio.h>
#include <string.h>

int main(){
	
	int i,j;
	float vetor[12][12],s=0,m=0;
	char soma[] = "S",multi[] = "M",c[2];

	scanf("%s",c);

	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			scanf("%f",&vetor[i][j]);
		}
	}

	if(0 == strcmp(c,soma))
	{
		for(i=0;i<12;i++)
		{
			for(j=0;j<11-i;j++)
			{
				s+=vetor[j][i];
			}
		}
		printf("%.1f\n",s);
	}
	else if(0 == strcmp(c,multi))
	{
		for(i=0;i<12;i++)
		{
			for(j=0;j<11-i;j++)
			{
				s+=vetor[j][i];
			}
		}
		m = s/66;
		printf("%.1f\n",m);
	}
	
	return 0;
}
#include <stdio.h>
#include <string.h>

int main(){
	
	int i,j,l;
	float vetor[12][12],s=0,m=0;
	char soma[] = "S",multi[] = "M",c[2];

	scanf("%d",&l);
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
			s+=vetor[l][i];
		}
		printf("%.1f\n",s);
	}
	else if(0 == strcmp(c,multi))
	{
		for(i=0;i<12;i++)
		{
			s+=vetor[i][l];
			m = s/12;
		}
		printf("%.1f\n",m);
	}

	return 0;
}
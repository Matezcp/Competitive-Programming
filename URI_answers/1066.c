#include <stdio.h>

int main(){
	
	int a,b,npa = 0,ni = 0,npo = 0,nn = 0;
	
	for (a = 1; a <= 5; a++)
	{
		scanf("%d",&b);
		
		if (b % 2 == 0)
		{
			npa++;
		}
		if (b % 2 == 1 || b % 2 == -1)
		{
			ni++;
		}
		if (b > 0)
		{
			npo++;
		}
		if (b < 0)
		{
			nn++;
		}
	}
	
	printf("%d valor(es) par(es)\n",npa);
	printf("%d valor(es) impar(es)\n",ni);
	printf("%d valor(es) positivo(s)\n",npo);
	printf("%d valor(es) negativo(s)\n",nn);
	
	
	return 0;
}
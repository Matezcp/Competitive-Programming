#include <stdio.h>

int main()
{
	int a,i,menor,pos;
	
	scanf("%d",&a);
	int vetor[a];
	
	for(i=0;i<=a-1;i++)
	{
		scanf("%d",&vetor[i]);
		if(vetor[i]<menor)
		{
			menor = vetor[i];
			pos=i;
		}
		else if(vetor[i]==menor)
		{
			menor = menor;
		}
	}
	
	printf("Menor valor: %d\n",menor);
	printf("Posicao: %d\n",pos);
	
	return 0;
}
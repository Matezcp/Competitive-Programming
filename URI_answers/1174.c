#include <stdio.h>

int main(){
	
	float vetor[100];
	int i,j;
	
	for(i=0;i<=99;i++)
	{
		scanf("%f",&vetor[i]);
		
		if(vetor[i]<=10)
		{
			printf("A[%d] = %.1f\n",i,vetor[i]);
		}
	}	
	
	return 0;
}
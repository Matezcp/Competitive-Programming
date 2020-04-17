#include <stdio.h>

int main(){
	
	int vetor[10];
	int i,a;
	
	scanf("%d",&a);
	
	for(i=0;i<=9;i++)
	{
		if(i==0)
		{
			vetor[0]=a;
		}
		else
		{
			vetor[i]=vetor[i-1]*2;
		}
		printf("N[%d] = %d\n",i,vetor[i]);
	}
	return 0;
}
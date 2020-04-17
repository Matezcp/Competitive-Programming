#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char escolha1[7],escolha2[7];
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%s %s",escolha1,escolha2);
		
		if(0==strcmp(escolha1,"papel") && 0==strcmp(escolha2,"papel"))
		{
			printf("Ambos venceram\n");
		}
		else if(0==strcmp(escolha1,"papel"))
		{
			printf("Jogador 2 venceu\n");
		}
		else if(0==strcmp(escolha2,"papel"))
		{
			printf("Jogador 1 venceu\n");
		}
		else if(0==strcmp(escolha1,"ataque")&&0==strcmp(escolha2,"pedra"))
		{
			printf("Jogador 1 venceu\n");
		}
		else if(0==strcmp(escolha1,"pedra")&&0==strcmp(escolha2,"ataque"))
		{
			printf("Jogador 2 venceu\n");
		}
		else if(0==strcmp(escolha1,"pedra")&&0==strcmp(escolha2,"pedra"))
		{
			printf("Sem ganhador\n");
		}
		else
		{
			printf("Aniquilacao mutua\n");
		}	
	}
	
	
	return 0;
}
#include <stdio.h>
#define bool int
#define false 1
#define true 0
int main(){
	
	int i,g,inter = 0,gremio = 0,r,n =0,empate = 0;
	bool stop = false,resp;
	
	while (stop == false)
	{
		n++;
		resp = false;
		scanf("%d %d",&i,&g);
		
		if (i < g)
		{
			gremio++;
		}
		else if (g < i)
		{
			inter++;
		}
		else if (g == i)
		{
			empate++;
		}
		
		while (resp == false)
		{
			printf("Novo grenal (1-sim 2-nao)\n");
			scanf("%d",&r);	
			
			if (r == 1)
			{
				resp = true;
			}
			else if (r == 2)
			{
				resp = true;
				stop = true;
				printf("%d grenais\n",n);
				printf("Inter:%d\n",inter);
				printf("Gremio:%d\n",gremio);
				printf("Empates:%d\n",empate);
				if (inter < gremio)
				{
					printf("Gremio venceu mais\n");
				}
				else if (gremio < inter)
				{
					printf("Inter venceu mais\n");	
				}
				else if (gremio == inter)
				{
					printf("Nao houve vencedor\n");
				}
			}
		}
		
	}
	
	return 0;
}
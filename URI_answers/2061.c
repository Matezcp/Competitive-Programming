#include <stdio.h>
#include <string.h>

int main()
{
	int n,m;
	char abriu[]="clicou",fechou[]="fechou",acao[8];
	
	scanf("%d %d",&n,&m);
	
	for(int i=0;i<m;i++)
	{
		scanf("%s",acao);
		
		if(0==strcmp(acao,fechou))
		{
			n++;
		}
		else if(0==strcmp(acao,abriu))
		{
			n--;
		}
	}
	
	printf("%d\n",n);
	
	return 0;
}
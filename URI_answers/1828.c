#include <stdio.h>
#include <string.h>

int main()
{	
	char pedra[]="pedra",tesoura[]="tesoura",papel[]="papel",spock[]="Spock",lagarto[]="lagarto";
	int n;
	char shel[8],raj[8];
	
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		scanf("%s %s",shel,raj);
		if(strcmp(shel,raj)==0)
		{
			printf("Caso #%d: De novo!\n",i);
		}
		else if((strcmp(shel,spock)==0 && strcmp(raj,tesoura)==0) || (strcmp(shel,spock)==0 && strcmp(raj,pedra)==0) || (strcmp(shel,pedra)==0 && strcmp(raj,lagarto)==0) || (strcmp(shel,pedra)==0 && strcmp(raj,tesoura)==0) ||(strcmp(shel,tesoura)==0 && strcmp(raj,papel)==0) ||(strcmp(shel,tesoura)==0 && strcmp(raj,lagarto)==0) ||(strcmp(shel,papel)==0 && strcmp(raj,pedra)==0) ||(strcmp(shel,papel)==0 && strcmp(raj,spock)==0) ||(strcmp(shel,lagarto)==0 && strcmp(raj,spock)==0)|| (strcmp(shel,lagarto)==0 && strcmp(raj,papel)==0))
		{
			printf("Caso #%d: Bazinga!\n",i);
		}
		else
		{
			printf("Caso #%d: Raj trapaceou!\n",i);
		}
	}
	
	return 0;
}
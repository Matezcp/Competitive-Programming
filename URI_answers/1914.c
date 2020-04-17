#include <stdio.h>
#include <string.h>

int main()
{
	int n,pri,seg,s;
	char nome1[101],nome2[101],par[]="PAR",impar[]="IMPAR",escolha1[8],escolha2[8];
	
	scanf("%d",&n);
	
	for(int i = 1;i<=n;i++)
	{
		scanf("%s %s %s %s",nome1,escolha1,nome2,escolha2);
		scanf("%d %d",&pri,&seg);
		
		s = pri+seg;
		
		if(s%2==0)
		{
			if(0 == strcmp(escolha1,par))
			{
				printf("%s\n",nome1);
			}
			else
			{
				printf("%s\n",nome2);
			}
		}
		else
		{
			if(0 == strcmp(escolha1,impar))
			{
				printf("%s\n",nome1);
			}
			else
			{
				printf("%s\n",nome2);
			}
		}	
	}
	return 0;
}
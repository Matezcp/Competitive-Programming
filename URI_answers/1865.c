#include <stdio.h>
#include<string.h>

int main()
{
	int n,j;
	char thor[]="Thor",palavra[100];
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		scanf("%s %d",palavra,&j);
		
		if(0 == strcmp(thor,palavra))
		{
			printf("Y\n");
		}
		else
		{
			printf("N\n");
		}
				
	}	
	
	return 0;
}
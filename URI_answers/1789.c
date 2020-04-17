#include <stdio.h>

int main()
{
	int n,f,maior;
	
	while(1)
	{
		if(scanf("%d",&n)==EOF)
		{
			break;	
		} 	
		else	
		{
			for(int i=1;i<=n;i++)
			{
				scanf("%d",&f);
				if(i==1)
				{
					maior = f;
				}
				else if(f > maior)
				{
					maior = f;
				}
			}
			if(maior<10)
			{
				printf("1\n");
			}
			else if(maior >= 10 && maior <20)
			{
				printf("2\n");
			}
			else
			{
				printf("3\n");
			}
		}
	}		
	
	return 0;
}
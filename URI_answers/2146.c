#include <stdio.h>

int main()
{
	int n;
	
	while(1)
	{
		if(scanf("%d",&n)==EOF)
		{
			break;	
		} 	
		else	
		{
			printf("%d\n",n-1);
		}
	}		
	
	return 0;
}
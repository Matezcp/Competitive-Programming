#include <stdio.h>

int main(){
	
	int n,i,a;
	
	scanf("%d",&n);
	
	for (i = 1;i <= n;i++)
	{
		scanf("%d",&a);
		
		if (a == 0)
		{
			printf("NULL\n");
		}
		
		if (a % 2 == 0 && a != 0)
		{
			printf("EVEN ");
		}
		else if (a % 2 == 1 || a % 2 == -1)
		{
			printf("ODD ");
		}
		
		if (a < 0)
		{
			printf("NEGATIVE\n");
		}
		else if (a > 0)
		{
			printf("POSITIVE\n");
		}
	}
	
	return 0;
}
	
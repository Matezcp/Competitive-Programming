#include <stdio.h>

int main()
{
	int n,a;
	
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(a%2==0)
		{
			printf("0\n");
		}
		else
		{
			printf("1\n");
		}
	}
	
	
	
	return 0;
}
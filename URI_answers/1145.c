#include <stdio.h>

int main()
{
	int a,b,i,x=1;
	
	scanf("%d %d",&a,&b);
	
	while (x < b)
	{
		for (i=1;i<=a;i++)
		{
			if (i != a)
			{
				printf("%d ",x);	
			}
			else if (i == a)
			{
				printf("%d\n",x);	
			}
			x++;
		}
	}
	
	return 0;
}
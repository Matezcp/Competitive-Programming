#include <stdio.h>

int main()
{
	int n,q;
	float c,soma=0;
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%f %d",&c,&q);
		
		if(c==1001)
		{
			c=1.5;
		}
		else if(c==1002)
		{
			c=2.5;
		}
		else if(c==1003)
		{
			c=3.5;
		}
		else if(c==1004)
		{
			c=4.5;
		}
		else
		{
			c=5.5;
		}
		soma+=q*c;
	}
	
	printf("%.2f\n",soma);
	
	return 0;
}
#include <stdio.h>

int main()
{
	int a,i,j;
	long long int b,ant1,ant2,s;
	
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		s=0;
		ant1=0;
		ant2=0;
		scanf("%lld",&b);
		
		for(j=0;j<=b;j++)
		{
			if (j == 0 )
			{
				s=0;
				ant1=j;
			}
			else if (j ==1)
			{
				s=1;
				ant2=j;
			}
			else if(j!=0 && j!=1)
			{
				s=ant1+ant2;
			}
			if (j%2==0)
			{
				ant1 += ant2;
			}
			else if(j%2==1)
			{
				ant2+=ant1;
			}
		}
		
		printf("Fib(%lld) = %lld\n",b,s);
	}	
	
	return 0;
}
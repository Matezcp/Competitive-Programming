#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c,x;
	
	while(1)
	{
		scanf("%d",&a);
		
		if(a==0)
		{
			break;
		}
		else
		{
			scanf("%d %d",&b,&c);
			
			x=(a*b*100)/c;
			
			x=sqrt(x);

			printf("%d\n",x);
		}
		
	}
	
	
	return 0;
}
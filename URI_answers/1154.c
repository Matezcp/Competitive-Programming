#include <stdio.h>
#define bool int
#define false 1
#define true 0
int main()
{
	int a,n=0,s=0;
	bool stop = false;
	
	while (stop == false)
	{
		scanf("%d",&a);
		
		if (a >= 0)
		{
			n++;
			s+=a;
		}
		else if (a < 0)
		{
			stop = true;
			printf("%.2f\n",(float)s/n);
		}
	}
	
	return 0;
}
#include <stdio.h>
#define bool int
#define false 1
#define true 0
int main(){
	
	int a,i;
	bool stop = false;
	
	while (stop == false)
	{
		scanf("%d",&a);
		
		if (a != 0)
		{
			for (i = 1;i <= a;i++)
			{
				if (i != a)
				{
					printf("%d ",i);
				}
				else if (i == a)
				{
					printf("%d\n",i);
				}
			}
		}
		else if (a == 0)
		{
			stop = true;
		}
	}	
	
	return 0;
}
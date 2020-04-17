#include <stdio.h>

#define bool int
#define false 1
#define true 0

int main(){
	
	int a = 1,b = 1,s = 0;;
	bool stop = false;
	
		while (stop == false)
		{
			scanf("%d %d",&a,&b);
			s = 0;
			if (a > 0 && b > 0)
			{
				if (a < b)
				{
					for (;a <=b;a++)
					{
						printf("%d ",a);
						s += a;	
					}
					printf("Sum=%d\n",s);
				}
				else if (b < a)
				{
					for (;b <=a;b++)
					{
						printf("%d ",b);
						s += b;	
					}
					printf("Sum=%d\n",s);
				}
			}
			if (a <= 0 || b <= 0)
			{
				stop = true;
			}
		}		
	
	return 0;
}
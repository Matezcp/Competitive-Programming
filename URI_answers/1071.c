#include <stdio.h>

int main(){
	
	int a,b,s = 0;
	
	scanf("%d %d",&a,&b);
	
	if (a == b)
	{
		printf("%d\n",s);
	}
	
	else if (a < b)
	{
		for (a++;a < b;a++)
		{
			if (a % 2 == 1 || a % 2 == -1)
			{
				s += a;	
			}
		}
		printf("%d\n",s);
	}
	
	else if (a > b)
	{
		for (b++;b < a;b++)
		{
			if (b % 2 == 1 || b % 2 == -1)
			{
				s += b;	
			}
		}
		printf("%d\n",s);
	}
	
	return 0;
}
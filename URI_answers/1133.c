#include <stdio.h>

int main(){
	
	int a,b;
	
	scanf("%d %d",&a,&b);
	
	if (a < b)
	{
		for (a++;a<b;a++)
		{
			if (a%5==2 || a%5==3)
			{
				printf("%d\n",a);	
			}
		}
	}
	
	else if(b < a)
	{
		for (b++;b<a;b++)
		{
			if (b%5==2 || b%5==3)
			{
				printf("%d\n",b);
			}
		}
	}
	
	return 0;
}
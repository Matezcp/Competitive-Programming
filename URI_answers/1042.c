#include <stdio.h>

int main(){
	
	int a,b,c,p1,p2,p3;
	
	scanf("%d %d %d", &a,&b,&c);
	
	if (a < b && a < c)
	{
		p1 = a;
		if (b < c)
		{
			p2 = b;
			p3 = c;
		}
		else if (c < b)
		{
			p2 = c;
			p3 = b;
		}
	}
	else if (b < a && b < c)
	{
		p1 = b;
		if (a < c)
		{
			p2 = a;
			p3 = c;
		}
		else if (c < a)
		{
			p2 = c;
			p3 = a;
		}		
	}
	else if (c < a && c < b)
	{
		p1 = c;
		if (a < b)
		{
			p2 = a;
			p3 = b;
		}
		else if (b < a)
		{
			p2 = b;
			p3 = a;
		}		
	}
	
	printf("%d\n",p1);
	printf("%d\n",p2);
	printf("%d\n",p3);
	printf("\n");
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
		
	return 0;
}
#include <stdio.h>

int main(){
	
	int a,b,x,i,s = 0;
	
	scanf("%d",&i);
	
	for (x=1;x<=i;x++)
	{
		scanf("%d %d",&a,&b);
		s = 0;
		if (a < b)
		{
			if(a % 2 == 1|| a % 2 == -1)
			{
				for (a+=2;a < b;a += 2)
				{
					s += a;
				}
			}
			else 
			{
				for (a+=1;a<b;a +=2)
				{
					s += a;
				}
			}
		}
		else if (b < a)
		{
			if(b % 2 == 1|| b % 2 == -1)
			{
				for (b+=2;b < a;b += 2)
				{
					s += b;
				}
			}
			else 
			{
				for (b+=1;b<a;b +=2)
				{
					s += b;
				}
			}
		}
		printf("%d\n",s);
	}
	
	
	return 0;
}
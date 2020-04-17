#include <stdio.h>

int main(){
	
	int a,b,s = 0;
	
	scanf("%d %d",&a,&b);
	
	if(a < b)
	{
		for(a;a<=b;a++)
		{
			if(a%13!=0)
			{
				s+=a;
			}
		}
	}
	else if(b < a)
	{
		for(b;b<=a;b++)
		{
			if(b%13!=0)
			{
				s+=b;
			}
		}
	}
	printf("%d\n",s);
	return 0;
}
#include <stdio.h>

int main()
{
	int n,a,s;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		
		s = 2015 - a;
		
		if(s>0)
		{
			printf("%d D.C.\n",s);
		}
		else
		{
			printf("%d A.C.\n",-s+1);
		}
		
	}
	
	
	
	return 0;
}
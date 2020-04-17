#include <stdio.h>

int main()
{
	int a,n,s=0,i;
	
	scanf("%d %d",&a,&n);
	
	while (n <= 0)
	{
		scanf("%d",&n);
	}
	
	for (i=0;i<=n-1;i++)
	{
		s+=a+i;
	}
	
	printf("%d\n",s);
	
	return 0;
}
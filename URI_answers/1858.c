#include <stdio.h>

int main()
{
	int n,menor,num,pos;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&num);
		if(i==1)
		{
			menor = num;
			pos=i;
		}
		else if(menor > num)
		{
			menor = num;
			pos=i;
		}
	}
	
	printf("%d\n",pos);
	
	return 0;
}
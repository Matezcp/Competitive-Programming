#include <stdio.h>

int main()
{
	int part[5],n,soma=0;
	
	scanf("%d",&n);
	
	for(int i=0;i<5;i++)
	{
		scanf("%d",&part[i]);
		if(part[i]==n)
		{
			soma++;
		}
	}
	
	printf("%d\n",soma);
	
	return 0;
}
#include <stdio.h>

int main(){
	
	int i,maior = 0,a,p;
	
	for (i = 1;i <= 100;i++)
	{
		scanf("%d",&a);	
		if (a > maior)
		{
			maior = a;
			p = i;
		}
	}
	
	printf("%d\n",maior);
	printf("%d\n",p);
	
	return 0;
}
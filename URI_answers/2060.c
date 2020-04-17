#include <stdio.h>

int main()
{
	int n,a,mult2=0,mult3=0,mult4=0,mult5=0;
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		
		if(a%2==0)
		{
			mult2++;
		}
		if(a%3==0)
		{
			mult3++;
		}
		if(a%4==0)
		{
			mult4++;
		}
		if(a%5==0)
		{
			mult5++;
		}
	}
	
	printf("%d Multiplo(s) de 2\n",mult2);
	printf("%d Multiplo(s) de 3\n",mult3);
	printf("%d Multiplo(s) de 4\n",mult4);
	printf("%d Multiplo(s) de 5\n",mult5);
	
	return 0;
}
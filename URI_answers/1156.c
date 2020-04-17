#include <stdio.h>
#include <math.h>

int main()
{
	float s=1,i,a=1;
	
	for (i=3;i<=39;i+=2)
	{
		s+=i/pow(2,a);
		a++;
	}
	
	printf("%.2f\n",s);
	
	return 0;
}
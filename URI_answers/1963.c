#include <stdio.h>

int main()
{
	double a,b;
	char i[]="%";
	
	scanf("%lf %lf",&a,&b);
	
	printf("%.2lf%s\n",((b-a)/a)*100,i);
	
	return 0;
}
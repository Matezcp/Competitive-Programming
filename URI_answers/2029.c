#include <stdio.h>
#include <math.h>
#define pi 3.14

int main()
{
	double v,d,a,alt;
	while(1)
	{
		if(scanf("%lf %lf",&v,&d)==EOF)
		{
			break;	
		} 	
		else	
		{
				a = pi*(pow(d/2,2));
				alt=v/a;
				printf("ALTURA = %.2lf\n",alt);
				printf("AREA = %.2lf\n",a);
		}
	}		
	
	return 0;
}
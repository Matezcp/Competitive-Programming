#include <stdio.h>

int main()
{
	int n=0,i;
	
	scanf("%d",&n);
	
	double resultado=1;
	int num_atual=0;
	char op_atual;
	
	for(i=0;i<n;i++)
	{
		scanf("%d %c",&num_atual,&op_atual);
		if(op_atual=='*')
		{
			resultado *= num_atual;
		}
		else
		{
			resultado /= num_atual;
		}
	}
	printf("%.0lf\n",resultado);
	
	return 0;
}
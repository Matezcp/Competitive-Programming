#include <stdio.h>
#define bool int
#define false 1
#define true 0
int main()
{
	int n,matr,num;
	float nota,maior=0;
	bool existe=false;
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d %f",&matr,&nota);
		if(nota>maior && nota >=8)
		{
			maior = nota;
			num = matr;
			existe = true;
		}
	}
	if(existe==true)
	{
		printf("%d\n",num);
	}
	else
	{
		printf("Minimum note not reached\n");
	}
	
	return 0;
}
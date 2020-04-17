//0 - 400.00 --------15%
//400.01 - 800.00----12%
//800.01 - 1200.00---10%
//1200.01 - 2000.00--7%
//Acima de 2000.00---4%
#include <stdio.h>

int main(){
	
	double s,g;
	char p = '%';
	
	scanf("%lf",&s);
	
	if (s <= 400)
	{
		g = s*0.15;
		s = s*1.15;
		printf("Novo salario: %.2f\n",s);
		printf("Reajuste ganho: %.2f\n",g);
		printf("Em percentual: 15 %c\n",p);
	}
	
	else if (s >= 400.01 && s <= 800)
	{
		g = s*0.12;
		s = s*1.12;	
		printf("Novo salario: %.2f\n",s);
		printf("Reajuste ganho: %.2f\n",g);
		printf("Em percentual: 12 %c\n",p);			
	}
	
	else if (s >= 800.01 && s <= 1200)
	{
		g = s*0.10;
		s = s*1.10;
		printf("Novo salario: %.2f\n",s);
		printf("Reajuste ganho: %.2f\n",g);
		printf("Em percentual: 10 %c\n",p);			
	}
	
	else if (s >= 1200.01 && s <= 2000)
	{
		g = s*0.07;		
		s = s*1.07;
		printf("Novo salario: %.2f\n",s);
		printf("Reajuste ganho: %.2f\n",g);
		printf("Em percentual: 7 %c\n",p);			
	}
	
	else if (s > 2000)
	{
		g = s*0.04;	
		s = s*1.04;
		printf("Novo salario: %.2f\n",s);
		printf("Reajuste ganho: %.2f\n",g);
		printf("Em percentual: 4 %c\n",p);			
	}
	
	return 0;
}
#include <stdio.h>

int main(){
	
char nome;
double sal, vendas, num;

scanf("%s %lf %lf", &nome, &sal, &vendas);

num = (vendas*0.15)+sal;

printf("TOTAL = R$ %.2f\n",num);

return 0;
}
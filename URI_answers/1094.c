#include <stdio.h>
#include <string.h>

int main(){
	
	char sapo[] = "S",rato[] = "R",coelho[] = "C",letra[2], porc[] = "%";
	int n,i,q,qs = 0,qr = 0,qc = 0,qt = 0;
	float ps,pr,pc;
	
	scanf("%d",&n);
	
	for (i = 1;i <= n;i++)
	{
		scanf("%d %s",&q,letra);
		
		if (0 == strcmp(sapo,letra))
		{
			qs += q;
		}
		
		else if (0 == strcmp(rato,letra))
		{
			qr += q;
		}
		
		else if (0 == strcmp(coelho,letra))
		{
			qc += q;
		}
	}
	
	qt = qc+qr+qs;
		
	ps = (qs*1.0/qt*1.0)*100;
	pc = (qc*1.0/qt*1.0)*100;
	pr = (qr*1.0/qt*1.0)*100;
	
	printf("Total: %d cobaias\n",qt);
	printf("Total de coelhos: %d\n",qc);
	printf("Total de ratos: %d\n",qr);
	printf("Total de sapos: %d\n",qs);
	printf("Percentual de coelhos: %.2f %s\n",pc,porc);
	printf("Percentual de ratos: %.2f %s\n",pr,porc);
	printf("Percentual de sapos: %.2f %s\n",ps,porc);
	
	return 0;
}
#include <stdio.h>

int main(){
	
	int a,i,n,s,aux;
	
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		s=0;
		scanf("%d",&n);
		
		for(aux=1;aux<=n;aux++)
		{
			if(n%aux==0)
			{
				s++;;
			}
		}
		
		if (s==2){
			printf("%d eh primo\n",n);
		}
		else
		{
			printf("%d nao eh primo\n",n);
		}
	}
	
	
	
	return 0;
}
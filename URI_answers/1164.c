#include <stdio.h>

int main(){
	
	int a,i,n,s,aux;
	
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		s=0;
		scanf("%d",&n);
		
		for(aux=1;aux<n;aux++)
		{
			if(n%aux==0)
			{
				s+=aux;
			}
		}
		
		if (s==n){
			printf("%d eh perfeito\n",n);
		}
		else
		{
			printf("%d nao eh perfeito\n",n);
		}
	}
	
	
	
	return 0;
}
#include <stdio.h>

int main(){
	
	int a,i=1,s=0;
	
	scanf("%d",&a);
	s = a;
	while (a-i!=1)
	{
		s = s * (a-i);
		i++;
	}
	
	printf("%d\n",s);
	
	return 0;
}
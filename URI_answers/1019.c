#include <stdio.h>
int main(){
	
	int n,h,m,s;
	
	scanf("%d", &n);
	
	h = n/3600;
	n %= 3600;
	m = n/60;
	n %= 60;
	s = n;
	
	printf("%d:%d:%d\n",h,m,s);	
	
	return 0;
}
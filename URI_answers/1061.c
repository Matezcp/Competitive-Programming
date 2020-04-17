#include <stdio.h>

int main(){
	
	int d1,h1,m1,s1,d2,h2,m2,s2,r1,r2,df,hf,mf,sf,r;
	
	scanf("Dia %d %d : %d : %d Dia %d %d : %d : %d",&d1,&h1,&m1,&s1,&d2,&h2,&m2,&s2);
	
	d1 = d1*24*60*60;
	h1 = h1*60*60;
	m1 = m1*60;
	r1 = d1 + h1 + m1 + s1;
	
	d2 = d2*24*60*60;
	h2 = h2*60*60;
	m2 = m2*60;
	r2 = d2 + h2 + m2 + s2;	
	
	r = r2 - r1;
	
	df = r/86400;
	r %= 86400;
	hf = r/3600;
	r %= 3600;
	mf = r / 60;
	r %= 60;
	sf = r;
	
	printf("%d dia(s)\n",df);
	printf("%d hora(s)\n",hf);
	printf("%d minuto(s)\n",mf);
	printf("%d segundo(s)\n",sf);
	
	return 0;
}
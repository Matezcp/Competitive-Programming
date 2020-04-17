#include <stdio.h>

int main()
{
	int n,c,d,u;
	
	scanf("%d",&n);
	c = n-n%100;
	n %= 100;
	d = n-n%10;
	n %= 10;
	u = n;
	//centena
	if(c==1000)
	{
		printf("M\n");
		return 0;
	}
	else if(c!=0)
	{
		if(c<400)
		{
			for(int i=c;i!=0;i-=100)
			{
				printf("C");
			}
		}
		else if(c==400)
		{
			printf("CD");
		}
		else if(c==500)
		{
			printf("D");
		}
		else if(c!=900)
		{
			printf("D");
			for(int i=c-500;i!=0;i-=100)
			{
				printf("C");
			}
		}
		else
		{
			printf("CM");
		}
	}
	//dezena
	if(d!=0)
	{
		if(d<40)
		{
			for(int i=d;i!=0;i-=10)
			{
				printf("X");
			}
		}
		else if(d==40)
		{
			printf("XL");
		}
		else if(d==50)
		{
			printf("L");
		}
		else if(d!=90)
		{
			printf("L");
			for(int i=d-50;i!=0;i-=10)
			{
				printf("X");
			}
		}
		else
		{
			printf("XC");
		}
	}
	
	//unidade
	if(u!=0)
	{
		if(u<4)
		{
			for(int i=u;i!=0;i-=1)
			{
				printf("I");
			}
		}
		else if(u==4)
		{
			printf("IV");
		}
		else if(u==5)
		{
			printf("V");
		}
		else if(u!=9)
		{
			printf("V");
			for(int i=u-5;i!=0;i-=1)
			{
				printf("I");
			}
		}
		else
		{
			printf("IX");
		}
	}
	
	printf("\n");
	return 0;
}
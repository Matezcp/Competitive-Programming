#include <stdio.h>

int main()
{
	int par[5],impar[5],i,a,j;
	par[0] = 32766;
	par[1] =32766;
	par[2] =32766;
	par[3] = 32766;
	par[4] =32766;
	impar[0] = 32766;
	impar[1] =32766;
	impar[2] =32766;
	impar[3] = 32766;
	impar[4] =32766;
	
	for(i=0;i<=14;i++)
	{
		scanf("%d",&a);
		
		if(a%2==0)
		{
			if(par[0]==32766)
			{
				par[0]=a;
			}
			else if(par[1]==32766)
			{
				par[1]=a;
			}
			else if(par[2]==32766)
			{
				par[2]=a;
			}
			else if(par[3]==32766)
			{
				par[3]=a;
			}
			else if(par[4]==32766)
			{
				par[4]=a;
			}
		}
		else if(a%2==1||a%2==-1)
		{
			if(impar[0]==32766)
			{
				impar[0]=a;
			}
			else if(impar[1]==32766)
			{
				impar[1]=a;
			}
			else if(impar[2]==32766)
			{
				impar[2]=a;
			}
			else if(impar[3]==32766)
			{
				impar[3]=a;
			}
			else if(impar[4]==32766)
			{
				impar[4]=a;
			}
		}
		
		if(par[4]!=32766)
		{
			for(j=0;j<=4;j++)
			{
				printf("par[%d] = %d\n",j,par[j]);
				par[j]=32766;
			}
		}
		
		if(impar[4]!=32766)
		{
			for(j=0;j<=4;j++)
			{
				printf("impar[%d] = %d\n",j,impar[j]);
				impar[j]=32766;
			}
		}	
		if(impar[4]==32766&&i==14)
		{
			for(j=0;j<=4;j++)
			{
				if(impar[j]!=32766)
				{
				printf("impar[%d] = %d\n",j,impar[j]);
				impar[j]=32766;					
				}
			}
		}
		
		if(par[4]==32766&&i==14)
		{
			for(j=0;j<=4;j++)
			{
				if(par[j]!=32766)
				{
				printf("par[%d] = %d\n",j,par[j]);
				par[j]=32766;					
				}
			}
		}

	}
	
	return 0;
}
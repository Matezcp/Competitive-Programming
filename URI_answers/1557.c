#include <stdio.h>

int main()
{
	int n,i,j,aux,digit=0;
	
	while(1)
	{				
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		if(n==1)
		{
			printf("1\n\n");
		}
		else
		{
			int dig[n][n];
			int matriz[n][n];
			matriz[0][0]=1;
			for(j=1;j<n;j++)
			{
				matriz[0][j]=matriz[0][j-1]*2;
			}
			for(i=1;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					matriz[i][j]=matriz[i-1][j]*2;
				}
			}

			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					aux=matriz[i][j];
					digit=0;
					do
					{
					aux/=10;
					digit++;
					}while(aux!=0);
					
					dig[i][j]=digit;
				}
			}
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if(j==0)
					{
						for(aux=0;aux<dig[n-1][n-1]-(dig[i][j]-1)-1;aux++)
						{
							printf(" ");
						}
					}
					else
					{
						for(aux=0;aux<dig[n-1][n-1]-(dig[i][j]-1);aux++)
						{
							printf(" ");
						}	
					}
					printf("%d",matriz[i][j]);
					digit=0;
				}
				printf("\n");
			}
			printf("\n");
		}
		
		
	}
	
	
	
	return 0;
}
#include <stdio.h>
#define bool int
#define false 1
#define true 0
int main()
{
	int n,i,j;
	bool fim=false;
	
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		if(n==1)
		{
			printf("  1\n\n");
		}
		else
		{
			int matriz[n][n];
			matriz[0][0]=1;
			for(j=1;j<n;j++)
			{
				matriz[0][j]=matriz[0][j-1]+1;
			}
			for(i=1;i<n;i++)
			{
				matriz[i][0]=matriz[i-1][0]+1;
			}
			for(i=1;i<n;i++)
			{
				for(j=1;j<n;j++)
				{
					matriz[i][j]=matriz[i-1][j-1];
				}
			}
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if(j==0)
					{
						printf("%3d",matriz[i][j]);
					}
					else
					{
						printf(" %3d",matriz[i][j]);
					}
				}
				printf("\n");
			}
			printf("\n");
		}
		
		
	}
	
	
	
	return 0;
}
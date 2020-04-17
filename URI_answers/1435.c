#include <stdio.h>

int main(){
	int n,i,j,f=1,h=0,k,meio,stop=0;
	
	while(stop == 0)
	{
		scanf("%d",&n);
		
		if(n==0)
		{
			stop = 1;
		}
		else if(n==1)
		{
			printf("  1\n\n");
		}
		else
		{
			int vetor[n][n];
			
			for(i=h;i<n;i++)
			{
				for(j=h;j<n;j++)
				{
					if(i==h)
					{
						vetor[i][j]=f;
					}
					else if(i==n-f)
					{
						vetor[i][j]=f;
					}
					else if(j==h)
					{
						vetor[i][j]=f;
					}
					else if(j==n-f)
					{
						vetor[i][j]=f;
					}
				}		
			}	
			h++;
			f++;
			for(k=1;k<n/2;k++)
			{
				for(j=h;j<=n-f;j++)
				{
					vetor[h][j]=f;
				}
				for(i=h;i<=n-f;i++)
				{
					vetor[i][n-f]=f;
				}
				for(j=n-f;j>h;j--)
				{
					vetor[n-f][j]=f;
				}
				for(i=n-f;i>h;i--)
				{
					vetor[i][h]=f;
				}
				h++;
				f++;
			}
				
			if(n%2==1)
			{
				meio=n/2;
				vetor[meio][meio]=f;
			}
			
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if(j==0)
                        printf("%3d",vetor[i][j]);
                    else printf(" %3d",vetor[i][j]);
               }
               printf("\n");
			}
			printf("\n");
		}
		h=0;
		f=1;
	}
	return 0;
}
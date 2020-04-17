#include <stdio.h>

long long int mmc(long long int num1,long long int num2) {

    long long int resto=0, x=0, y=0;

    x = num1;
    y = num2;

    do 
	{
   		resto = x % y;
        x = y;
        y = resto;

    } while (resto != 0);

    return (num1*num2)/x;
}


int main()
{
	long long int t,mmc_total,quicadas[200],i;
	int n,aux=2,possible,j,cancela,conseguiu;
	
	while(1)
	{
		scanf("%d %lld",&n,&t);
		mmc_total=1;
		possible=1;
		aux=2;
		
		if(n==0 && t==0)
		{
			break;
		}
		else
		{
			for(i=0;i<n;i++)
			{
				scanf("%lld",&quicadas[i]);
			}
			for(i=0;i<n;i++)
			{
				if(t%quicadas[i]!=0 || (n==1 && t==1 && quicadas[0]==1))
				{
					possible=0;
				}
			}
			if(possible==0)
			{
				printf("impossivel\n");
				continue;
			}
			else
			{
				if(n==1)
				{
					for(i=2;i<=t;i++)
					{
						cancela=0;
						conseguiu=0;
						if(quicadas[0]==i)
						{
							cancela=1;
						}
						if(cancela==1)
						{
							continue;
						}
						if(mmc(i,quicadas[0])==t)
						{
							printf("%lld\n",i);
							conseguiu=1;
							break;
						}
					}
					if(conseguiu==0)
					{
						printf("impossivel\n");
					}	
				}
				else
				{
					for(i=0;i<n-1;i++)
					{
						if(i==0)
						{
							mmc_total=mmc(quicadas[0],quicadas[1]);
						}
						else
						{
							mmc_total=mmc(mmc_total,quicadas[aux]);
							aux++;
						}
					}
					for(i=2;i<=t;i++)
					{
						cancela=0;
						conseguiu=0;
						for(j=0;j<n;j++)
						{
							if(quicadas[j]==i)
							{
								cancela=1;
								break;
							}
						}
						if(cancela==1)
						{
							continue;
						}
						if(mmc(i,mmc_total)==t)
						{
							printf("%lld\n",i);
							conseguiu=1;
							break;
						}
					}	
					if(conseguiu==0)
					{
						printf("impossivel\n");
					}
				}
			}
		}
	}
	
	return 0;
}
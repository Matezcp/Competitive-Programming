#include <stdio.h>
#include <math.h>

int main()
{
	
	int a,i,pa,pb,anos=0;
	double ca,cb;
	
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		anos=0;
		scanf("%d %d %lf %lf",&pa,&pb,&ca,&cb);
		
		while(pa <= pb)
		{
			pa *= (1.0+(ca/100.0));
			pb *= (1.0+(cb/100.0));
			anos++;
			
			if(anos>100)
			{
				printf("Mais de 1 seculo.\n");
				break;
			}
		}

		if(anos<=100)
		{
			printf("%d anos.\n",anos);
		}	
		
	}
		
	return 0;
}
#include <stdio.h>

int main()
{
	int h,m;
	
	while(1)
	{
		if(scanf("%d:%d",&h,&m)==EOF)
		{
			break;	
		} 	
		else	
		{
			if(h<7)
			{
				printf("Atraso maximo: 0\n");
			}
			else
			{
				m+=60;
				if(m>=60)
				{
					h+=m/60;
					m%=60;
				}
				h=h-8;
				h=h*60;
				m+=h;
				printf("Atraso maximo: %d\n",m);
			}
		}
	}		
	
	return 0;
}
#include <stdio.h>

int main()
{
	int a,i,x,y,n,s=0;
	
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		s=0;
		scanf("%d %d",&x,&y);
		
		for(n=1;n<=y;n++)
		{
			if (x%2==1 || x%2==-1)
			{
				s+=x;
				x+=2;
			}
			else if(x%2==0)
			{
				x+=1;
				s+=x;
				x+=2;
			}
		}
		printf("%d\n",s);
	}
	
	return 0;
}
#include <stdio.h>
#define bool int
#define false 1
#define true 0
int main(){
	
	int a,i,s=0;
	bool stop = false;
	
	while(stop==false)
	{
		s=0;
		scanf("%d",&a);
		if(a==0)
		{
			stop=true;
		}
		else if(a!=0)
		{
			for(i=1;i<=5;i++)
			{
				if(a%2==0)
				{
					s+=a;
					a+=2;
				}
				else if(a%2==1||a%2==-1)
				{
					a+=1;
					s+=a;
					a+=2;
				}
			}
			printf("%d\n",s);
		}
	}
	
	return 0;
}
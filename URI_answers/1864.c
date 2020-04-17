#include <stdio.h>
#include <string.h>

int main()
{
	//LIFE IS NOT A PROBLEM TO BE SOLVED		
	
	char frase[]="LIFE*IS*NOT*A*PROBLEM*TO*BE*SOLVED";
	int n;
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		if(i==4||i==7||i==11||i==13||i==21||i==24||i==27)
		{
			printf(" ");
		}
		else
		{
			printf("%c",frase[i]);
		}
	}
	printf("\n");
	return 0;
}
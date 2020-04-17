#include <stdio.h>
#include <string.h>

int main()
{
	
	char entrada[10],um[]="--*",dois[]="-*-",tres[]="-**",quatro[]="*--",cinco[]="*-*",seis[]="**-",sete[]="***";
	int n=0,i=0;
	
	while(i<3)
	{
			scanf("%s",entrada);
			if(0 == strcmp(entrada,um))
			{
				n+=1;
			}
			else if(0==strcmp(entrada,dois))
			{
				n+=2;
			}
			else if(0==strcmp(entrada,tres))
			{
				n+=3;
			}
			else if(0==strcmp(entrada,quatro))
			{
				n+=4;
			}
			else if(0==strcmp(entrada,cinco))
			{
				n+=5;
			}
			else if(0==strcmp(entrada,seis))
			{
				n+=6;
			}
			else if(0==strcmp(entrada,sete))
			{
				n+=7;
			}
			else
			{
				scanf("%s",entrada);
				printf("%d\n",n);
				n=0;
				i++;
			}
	}
	/*
	000 = 0 ---
	001 = 1 --*
   	010 = 2 -*-
	011 = 3 -**
	100 = 4 *--
	101 = 5 *-*
	110 = 6 **-
	111 = 7 ***
	*/
	return 0;
}
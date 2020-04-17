#include <stdio.h>
#include <string.h>

int main()
{
	char a1[] = "vertebrado", a21[] = "ave", a22[] = "mamifero", a31[]="carnivoro", a32[] = "herbivoro", a33[] = "onivoro";
	char b1[] = "invertebrado", b21[] = "inseto", b22[] = "anelideo", b31[]="hematofago", b32[] = "herbivoro", b33[] = "onivoro";
	char c1[15],c2[15],c3[15];
	
	scanf("%s %s %s",c1,c2,c3);
	
	if (0 == strcmp(c1,a1))
	{
		if (0 == strcmp(c2,a21))
		{
			if (0 == strcmp(c3,a31))
			{
				printf("aguia\n");
			}
			
			else if (0 == strcmp(c3,a33))
			{
				printf("pomba\n");
			}
		}
		
		else if (0 == strcmp(c2,a22))
		{
			if (0 == strcmp(c3,a33))
			{
				printf("homem\n");
			}
			
			else if (0 == strcmp(c3,a32))
			{
				printf("vaca\n");
			}
		}
	}
	
	
	else if (0 == strcmp(c1,b1))
	{
		if (0 == strcmp(c2,b21))
		{
			if (0 == strcmp(c3,b31))
			{
				printf("pulga\n");
			}
			
			else if (0 == strcmp(c3,b32))
			{
				printf("lagarta\n");
			}
		}
		
		else if (0 == strcmp(c2,b22))
		{
			if (0 == strcmp(c3,b31))
			{
				printf("sanguessuga\n");
			}
			
			else if (0 == strcmp(c3,b33))
			{
				printf("minhoca\n");
			}
		}
	}
	
	return 0;
}
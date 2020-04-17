#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    char text[501];

    scanf("%[^\r\n]",text);

    if(strlen(text) <= 80)
        printf("YES\n");
    else
        printf("NO\n");
    
	return 0;
}
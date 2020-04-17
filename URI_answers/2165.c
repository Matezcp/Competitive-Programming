#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    char text[501];

    scanf("%[^\r\n]",text);

    if(strlen(text) <= 140)
        printf("TWEET\n");
    else
        printf("MUTE\n");
    
	return 0;
}
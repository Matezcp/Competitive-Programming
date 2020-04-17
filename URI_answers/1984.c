#include <stdio.h>
#include <string.h>

int main()
{
    char numero[11];

    scanf("%s",numero);

    for(int i=strlen(numero)-1;i>=0;i--){
        printf("%c",numero[i]);
    }
   
   printf("\n");
    
    return 0;
}

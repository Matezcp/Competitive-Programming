#include <stdio.h>
#include <string.h>
int main()
{
    char bin[100];
    int i,tamanho,count=0;
    
    scanf("%s",bin);
    tamanho = strlen(bin);
    
    for(i=0;i<tamanho;i++)
    {
        if(bin[i]=='1')
        {
            count++;
        }
    }
    
    if(count%2==0)
    {
        printf("%s0\n",bin);
    }
    else
    {
        printf("%s1\n",bin);
    }
    return 0;
}

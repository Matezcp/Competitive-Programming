#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char sinal_expoente,sinal_numero;
    double num;
    char n[200];
    int expo;

    scanf("%s",n);
    sinal_numero = n[0];
    num = atof(n);

    if(num == 0){
        if(sinal_numero=='-')
            printf("%.4lfE+00\n",num/2);
        else
            printf("+0.0000E+00\n");
        return 0;
    }
    if(num < 0){
        sinal_numero = '-';
        num *= -1;
    } 
    else
        sinal_numero = '+';

    if(num < 1 && num > -1){
        sinal_expoente = '-';
        for(expo = 0;num < 1;expo++)
            num = num*10;
    }
    else{
        sinal_expoente = '+';
        for(expo = 0;num >= 10;expo++)
            num = num/10;
    }

    if(expo >= 10)
        printf("%c%.4lfE%c%d\n",sinal_numero,num,sinal_expoente,expo);
    else
        printf("%c%.4lfE%c0%d\n",sinal_numero,num,sinal_expoente,expo);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    int num_cases;
    int i;
    char galopeira[10001];

    scanf("%d",&num_cases);

    for(i = 0;i<num_cases;i++){
        scanf("%s",galopeira);
        printf("%.2lf\n",strlen(galopeira)/100.0);
    }

    return 0;
}
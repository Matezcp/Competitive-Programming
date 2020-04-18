#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long int num;
    double left,right;

    scanf("%llu",&num);

    left = 1.0*num/log(num);
    right = 1.25506*left;

    printf("%.1lf %.1lf\n",left,right);

    return 0;
}
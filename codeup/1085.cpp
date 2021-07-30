#include <stdio.h>

int main(){
    long long int h, b, c, s;
    double r = 0;
    scanf("%lld %lld %lld %lld", &h, &b, &s, &c);
    r = h * b * s * c;
    printf("%.1lf MB", r/8/1024/1024);

}


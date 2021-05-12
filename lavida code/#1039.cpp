#include <stdio.h>

int main(void)
{
    int x, a, b, c, d, r;
    scanf("%d", &x);
    while (x--){
    scanf("%d %d %d %d", &a, &b, &c, &d);
    r = d % c;
    if(r == 0){
    printf("%d", d * (d / c));
    }
    else{
    printf("%d", d + (d - c));
}
    printf ("\n");
}
    return 0;
}

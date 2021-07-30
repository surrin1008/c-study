#include<stdio.h>
 
int c(int k){
    if (k / 2 != 0){
        c(k / 2);
    }
    printf("%d", k % 2);
}
int main() {
    int a;
    scanf("%d", &a);
    c(a);
    return 0;
}




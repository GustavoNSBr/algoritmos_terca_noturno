#include <stdio.h>

int main(){
    int *p;
    int a = 10;

    p = &a;

    printf("valor de p: %p\n", p);
    printf("valor de p + 1: %p\n", p + 1);
    return 0;
}

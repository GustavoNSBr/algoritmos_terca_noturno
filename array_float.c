#include <stdio.h>

int main(){

    float a[10] = {1,2,3,4,5,6,7,8,9,10};
    float *p;
    p = &a;
    int i;
    for(i = 0; i < 10; i++){
        printf("endereco de cada posicao: %p\n", p+i);
    }

    return 0;
}
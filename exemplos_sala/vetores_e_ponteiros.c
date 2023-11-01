#include <stdio.h>

int main(){

    int v[3] = {1,2,3};

    printf("valor de v: %p\n", v);
    printf("primeiro valor do vetor 'v': %d\n", *v);
    printf("valor de v + 1: %p\n", v + 1);
    printf("segundo valor do vetor 'v': %d\n", *(v + 1));
    printf("terceiro valor do vetor 'v': %d\n", v[2]);

    return 0;
}
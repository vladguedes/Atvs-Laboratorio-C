#include <stdio.h>

int soma(int *px, int *py);

int main(void) {
    int x, y, *px = &x, *py = &y;
    int vetor[2] = {5, 0};

    scanf("%d %d", px, py);
    vetor[1] = soma(px, py);
    printf("%d", vetor[0] + vetor[1]);

    return(0);
}

int soma(int *px, int *py){
    int soma = *px + *py;
    return(soma);
}
#include <stdio.h>

int soma();

int main() {
    int x, y, z;
    scanf("%d %d", &x, &y);
    z = soma(x, y);
    printf("%2d", z);
    return(0);
}

int soma(int v, int b) {
    int i, soma = 0;
    for(i = v + 1; i < b; i++){
        soma += i;
    }
    return(soma);
}
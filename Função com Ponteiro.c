#include <stdio.h>

int soma(int a, int b) {
    return( a + b);
}

int multi(int a, int b) {
    return(a * b);
}

int calcula(int x, int y, int (*ponteiro)(int, int)) {
    return(*ponteiro)(x, y);
}

int main() {
    int resultado = calcula(5, 3, multi);
    int resposta = calcula(10, 20, soma);
    printf("Resultado: %d\n", resultado);
    printf("Resultado: %d\n", resposta);
    return(0);
}
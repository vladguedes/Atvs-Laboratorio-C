#include <stdio.h>
#include <stdlib.h>

struct conta {
    char nome[50];
    int saldo, numero;
};

void altera(int nsaldo, struct conta *p) {
    p -> saldo = nsaldo;
}

int main(void) {
    struct conta *pp1 = (struct conta*) malloc(sizeof(struct conta));
    printf("Digite seu nome:");
    scanf(" %[^\n]s", pp1 -> nome);
    printf("Digite o seu numero:");
    scanf("%d", &pp1 -> numero);
    printf("Digite o seu saldo:");
    scanf("%d", &pp1 -> saldo);//2000
    printf("Voce tem %d reais na conta!", pp1 -> saldo);
    altera(1000, pp1);
    printf("Seu saldo agora eh %d", pp1 -> saldo);

    return(0);
}
#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    int idade, cpf;
    char nome[50];
};

typedef struct pessoa Pessoa;

void altera(Pessoa *p1){
    p1 -> idade = 19;
}

int main(void) {
    Pessoa *p1 = (Pessoa*) malloc(sizeof(Pessoa));
    printf("Digite o seu nome:");
    scanf(" %[^\n]s", (*p1).nome);
    printf("Digite a sua idade:");
    scanf("%d", &p1 -> idade);
    printf("Digite seu RG:");
    scanf("%d", &p1 -> cpf);
    altera(p1);
    printf("Nome:%s\nIdade:%d\nCPF:%d\n", p1 -> nome, p1 -> idade, p1 -> cpf);

    return(0);
}
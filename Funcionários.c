#include <stdio.h>
#include <stdlib.h>

struct funcionario
{
    char nome[50], cargo[50];
    float salario;
};

int main(void) {

    struct funcionario *f = (struct funcionario *)malloc(sizeof(struct funcionario));

    int quant_funcionarios, i;

    printf("Digite a quantidade de funcionario: ");

    scanf("%d", &quant_funcionarios);

    for (i = 0; i < quant_funcionarios; i++) {

        printf("\nDigite o nome do funcionario %d: ", i + 1);
        scanf(" %[^\n]s", f[i].nome);

        printf("\nDigite o salario desse funcionario: ");
        scanf("%f", &f[i].salario);

        printf("\nDigite o seu cargo: ");
        scanf(" %[^\n]s", f[i].cargo);
    }

    for(i = 0; i < quant_funcionarios; i++) {
        
        printf("\n-------------------------\n");
        printf("Funcionario num. %d", i + 1);
        printf("\nNome: %s", f[i].nome);
        printf("\nCargo: %s", f[i].cargo);
        printf("\nSalario: %.2f", f[i].salario);
    }

    free(f);

    printf("\n");

    return (0);
}
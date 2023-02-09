#include <stdio.h>
#include <stdlib.h>

struct funcionario {
    char nome[50], cargo[50];
    float salario;
    int identificador;
};

void imprime(struct funcionario *f, int quant_funcionarios) {
    int i;

    for(i = 0; i < quant_funcionarios; i++) {
        
        printf("\n-------------------------\n");
        printf("Funcionario num.%d", i + 1);
        printf("\nNome: %s", f[i].nome);
        printf("\nCargo: %s", f[i].cargo);
        printf("\nSalario: R$%.2f", f[i].salario);
        printf("\nIdentificador: %d", f[i].identificador);
    }

}

void altera_salario(struct funcionario *f) {
    int num_f;

    printf("\nDigite o numero do funcionario que deseja alterar o salario: ");
    scanf("%d", &num_f);
    printf("\nDigite o novo salario do funcionario num.%d: ", num_f);
    scanf("%f", &f[num_f - 1].salario);
}

int main(void) {
    char escolha;

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
        
        printf("\nDigite o seu identificador: ");
        scanf("%d", &f[i].identificador);
    }

    imprime(f, quant_funcionarios);

    printf("\n\nDeseja alterar o salario de algum funcionario?\nDigite 's' para sim, e 'n' para nao: ");
    scanf(" %c", &escolha);

    if(escolha == 's') {
        altera_salario(f);
        imprime(f, quant_funcionarios);
    }

    else {
        printf("\nFim do programa!");
    }

    free(f);

    printf("\n");

    return (0);
}

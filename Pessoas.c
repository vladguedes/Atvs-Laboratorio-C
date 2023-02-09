#include <stdio.h>
#include <stdlib.h>

struct pessoa {
    char nome[50];
    int idade, num_doc;
};

void ler(struct pessoa *p, int qnt_p) {
    int i;

    for(i = 0; i < qnt_p; i++) {

        printf("\nDigite o nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]s", p[i].nome);
        printf("\nDigite a idade dessa pessoa: ");
        scanf("%d", &p[i].idade);
        printf("\nDigite o numero do seu documento: ");
        scanf("%d", &p[i].num_doc);

    }

}

void imprime(struct pessoa *p, int qnt_p) {
    int i;

    for(i = 0; i < qnt_p; i++) {

        printf("\nPessoa num.%d ", i + 1);
        printf("\nNome: %s", p[i].nome);
        printf("\nIdade: %d", p[i].idade);
        printf("\nNumero do Documento: %d", p[i].num_doc);

    }

}

void altera(struct pessoa *p) {
    int altera;
    char escolha;
    
    printf("\nDeseja alterar a idade de alguem?\nDigite 's' para sim, e 'n' para nao: ");
    scanf(" %c", &escolha);
    if(escolha == 'n') {

    }

    else {

        printf("\nDigite o numero da pessoa que deseja alterar a idade: ");
        scanf("%d", &altera);
        printf("\nDigite a nova idade: ");
        scanf("%d", &p[altera - 1].idade);
        printf("\nA pessoa %d agora tem %d anos.", altera, p[altera - 1].idade);

    }

}

void maior(struct pessoa *p, int qnt_p) {
    int maior, imaior, menor, imenor, i;

    for(i = 0; i < qnt_p; i++) {

        if(i == 0) {

            maior = p[i].idade;
            menor = p[i].idade;
            imaior = i;
            imenor = i;

        }

        if(maior < p[i].idade) {

            maior = p[i].idade;
            imaior = i;

        }

        if(menor > p[i].idade) {

            menor = p[i].idade;
            imenor = i;

        }

    }

    printf("\nA pessoa mais velha e %s.", p[imaior].nome);
    printf("\nE a pessoa mais nova e %s.", p[imenor].nome);

}

int main(void) {
    int qnt_pessoas;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &qnt_pessoas);

    struct pessoa *p = (struct pessoa*) malloc(qnt_pessoas * sizeof(struct pessoa));

    ler(p, qnt_pessoas);
    imprime(p, qnt_pessoas);
    altera(p);
    maior(p, qnt_pessoas);

    free(p);

    return(0);
}
#include <stdio.h>
#include <stdlib.h>

typedef struct alunos {
    char nome[50];
    int matricula;
}Alunos;

int main(void) {
    int qnt_alunos, i;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qnt_alunos);

    Alunos **vetor = (Alunos**) malloc(qnt_alunos * sizeof(Alunos*));

    if(vetor == NULL) {

        printf("ERRO!");
        exit(1);

    }

    for(i = 0; i < qnt_alunos; i++) {

        printf("Digite o nome do aluno: ");
        scanf(" %[^\n]s", vetor[i] -> nome);
        printf("Digite a matricula do alunos: ");
        scanf("%d", &vetor[i] -> matricula);
        printf("\n---------------Dados Num.%d---------------\n", i + 1);
        printf("Nome: %s \nMatricula: %d", vetor[i] -> nome, vetor[i] -> matricula);
        printf("\n-----------------------------------------\n");

    }

    for(i = 0; i < qnt_alunos; i++) {

        free(vetor[i]);

    }

    free(vetor);

    return(0);
    
}
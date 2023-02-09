#include <stdio.h>
#include <stdlib.h>

struct aluno {
    char nome[50];
    int matricula;
    float IRA;
};

int main(void) {
    int qnt_alunos, i;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &qnt_alunos);
    struct aluno * vetor_de_alunos = (struct aluno *) malloc(qnt_alunos * sizeof(struct aluno));
    
    if(vetor_de_alunos == NULL) {
        printf("ERRO!");
        exit(1);
    }

    for(i = 0; i < qnt_alunos; i++) {
        printf("Digite o nome do aluno: ");
        scanf(" %[^\n]s", vetor_de_alunos[i].nome);
        printf("Informe a matricula: ");
        scanf("%d", &vetor_de_alunos[i].matricula);
        printf("Digite o IRA: ");
        scanf("%f", &vetor_de_alunos[i].IRA);
    }

    for(i = 0; i < qnt_alunos; i++) {
        
        printf("\n-----------------------------------------------\n");
        printf("Aluno num. %d", i + 1);
        printf("\nNome: %s", vetor_de_alunos[i].nome);
        printf("\nMatricula: %d", vetor_de_alunos[i].matricula);
        printf("\nIRA: %.2f", vetor_de_alunos[i].IRA);
    }

    free(vetor_de_alunos);

    return(0);
}
#include <stdio.h>

void invert(int n, int vetor[]){
    int clone[n];
    int index;
    for(index = 0; index < n; index++){
        clone[index] = vetor[index];
    }
    for(index = 0; index < n; index++){
        vetor[index] = clone[n - 1 - index];
    }
}

int main() {
    int x, i;
    scanf("%d", &x);
    int vetorr[x];
    for(i = 0; i < x; i++){
        scanf("%d", &vetorr[i]);
    }
    invert(x, vetorr);
    for(i = 0; i < x; i++){
        printf("%d\t", vetorr[i]);
    }
    return(0);
}
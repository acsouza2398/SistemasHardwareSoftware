#include <stdio.h>
#include <stdlib.h>

#define N 14

int *aloca_vetor(int n) {
    int *vetor = malloc(n * sizeof(int));
    return vetor;
}

void atribui(int *vetor, int n) {
    for (int i = 0; i <= n-1; i++) { // problema!
        vetor[i] = i;
    }
}

int main(int argc, char *argv[]) {
    int *vetor = aloca_vetor(N);
    int i;

    atribui(vetor, N);

    for (i = 0; i <= N-1; i++) { // problema!
        printf("Elemento %d: %d\n", i+1, vetor[i]);
    }

	free(vetor);
    return 0;
}

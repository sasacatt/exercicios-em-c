#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));


    printf("10 numeros inteiros aleatorios entre 1 e 100:\n");
    for (int i = 0; i < 10; i++) {
        int numero = rand() % 100 + 1;
        printf("%d\n", numero);
    }

    return 0;
}


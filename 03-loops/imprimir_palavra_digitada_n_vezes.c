#include <stdio.h>
#include <stdlib.h>
int main() {

    char palavra[100];


    int vezes;


    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Digite o numero de vezes que a palavra sera impressa: ");
    scanf("%d", &vezes);


    for (int i = 0; i < vezes; i++) {
        printf("%s\n", palavra);
    }


    system("pause");

    return 0;
}

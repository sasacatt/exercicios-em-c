#include <stdio.h>
#include <stdlib.h>
int main() {

    char palavra[100];


    printf("Digite uma palavra: ");
    scanf("%s", palavra);


    for (int i = 0; i < 20; i++) {
        printf("%s\n", palavra);
    }


    system("pause");

    return 0;
}

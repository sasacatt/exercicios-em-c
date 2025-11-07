//SARA THAIS DOS SANTOS GRACIANO

#include <stdio.h>
#include <locale.h>
int main() {

    setlocale(LC_ALL,"PORTUGUESE");

    char palavra[50] = "Sara";

    int contador = 0;


    while (contador < 20) {
        printf("%s\n", palavra);
        contador++;
    }

    return 0;
}

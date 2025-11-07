#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");


    char nome[] = "Sara Thais dos Santos Graciano";

    char tecla;



    while(1) {
        printf("%s\n",nome);

        if(kbhit()){
            tecla = getch();

            if (tecla == 27){
            break;
        }
    }
}

    system("color 4");
    return 0;

}

















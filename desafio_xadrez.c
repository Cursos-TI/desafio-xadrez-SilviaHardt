
#include <stdio.h>

/*

Estruturas

WHILE
while(condição){
    codigo
}

DO-WHILE
do {
    codigo
} while(condição)

FOR
for(inicialização; condição; incremento) {
    codigo
}
*/

int main() {

    int torre = 0; // move 5 casas para a direita
    int bispo = 0; // move 5 casas na diagonal para cima direita
    int rainha = 0; // move 8 casas para a esquerda

    //while para torre mover 5 casas para a direita
    while(torre < 5){
        printf("Direita\n");
        torre++;
    }

    //do while para bispo mover 5 casas na diagonal para cima direita
    do{
        printf("Cima Direita\n");
        bispo++;
    }while(bispo < 5);

    //for para rainha mover 8 casas para esquerda
    for(rainha = 0; rainha < 8; rainha++) {
        printf("Esquerda\n");
    }

    return 0;
}





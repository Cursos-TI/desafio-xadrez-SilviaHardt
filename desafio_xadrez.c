
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
    int cavalo = 1; // move 2 casas para baixo e 1 casa para esquerda

    //while para torre mover 5 casas para a direita
    while(torre < 5){
        printf("Direita\n");
        torre++;
    }
    printf("\n");

    //do while para bispo mover 5 casas na diagonal para cima direita
    do{
        printf("Cima Direita\n");
        bispo++;
    }while(bispo < 5);
    printf("\n");

    //for para rainha mover 8 casas para esquerda
    for(rainha = 0; rainha < 8; rainha++) {
        printf("Esquerda\n");
    }
    printf("\n");

    //loop aninhado utilizando for e while para cavalo mover 2 casas para baixo e 1 casa para esquerda
    for (cavalo = 1; cavalo <= 1; cavalo++) {
        
        int movimento = 1;
        while (movimento <= 2) {
            
            printf("Baixo\n");
            movimento++;
        }

        printf("Esquerda\n");
    }
    printf("\n");

    return 0;
}





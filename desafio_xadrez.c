
#include <stdio.h>

//criando função recursiva da torre
void moverTorre(int movimento) {
    if (movimento > 0) {
        printf("Direita\n");
        moverTorre(movimento - 1); 
    }
}

//criando função recursiva do bispo
void moverBispo(int movimento) {
    if (movimento > 0) {
        printf("Cima Direita\n");
        moverBispo(movimento - 1); 
    } 
}

//criando função recursiva da rainha
void moverRainha(int movimento) {
    if (movimento > 0) {
        printf("Esquerda\n");
        moverRainha(movimento - 1); 
    }  
}

int main() {

    //movimentando torre com a função recursiva
    printf("Movimento da Torre\n");
    moverTorre(5); // mover 5 casas para a direita
    printf("\n");

    //movimentando bispo com a função recursiva
    printf("Movimento do Bispo\n");
    moverBispo(5); // mover 5 casas na diagonal para cima direita
    printf("\n");

    //movimentando rainha com a função recursiva
    printf("Movimento da Rainha\n");
    moverRainha(8); // mover 8 casas para a esquerda
    printf("\n");

    //movimentando cavalo com loop, continue e break
    printf("Movimento do Cavalo\n");
    for (int cavalo = 0; cavalo < 2; cavalo++) {
        printf("Cima \n");
        if (cavalo == 1) {
            printf("Direita \n");
            break; 
        }
        continue;
    }
    printf("\n");

    //movimentando bispo com loops aninhados, sendo externo vertial e interno horizontal
    printf("Movimento do Bispo\n");
    for (int bispoCima = 1; bispoCima <= 5; bispoCima++) { 
        for(int bispoDireita = 1; bispoDireita <= 1; bispoDireita++) {
            printf("Cima ");
        }
        printf("Direita \n");
    }
    printf("\n");

    return 0;
}

    /*
    //while para torre mover 5 casas para a direita
    while(torre < 5){
        printf("Direita\n");
        torre++;
    }
    printf("\n");
    */

    /*
    //do while para bispo mover 5 casas na diagonal para cima direita
    do{
        printf("Cima Direita\n");
        bispo++;
    }while(bispo < 5);
    printf("\n");
    */

    /*
    //for para rainha mover 8 casas para esquerda
    for(rainha = 0; rainha < 8; rainha++) {
        printf("Esquerda\n");
    }
    printf("\n");
    */

    /*
    //loop aninhado utilizando for e while para cavalo mover 2 casas para baixo e 1 casa para esquerda    
    // for (cavalo = 1; cavalo <= 1; cavalo++) {       
    //     int movimento = 1;
    //     while (movimento <= 2) {          
    //         printf("Cima \n");
    //         movimento++;
    //     }
    //     printf("Direita \n");
    // }
    // printf("\n");
    */




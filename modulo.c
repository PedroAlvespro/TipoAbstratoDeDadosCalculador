#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

// Recebe um ponteiro do tipo Dado e manipula os campos da struct por meio do ponteiro
// Faz as opera��es do tipo Dado por meio de ponteiros para a struct
float soma(Dado *ponteiro) {
    // Acessa os membros da struct usando o ponteiro e faz a soma
    return ponteiro->num1 + ponteiro->num2;
}

float diferenca(Dado *ponteiro) {
    return ponteiro->num1 - ponteiro->num2;
}

float divi(Dado *ponteiro) {
    if (ponteiro->num1 == 0) { //caso de divis�o por zero
        return 0;
    }
    return ponteiro->num1 / ponteiro->num2;
}

float mult(Dado *ponteiro) {
    return ponteiro->num1 * ponteiro->num2;
}
//menu que para o loop s� quando 0 � digitado
void menu(int a) {
    do {
        printf("Digite sua op��o\n");
        printf("\n 1 - Soma\n 2 - Diferen�a\n 3 - Divis�o\n 4 - Multiplica��o\n 0 - Sair\n");
        scanf("%d", &a);

        switch (a) {
            case 1: { //l�gica para usar o ponteiro e acessar os campos
                Dado ponteiro;

                printf("Digite o primeiro n�mero: \n");
                scanf("%f", &ponteiro.num1);

                printf("Digite o segundo n�mero: \n");
                scanf("%f", &ponteiro.num2);

                printf("A soma deu %.2f\n", soma(&ponteiro)); //chama a fun��o soma
                break;
            }
            case 2: {
                Dado ponteiro;

                printf("Digite o primeiro n�mero: \n");
                scanf("%f", &ponteiro.num1);

                printf("Digite o segundo n�mero: \n");
                scanf("%f", &ponteiro.num2);

                printf("A diferen�a deu %.2f\n", diferenca(&ponteiro));
                break;
            }
            case 3: {
                Dado ponteiro;

                printf("Digite o primeiro n�mero: \n");
                scanf("%f", &ponteiro.num1);

                printf("Digite o segundo n�mero: \n");
                scanf("%f", &ponteiro.num2);

                printf("A divis�o deu %.2f\n", divi(&ponteiro));
                break;
            }
            case 4: {
                Dado ponteiro;

                printf("Digite o primeiro n�mero: \n");
                scanf("%f", &ponteiro.num1);

                printf("Digite o segundo n�mero: \n");
                scanf("%f", &ponteiro.num2);

                printf("A multiplica��o deu %.2f\n", mult(&ponteiro));
                break;
            }
            case 0: {
                printf("Saindo...\n");
                break;
            }
            default:
                printf("Erro, digite novamente\n");
                break;
        }

    } while (a != 0);
}

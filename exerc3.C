#include <stdio.h>

int main() {

    int opcao;
    float saldo = 1000.0, deposito;

    do {
        printf("\n1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            printf("Saldo atual: %.2f\n", saldo);

        }
        else if (opcao == 2) {

            printf("Digite o valor do deposito: ");
            scanf("%f", &deposito);

            if (deposito > 0) {

                saldo += deposito;
                printf("Deposito realizado!\n");

            }
            else {

                printf("VALOR INVALIDO\n");
            }
        }
        else if (opcao != 0) {

            printf("OPCAO INVALIDA\n");
        }

    } while (opcao != 0);

    printf("Programa encerrado.\n");

    return 0;
}

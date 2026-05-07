#include <stdio.h>

int main() {

    int i;
    float temperatura;
    int seguras = 0, risco = 0;

    for (i = 1; i <= 12; i++) {

        printf("Digite a temperatura %d: ", i);
        scanf("%f", &temperatura);

        if (temperatura <= 75) {
            seguras++;
        }
        else {
            risco++;
        }
    }

    printf("Leituras seguras: %d\n", seguras);
    printf("Leituras de risco: %d\n", risco);

    return 0;
}

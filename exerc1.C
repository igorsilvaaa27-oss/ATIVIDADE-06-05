#include <stdio.h>

int main() {
    int codigos, validos = 0, invalidos = 0;
    
    for (int i = 0; i < 10; i++) {
         scanf("%d", &codigos);
         
         if (codigos >= 1000 && codigos <= 9999) {
             validos++;
         } else {
             invalidos++;
         }
    }
    printf("Codigos validos: %d\n", validos);
    printf("Codigos invalidos: %d\n", invalidos);
  
    return 0;
}

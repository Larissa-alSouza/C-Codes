/* 14- Imprimir os números pares entre 1 e 20 usando for */

#include <stdio.h>

int main() {
    for (int i = 1; i <= 21; i++) {
        
        if(i % 2 == 0){
            printf("%d\n", i);
        }
        
    }
    return 0;
}

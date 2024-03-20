#include <stdio.h>

int num;

main() {
    
    for(int j=1; j<11; j++){
        for(int i=0; i<11; i++){
            num = j * i;
            printf("\n %d x %d = %d", j, i, num);
        }
        printf("\n");
    }
}

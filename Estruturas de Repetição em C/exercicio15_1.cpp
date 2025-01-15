/* 15.1- Criar uma tabuada (ex.: do número 5) com while */

#include <stdio.h>

int main() {
    
    int i = 0, tab;
    
    while(i < 11){
        tab = 5 * i;
        
        printf("%d \n", tab);
        
        i++;
    }
    
    return 0;
}

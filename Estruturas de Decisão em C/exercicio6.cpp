/* 6- Leia quatro notas, calcule a média aritmética e imprima o resultado */

#include <stdio.h>

int main() {
    
    int notaI = 0, notaII = 0, notaIII = 0, notaIV = 0, resultado;
    
    printf("Insira a primeira nota: ");
    scanf("%d", &notaI);
    
    printf("Insira a segunda nota: ");
    scanf("%d", &notaII);
    
    printf("Insira a terceira nota: ");
    scanf("%d", &notaIII);
    
    printf("Insira a quarta nota: ");
    scanf("%d", &notaIV);
    
    resultado = (notaI + notaII + notaIII + notaIV) / 4;
    
    printf("A média foi: %d", resultado);

    return 0;
}

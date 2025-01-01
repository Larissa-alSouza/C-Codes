#include <stdio.h>

/*2- Peça ao usuário para digitar três valores inteiros e imprima a soma deles*/
int main() {
    
    int numI = 0;
    int numII = 0;
    int numIII = 0;
    
    printf("\t\t\tPor gentileza, insira 3 numeros\n\n");
    
    printf("Insira o primero numero: ");
    scanf("%d", &numI);
    
    printf("Insira o segundo numero: ");
    scanf("%d", &numII);
    
    printf("Insira o terceiro numero: ");
    scanf("%d", &numIII);
    
    int soma = numI + numII + numIII;
    printf("\nO resultado da somados tres numeros foi: %d", soma);
    
    return 0;
}

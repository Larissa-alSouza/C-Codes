// Exercício 4
#include <stdio.h>

int main() {
    
    int idade = 0;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if(idade >= 18)
    {
        printf("Sua idade é %d, então, você é maior de idade", idade);
    }
    else
    {
        printf("Sua idade é %d, então, você é menor de idade", idade);
    }

    return 0;
}

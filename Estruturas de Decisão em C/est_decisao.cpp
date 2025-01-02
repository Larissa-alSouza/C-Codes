// Estudando estruturas de decisão (if, else, else if)
#include <stdio.h>

int main() {
    
    //declaração de variáveis
    int idade = 0;
   
    // entrada de dados
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    //processamento dos dados
    if(idade < 18)
    {
        printf("Você é menor de idade."); //saida de dados
    }
    else if(idade > 18 && idade < 60) //processamento
    {
        printf("Você é adulto."); //saida
    }
    else //processamento
    {
        printf("Você é idoso."); //saida
    }

    return 0;
}

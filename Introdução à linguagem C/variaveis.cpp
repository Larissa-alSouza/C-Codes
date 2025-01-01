#include <stdio.h> //serve para habilitar a entrada e saida de dados de forma padrão

int main() //as chaves delimitam um bloco de código
{ //inicio do bloco

    //declarando variáveis
    int idade; //inteiro
    //declarando e inicializando variáveis
    //int idade = 0;
    
    //função que exibe algo na saída de dados
    //o ponto e vírgula finaliza um comando
    printf("Qual a sua idade?");
    
    //receber dados
    scanf("%d", &idade);
    
    //imprimir a variável
    printf("A sua idade é: %d", idade);
    
    
    return 0;
} //fim do bloco

/* 7- Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao valor que cada um deu para a realização da aposta. Faça um programa que leia quanto cada apostador apostou, o valor do prêmio e imprima quanto cada um ganharia do prêmio com base no valor investido */

#include <stdio.h>

int main() {
    
    float amigoI = 0, amigoII = 0, amigoIII = 0, premio = 0; 
    float apostado, porcAmgI, porcAmgII, porcAmgIII;
    float pfI, pfII, pfIII;
    
    printf("Insira o  valor o prêmio que o trio ganhou: ");
    scanf("%f", &premio);
    
    printf("Insira o valor que o primeiro amigo apostou: ");
    scanf("%f", &amigoI);
    
    printf("Insira o valor que o segundo amigo apostou: ");
    scanf("%f", &amigoII);
    
    printf("Insira o valor que o terceiro amigo apostou: ");
    scanf("%f", &amigoIII);
    
    apostado = amigoI + amigoII + amigoIII;
    
    porcAmgI = amigoI / apostado;
    porcAmgII = amigoII / apostado;
    porcAmgIII = amigoIII / apostado;
    
    pfI = premio * porcAmgI;
    pfII = premio * porcAmgII;
    pfIII = premio * porcAmgIII;
    
    printf("O valor total do prêmio foi: %f, dividindo proporcionalmente, o primeiro amigo ficou com %f, o segundo amigo com %f e o terceiro amigo com %f", premio, pfI, pfII, pfIII);

    return 0;
}

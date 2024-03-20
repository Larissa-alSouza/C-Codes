#include <stdio.h>

float peso, alt, num;

main(){
    
    printf("\t\t\t\t\t Calculadora de IMC \t\t\t\n\n");
    
    printf("Insira seu peso: ");
    scanf("%f", &peso);
    
    printf("Insira sua altura: ");
    scanf("%f", &alt);
    
    num = peso / (alt * alt);
    printf("Seu IMC é: %f", num);
    
    printf("\n");
    
    if(num <= 16.9){
        printf("Voce esta muito abaixo do peso");
    }
    else if(num >= 17 && num <= 18.4){
        printf("Voce esta abaixo do peso");
    }
    else if(num >= 18.5 && num <= 24.9){
        printf("Voce esta em peso normal");
    }
    else if(num >= 25 && num <= 29.9){
        printf("Voce esta acima do peso");
    }
    else if(num >= 30 && num <= 34.9){
        printf("Voce esta com obesidade grau I");
    }
    else if(num >= 35 && num <= 40){
        printf("Voce esta com obesidade grau II");
    }
    else if(num > 40){
        printf("Voce esta com obesidade grau III");
    }
}

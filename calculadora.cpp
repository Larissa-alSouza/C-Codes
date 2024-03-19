# include<stdio.h>

int esc=0;
float num1=0, num2=0, conta =0;

main(){

printf("SELECIONE:\n\n");

printf("1. Adicao\n");
printf("2. Subtracao\n");
printf("3. Multiplicacao\n");
printf("4. Divisao\n");
scanf("%d", &esc);

switch(esc){
    case 1:
        printf("Adição\n");
        
        printf("Insira o primeiro numero: ");
        scanf("%f", &num1);
        
        printf("Insira o segundo numero: ");
        scanf("%f", &num2);
        
        conta = num1 + num2;
        printf("Resultado: %f", conta);
        break;
    case 2:
        printf("Subtração\n");
        
        printf("Insira o primeiro numero: ");
        scanf("%f", &num1);
        
        printf("Insira o segundo numero: ");
        scanf("%f", &num2);
        
        conta = num1 - num2;
        printf("Resultado: %f", conta);
        break;
        
    case 3:
        printf("Multiplicacao\n");
        
        printf("Insira o primeiro numero: ");
        scanf("%f", &num1);
        
        printf("Insira o segundo numero: ");
        scanf("%f", &num2);
        
        conta = num1 * num2;
        printf("Resultado: %f", conta);
        break;
    case 4:
        printf("Divisao\n");
        
        printf("Insira o pimeiro numero: ");
        scanf("%f", &num1);
        
        printf("Insira o segundo numero: ");
        scanf("%f", &num2);
        
        conta = num1 / num2;
        printf("Resultado: %f", conta);
        break;
    }
}

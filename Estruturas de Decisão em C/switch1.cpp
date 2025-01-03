#include <stdio.h>
#include <math.h>

int esc=0;
float num1=0, num2=0, conta =0;
double base=0, expoente=0, resultado=0;

int main(){

printf("SELECIONE:\n\n");

printf("1. Adicao\n");
printf("2. Subtracao\n");
printf("3. Multiplicacao\n");
printf("4. Divisao\n");
printf("5. Potenciacao\n");
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
        
    case 5:
        printf("Potenciacao\n");
        
        double base, expoente, resultado;

        printf("Digite a base: ");
        scanf("%lf", &base);
        printf("Digite o expoente: ");
        scanf("%lf", &expoente);
    
        resultado = pow(base, expoente);
    
        printf("%.2lf elevado a %.2lf é igual a %.2lf\n", base, expoente, resultado);
        break;
    }
    return 0;
}

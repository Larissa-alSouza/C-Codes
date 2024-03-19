#include <stdio.h>

float p1=0, p2=0, qz=0, ot=0, mf=0;

main(){
    
    printf("Digite a nota da p1: ");
    scanf("%f", &p1);
    
    printf("Digite a nota da p2: ");
    scanf("%f", &p2);
    
    printf("Digite a nota do quiz: ");
    scanf("%f", &qz);
    
    printf("Digite a nota de outros: ");
    scanf("%f", &ot);
    
    mf = ((p1 * 0.3) + (p2 * 0.3) + (qz * 0.2) + (ot * 0.2));
    printf("A media foi: %f", mf);
}

#include <stdio.h>

int main()
{
    float VPH, NHT, DESC, SB, SL, PD;
    
    printf("Digite o valor por hora: ");
    scanf("%f", &VPH);
    
    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &NHT);
    
    printf("Digite o percentual de desconto: ");
    scanf("%f", &PD);
    
    SB = VPH * NHT;
    
    DESC = SB * PD / 100;
    
    SL = SB - DESC;
    
    printf(" \nSalário Bruto: R$%.2f \n",SB);
    
    printf("Salário Líquido: R$%.2f",SL);
    
    return 0;
}

#include<stdio.h>

float valor_a,valor_b,valor_c,int1,int2,r1;

int main ( ){
    
    printf("Digite um numero inteiro.\n");
    scanf("%f",&int1);
    printf("Digite mais um numero inteiro.\n");
    scanf("%f",&int2);
    printf("Agora, digite um numero real.\n");
    scanf("%f",&r1);
    
    valor_a=(int1*2)*(int2/2);
    valor_b=(int1*3)+(r1);
    valor_c=(r1*r1*r1);
    
    printf("O produto do dobro do primeiro numero com a metade do segundo é %.2f\n",valor_a);
    printf("A soma do triplo do primeiro com o terceiro é %.2f\n",valor_b);
    printf("O terceiro elevado ao cubo é %f ou %.2f",valor_c,valor_c);
    
    return 0;
    
}
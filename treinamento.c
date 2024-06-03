#include<stdio.h>
//Davi Iwanow
// %d numero inteiro
//%f numero decimal 
//%.2f duas casas

int main (){
    int idade = 0;
    float peso = 0;

    printf("Vamos testar sua idade\n");
    printf("Digite sua idade\n");
    scanf("%d",&idade);

    printf("Digite seu peso\n");
    scanf("%f",&peso);

    printf("Voce ja e adulto, parabens pelos %d\n",idade);

    printf("voce pesa %.2f\n",peso);
    
    
}
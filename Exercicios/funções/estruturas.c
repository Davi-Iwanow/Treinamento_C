#include <stdio.h>
#include <stdlib.h>

typedef struct pacientes{
    char nome[80];
    int dia, mes, ano; 
} t_pacientes; 



void imprime(t_pacientes a);


int main(){
    t_pacientes P;

    printf("Digite seu nome:\n");
    fgets(P.nome,80,stdin);

    printf("Digite o dia:\n");
    scanf("%d",&P.dia);
    
    printf("mes:\n");
    scanf("%d",&P.mes);

    printf("Ano:\n");
    scanf("%d",&P.ano);

    imprime(P);// Passar a variável P, não o tipo t_pacientes
    
return 0;
}
void imprime(t_pacientes a){
    
    printf("Seu nome: %s\nVoce nasceu em %d/%d/%d\n",a.nome,a.dia,a.mes,a.ano);
    
}
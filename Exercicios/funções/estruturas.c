#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TAM 4

typedef struct pacientes{
    char nome[80];
    int dia, mes, ano; 
} t_pacientes; 


void imprime(t_pacientes a);


int main(){
    int i;
    t_pacientes P[TAM];
    for(i=0;i<TAM;i++){
        printf("Digite seu nome:\n");
        scanf("%80[^\n]s",&P[i].nome);
        fflush(stdin);
        //ou usar o fgets
        //fgets(P[i].nome,80,stdin);



        printf("Digite o dia:\n");
        scanf("%d",&P[i].dia);
        fflush(stdin);

        printf("mes:\n");
        scanf("%d",&P[i].mes);
        fflush(stdin);

        printf("Ano:\n");
        scanf("%d",&P[i].ano);
        fflush(stdin);

    }
    imprime(P[0]);// Passar a variável P, não o tipo t_pacientes
    
return 0;
}
void imprime(t_pacientes a){

    system("cls");
    
    printf("Seu nome: %s\nVoce nasceu em %d/%d/%d\n",a.nome,a.dia,a.mes,a.ano);
    
}
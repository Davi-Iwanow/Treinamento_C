#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 2

typedef struct teste{
    char nome[50];
    char nasc[15];
    int peso; 
}t_teste;

void imprime(t_teste vet[]);

int main(){

    t_teste t[TAM];
    int i;

    for ( i = 0; i < TAM; i++){
        printf("--------%dpessoa--------\n",i+1);
        printf("Digite seu some:\n");
        fgets(t[i].nome,50,stdin);
        size_t len = strlen(t[i].nome);
        if (len > 0 && t[i].nome[len - 1] == '\n') {
            t[i].nome[len - 1] = '\0';
        }
        printf("Digite a data de nascimento nesse formato'##/##/####':\n");
        fgets(t[i].nasc,50,stdin);
        len = strlen(t[i].nome);
        if (len > 0 && t[i].nasc[len - 1] == '\n') {
            t[i].nasc[len - 1] = '\0';
        }
        
        printf("Digite seu peso:\n");
        scanf("%d", &t[i].peso);
        while (getchar() != '\n'); // Limpar o buffer de entrada
        
    }
    imprime(t);

return 0;
}

void imprime(t_teste vet[]){

    system("cls");// limpa 

    int i;
    for (i = 0; i < TAM; i++){
        printf("--------%dpessoa--------\n",i+1);
        printf("Nome: %s\n",vet[i].nome);
        printf("Data de nascimento: %s",vet[i].nasc);
        printf("Peso: %d\n",vet[i].peso);
        
    }
    
}
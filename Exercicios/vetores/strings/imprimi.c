#include <stdio.h> 

int main(){
    char texto[80];
    char inverso[80];
    int i,n,j;

    printf("Escreva uma palavra:\n");
    fgets(texto,80,stdin);

    n = 0;

    while (texto[n] !='\0' && texto[n] != '\n'){
        n++;
    }

    j=n-1;
    i=0;

    while (i<n){
        inverso[i]=texto[j];
        i++;
        j--;
    }
    inverso[n]= '\0';

    printf("Palavra original: %s \nIverdita: %s \n", texto, inverso);

    
    //printf("Digite sua idade:\n");
    //scanf("%d", &idade);

    //printf("Seu nome e %s e voce tem %d anos \n",texto, idade);
return 0;
}
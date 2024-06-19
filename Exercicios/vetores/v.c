#include <stdio.h>
#define TAM_MAX 100

int main(){

    int n,i;
    int j=0;
    int vet[TAM_MAX];

    printf("Digite o tamanho do vetor, n = \n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        vet[i]=i+1;
    }
    i=0;
    while (i<n){
        j = j + vet[i]; 
        i++;
    }
    
    printf("soma = %d",j);

return 0;  
}
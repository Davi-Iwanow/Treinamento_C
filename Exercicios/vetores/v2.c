#include <stdio.h>
#define TAM_MAX 100

int main(){

    int n,i;
    int x;
    int vet[TAM_MAX];

    printf("Digite o tamanho do vetor, n =");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        vet[i]=i+1;
    }
    printf("Digite o x:");
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if (x == vet[i]) break;{   
        }
    }
    printf("%d esta na posicao %d",x,i);

return 0;  
}
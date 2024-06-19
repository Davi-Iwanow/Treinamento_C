#include <stdio.h>
#define TAX_MAX 100


int main(){
    
    int vet[TAX_MAX];
    int i,n,j,min;

    printf("Digite o tamanho do vetor, n = ");
    scanf("%d",&n);

    for (i=0; i<n; i++){
        scanf("%d",&vet[i]);
    }

    min = vet[0];
    for (i=0;i<n;i++){
        if (min>vet[i])
        {
            min = vet[i];
            j=i;
        }
    }
    printf("O menor valor do vetor = %d na posicao = %d",min,j);

return 0;
}
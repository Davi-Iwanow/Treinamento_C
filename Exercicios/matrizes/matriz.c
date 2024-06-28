#include <stdio.h>

int main(){

    int i,j,soma;
    int mat[5][4];

    printf("Digite sua matriz:\n");
    for (i=0;i<5;i++){
        for (j=0;j<4;j++){
            mat[i][j]= i+1;
            //scanf("%d",&mat[i][j]);
        }       
    }
    printf("Digite sua matriz:\n");
    for (i=0;i<5;i++){
        for (j=0;j<4;j++){
            printf(" %d ",mat[i][j]);
            //scanf("%d",&mat[i][j]);
        }
        printf("\n");
    }
    soma=0;
    printf("Somas:\n");
    for (i=0;i<5;i++){
        for (j=0;j<4;j++){
            soma = soma + mat[i][j];

        }
        printf("%d\n",soma);
        soma = 0;
    }
return 0;
}
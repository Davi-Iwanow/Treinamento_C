#include <stdio.h>

int main (){

    int i,j,n;
    printf("Digite o numero de linhas\n");

    scanf("%d",&n);

    for ( i = 1; i <=n; i++){
        for ( j = 1; j <=n; j++){   
            if (j==i){
                printf(" + ");
            }
            else{
                printf(" * ");
            }
        }
        printf("\n");
    }
    

return 0;
}
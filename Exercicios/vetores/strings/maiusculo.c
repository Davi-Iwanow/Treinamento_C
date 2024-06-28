#include <stdio.h>

int main(){
    char texto[] = "ExemPlo de UM texO!";

    int tam=0;

    while (texto[tam]!='\0'){
        tam++;
    }
    int i;
    for (i=0;i<tam;i++){
        if (texto[i]>='a' && texto[i]<='z'){
            texto[i]= texto[i] - 32;
            printf("%c",texto[i]);
        }
        else 
            printf("%c", texto[i]);
    }



return 0;
}
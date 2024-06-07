#include<stdio.h>

int main(){
    int i = 0;
    while (i<=10)
    {
        printf("%d*7=%d\n",i,i*7);
        i++;
    }
    printf("Essa e a tabuada do 7\n");
   
// for (inicio; condição;passo)

    for (i=0; i<=10; i++)
    {
        printf("%d*7=%d\n",i,i*7);
    }
    
return 0; 
}
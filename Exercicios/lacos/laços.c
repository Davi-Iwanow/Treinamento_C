#include <stdio.h>

int main (){

    int i,j,t;
    for ( i = 0; i <=10; i++)
    {
        for ( j = 0; j<=10; j++)
        {
            t=i*j;
            printf("%d * %d = %d\n",i,j,t);
        }
        printf("\n");
        
    }
    


return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int a,b;
    
    a=atoi(argv[1]);
    b=atoi(argv[2]);

    printf("Soma = %d\n",a+b);
    printf("**%s**",argv[0]);
return 0;
}


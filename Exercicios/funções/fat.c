#include <stdio.h>

int fatorial(int n);
int potencia(int a, int b);

int main(){
    int n,f,p,a;
    printf("Digite dois numero:\n");

    scanf("%d %d",&n,&a);
    f=fatorial(n);
    printf("Fatorial de %d = %d\n",n,f);
    p=potencia(n,a);
    printf("%d elevado %d = %d\n",n,a,p);
return 0;
}

int fatorial(int n){
    if (n==0){
        return 1;
    }
    else{
        return n* fatorial(n-1);
    }
}
int potencia(int a, int b){
    if(b==0){
        return 1;
    }
    else{
        return a*potencia(a,b-1);
    }
}


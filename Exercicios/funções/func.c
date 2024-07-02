#include <stdio.h>

double celsius(double F);

int main(){
    double f;
    printf("Digite a temp:\n");
    scanf("%lf",&f);
    double c = celsius(f);
    printf("o valor : %lf\n",c);

return 0;
}
double celsius(double F){
    return (F-32.0)*1.8;
}
// void é uma função que não tem tipo e não retorna nada
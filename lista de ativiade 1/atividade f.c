#include<stdio.h>

int main(){
    float a, b, c, d;

    printf("digite o custo de fabrica do carro: ");
        scanf("%f", &a);

    b = (a * 28) / 100;

    c = (a * 45) / 100;

    d = a + b + c;

    printf("O custo final ao consumidor e: %.2f\n", d);
    return 0;
}

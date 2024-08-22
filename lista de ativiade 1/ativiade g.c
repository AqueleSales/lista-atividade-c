#include<stdio.h>

int main(){
    int a;
    float c, d, e, h, t, f, y, b;

    printf("Informe o valor da comissão por carro vendido: ");
        scanf("%f", &d);
    printf("informe a quantidade de carros vendidos: ");
        scanf("%d", &a);
    printf("Informe o seu salario fixo: ");
        scanf("%f", &e);
    printf("Informe o valor total das vendas: ");
        scanf("%f", &b);

    t = a * d;

    y = (b * 5) /100;

    f = e + t + y;

    printf("O salario final do vendedor e: %.2f\n", f);
    return 0;
}


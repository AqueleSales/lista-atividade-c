#include<stdio.h>

int main(){
    int a, b, c, d;

    printf("Digite quantos anos voce tem: ");
        scanf("%d", &a);
    printf("Digite o mes que voce nasceu: ");
        scanf("%d", &b);
    printf("Digite o dia nasceu: ");
        scanf("%d", &c);

    d = (a * 365) + (b * 30) + c;

    printf("A sua idade em dias e:%d ", d);
    return 0;
}



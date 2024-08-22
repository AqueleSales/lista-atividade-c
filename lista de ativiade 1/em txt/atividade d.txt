#include<stdio.h>

int main(){
    float a, b, c, d, e, f, h, i;

    printf("Digite quantos moradores tem no municipio: ");
        scanf("%f", &a);
    printf("Digite a quantidade de votos em brancos: ");
        scanf("%f", &b);
    printf("Digite a quantidade de votos nulos : ");
        scanf("%f", &c);
    printf("Digite a quantidade de votos validos: ");
        scanf("%f", &d);

    f = (b / a )* 100;

    h = (c / a )* 100;

    i = (d / a )* 100;

    printf("A porcentagem de votos em\n branco e:%.2f%%\n votos em nulo e:%.2f%%\n votos em nulo e:%.2f%% ", f, h, i);
    return 0;
}




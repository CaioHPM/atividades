#include<stdio.h>
#include<stdlib.h>

main(){
    int x, y;

    printf("Digite o valor de X e Y:");
    scanf("%d %d", &x, &y);

    getchar();

    if (x > 0 && y > 0)
    {
        printf("O ponto esta no primeiro quadrante.");
    }
    else if (x < 0 && y > 0)
    {
        printf("O ponto esta no segundo quadrante.");
    }
    else if (x < 0 && y < 0)
    {
        printf("O ponto esta no terceiro quadrante.");
    }
    else if (x > 0 && y < 0)
    {
        printf("O ponto esta no quarto quadrante.");
    }
    else if (x != 0 && y == 0)
    {
        printf("O ponto esta no eixo X.");
    } 
    else if (x == 0 && y != 0)
    {
        printf("O ponto esta no eixo Y.");
    }
    else
    {
        printf("O ponto esta na Origem.");
    }

}

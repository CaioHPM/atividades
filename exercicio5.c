#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
    int x1, y1, x2, y2;
    float distancia;

    printf("Digite os valores do primeiro ponto:");
    scanf("%d %d", &x1, &y1);

    getchar();

    printf("Digite os valores do segundo ponto:");
    scanf("%d %d", &x2, &y2);

    getchar();

    distancia = sqrt((pow(x2, 2) - pow(x1, 2)) + (pow(y2, 2) - pow(y1, 2)));

    printf("A distancia entre esses 2 pontos e %.4f", distancia);

}

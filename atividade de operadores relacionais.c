#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int num, raiz, potencia;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    getchar();

    if (num >= 0){
        raiz = sqrt(num);
        printf("A raiz de %d e:%d", num, raiz);
    }
    else{
        potencia = pow(num, 2);
        printf("A potencia de %d e:%d", num, potencia);
    }
    

    return 0;
}
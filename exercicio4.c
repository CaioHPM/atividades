#include<stdio.h>
#include<stdlib.h>

main(){
    int lA, lB, lC, lMaior, lMenor1, lMenor2, resultado;

    printf("Digite o valor das 3 retas:");
    scanf("%d %d %d", &lA, &lB, &lC);

    getchar();

    if (lA > lB && lA > lC)
    {
        lMaior = lA;
        lMenor1 = lB;
        lMenor2 = lC;
    }
    else if (lB > lA && lB > lC)
    {
        lMaior = lB;
        lMenor1 = lA;
        lMenor2 = lC;
    }
    else
    {
        lMaior = lC;
        lMenor1 = lB;
        lMenor2 = lA;
    }

    resultado = (lMenor1 + lMenor2) - lMaior;

    if (resultado >= 0)
    {
        printf("Essas retas formam um triangulo");

        if (lMaior == lMenor1 && lMaior == lMenor2)
        {
            printf(" acutangulo.");
        }
        else if ((lMenor1*lMenor1) + (lMenor2*lMenor2) == (lMaior*lMaior))
        {
            printf(" retangulo.");
        }
        else
        {
            printf(" obtusangulo.");
        }
    }
    
    else
    {
        printf("Essas retas nao formam um triangulo.");
    }



}

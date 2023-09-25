#include<stdio.h>
#include<stdlib.h>

main(){
    float n1, n2, n3, mp, mpt = 0;
    int contador = 0;

    while (contador < 30)
    {
        printf("Digite o valor da sua primeira nota:");
        scanf("%f", &n1);

        getchar();

        printf("Digite o valor da sua segunda nota:");
        scanf("%f", &n2);

        getchar();

        printf("Digite o valor da sua terceira nota:");
        scanf("%f", &n3);

        getchar();

        n1 = n1*2;
        n2 = n2*4;
        n3 = n3*3;
        mp = (n1 + n2 + n3) / 10;
        mpt += mp;
        contador++;

        if (mp >= 7)
        {
            printf("APROVADO!\n");
        }
        else
        {
            printf("REPROVADO!\n");
        }
        
    }
    
    mpt = mpt / contador;

    printf("A media da turma e %.2f pontos.", mpt);

}

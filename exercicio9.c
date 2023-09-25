#include<stdio.h>
#include<stdlib.h>

main(){
    int cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, branco = 0, nulo = 0, validador = 0;

    do
    {
        printf("Digite o codigo do seu candidato[1,2,3,4 => candidatos][5 => nulo][6 => branco]:\n");
        scanf("%d", &validador);

        getchar();

        switch (validador)
        {
        case 1:
            cand1 += 1;
            break;
        case 2:
            cand2 += 1;
            break;
        case 3:
            cand3 += 1;
            break;
        case 4:
            cand4 += 1;
            break;
        case 5:
            nulo += 1;
            break;
        case 6:
            branco += 1;
            break;
        }

    } while (validador == 0);

    printf("Candidato 1: %d;\nCandidato 2: %d;\nCandidato 3: %d;\nCandidato 4: %d;\nVotos Nulos: %d;\nVotos em Branco: %d;");

}

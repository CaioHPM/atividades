#include<stdio.h>
#include<stdlib.h>

main(){
    int ddd, numVeiculos, numAcidentes, numcidades = 0, maiorA = 0, menorA = 0, maiorddd, menorddd, contador = 0;
    float mediaVeiculos, mediaAcidentes, mediaAcidentesRs;
    char estado[2];

    do
    {
        printf("Digite o DDD da cidade:\n");
        scanf("%d", &ddd);

        getchar();

        if (ddd >= 0)
        {
            printf("A qual estado pertence o DDD?\n");
            fgets(estado, 2, stdin);

            fflush(stdin);

            printf("Digite o numero de veiculos:\n");
            scanf("%d", &numVeiculos);

            getchar();

            printf("Digite o numero de acidentes:\n");
            scanf("%d", &numAcidentes);

            getchar();

            if (estado == 'rs')
            {
                numcidades += 1;
                mediaAcidentesRs += numAcidentes;
            }
            if (maiorA < numAcidentes)
            {
                maiorA = numAcidentes;
                maiorddd = ddd;
            }
            if (menorA > numAcidentes)
            {
                menorA = numAcidentes;
                menorddd = ddd;
            }
            
            mediaVeiculos += numVeiculos;
            contador++;
        }
        
    } while (ddd >= 0);

    mediaVeiculos = mediaVeiculos / contador;
    mediaAcidentesRs = mediaAcidentesRs / numcidades;

    printf("O maior indice de acidentes pertence ao DDD %d com %d acidentes.\nO menor indice de acidentes pertence ao DDD %d com %d acidentes.", maiorddd, maiorA, menorddd, menorA);
    printf("\nA media de veiculos nas cidades e %.2f\n", mediaVeiculos);
    printf("A media de acidentes nas cidades de RS e %.2f", mediaAcidentesRs);
}

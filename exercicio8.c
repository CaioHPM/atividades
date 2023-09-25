#include<stdio.h>
#include<stdlib.h>

main(){
    float salario, mediaSalarial = 0, mediaFilhos = 0, maiorSalario, perSalario100;
    int contador = 0, filhos, salario100 = 0;

    do
    {
        printf("Digite o seu salario:\n");
        scanf("%f", &salario);

        getchar();

        if (salario >= 0)
        {
            printf("Quantos filhos voce tem?\n");
            scanf("%d", &filhos);

            getchar();

            mediaSalarial += salario;
            mediaFilhos += filhos;
            contador++;
            if (salario > maiorSalario)
            {
                maiorSalario = salario;
            }
            if (salario <= 100)
            {
                salario100++;
            }
            
        }
        
    } while (salario >= 0);
    
    mediaSalarial = mediaSalarial / contador;
    mediaFilhos = mediaFilhos / contador;
    perSalario100 = (salario100*100) / contador;

    printf("A media salaria e %.2f\n", mediaSalarial);
    printf("A media de filhos e %.2f\n", mediaFilhos);
    printf("O maior salario e %.2f\n", maiorSalario);
    printf("Percentual de pessoas que recebem ate 100 reais e %.1f porcento.\n", perSalario100);




    }

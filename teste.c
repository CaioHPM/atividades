#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10];
    int anoN;
    char matri[20];
    char endereco[20];
    char curso[20];
    int periodo;
    char disciplina[20];
    float mensalidade = 0;


    printf("Digite seu nome:");
    fgets(nome, 10, stdin);




    printf("\nDigite o seu ano de nascimento:");
    scanf("%i", &anoN);

    getchar();

    printf("\nDigite o numero de sua matricula:");
    fgets(matri, sizeof(matri), stdin);

    


    printf("\nEscreva seu endereco:");
    fgets(endereco, sizeof(endereco), stdin);

    


    printf("\nQue curso voce esta fazendo?");
    fgets(curso, sizeof(curso), stdin);

    printf("\nEm que periodo?");
    scanf("%i", &periodo);

    getchar();

    printf("\nDigite uma disciplina:");
    fgets(disciplina, sizeof(disciplina), stdin);


    printf("\nQual o valor da sua mensalidade?");
    scanf("%f", &mensalidade);

    printf("\n\n\n\n");

    printf("=======================");
    printf("\nINFORMACOES DO USUARIO!");
    printf("\n=======================");
    printf("\nSeu nome e %s", nome);
    printf("Nasceu em %i",anoN);
    printf("\nNumero de matricula %s",matri);
    printf("Mora no endereco %s", endereco);
    printf("Cursando %s", curso);
    printf("Esta no %d semestre", periodo);
    printf("\nDisciplina %s", disciplina);
    printf("E paga %.2f de mensalidade", mensalidade);

    printf("teste");

    return 0;
    }
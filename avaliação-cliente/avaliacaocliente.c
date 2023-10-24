//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale (LC_ALL, "Portuguese");

    //variáveis
    int qtdRuim, qtdRegular, qtdBom, qtdOtimo, opcao;
    qtdRuim = 0;
    qtdRegular = 0;
    qtdBom = 0;
    qtdOtimo = 0;

    do 
    {   //menu de opções
        printf ("------------------------------------------------\n");
        printf ("Avalie o nosso atendimento. Digite uma opção: \n");
        printf("________________________________________________\n\n");
        printf ("1 - RUIM\n");
        printf ("2 - REGULAR\n");
        printf ("3 - BOM\n");
        printf ("4 - ÓTIMO\n");
        printf ("5 - SAIR\n\n");
        printf("------------------------------------------------\n\n");
        scanf ("%d", &opcao);
        printf ("\n\n");

        switch (opcao)
        {
        case 1: 
            qtdRuim++;
            break;
        case 2: 
            qtdRegular++;
            break;
        case 3: 
            qtdBom++;
            break;
        case 4: 
            qtdOtimo++;
            break;
        case 5:
        printf("Saindo.....\n");
            break;
        default: 
            printf ("Opção inválida!");
            break;
        }
        printf("\n\n");

    } while (opcao != 5);
    //resultado
    printf("----------------------------------------------------\n");
    printf("Resultado:\n\n");
    printf ("Quantidade de votos no ruim: %i\n", qtdRuim);
    printf ("Quantidade de votos no regular: %i\n", qtdRegular);
    printf ("Quantidade de votos no bom: %i\n", qtdBom);
    printf ("Quantidade de votos no ótimo: %i\n", qtdOtimo);
    printf("----------------------------------------------------");
    return 0;
}

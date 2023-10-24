#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float media;
    
    printf ("Digite a nota do aluno: ");
    scanf ("%f", &media);
    if (media >= 6)
    {
        printf ("Aprovado!");
    } 
    else 
    {
        if (media < 6 && media >= 3.5)
        {
            printf ("Recuperacao!");
        } else {
            printf ("Reprovado!");
        }
        

    }
    

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeroRandomicoNaoRepetido(int sorteioMega[], int index) {
    int numeroSorteado;
    int repetido = 0;
    do {
        numeroSorteado = rand() % 60 + 1; // Sorteia um número de 1 a 60
        
        // Verifica se o número já foi sorteado anteriormente
        for (int i = 0; i < index; i++) {
            if (sorteioMega[i] == numeroSorteado) {
                repetido = 1;
            }
        }
        
        // Repete o sorteio se o número já foi sorteado antes
    } while (repetido = 0);
    
    return numeroSorteado;	
}

int main() {
    int sorteioMega[6];
    srand(time(NULL));
    
    // Gera os números aleatórios sem repetição
    for (int i = 0; i < 6; i++) {
        sorteioMega[i] = numeroRandomicoNaoRepetido(sorteioMega, i);
    }
    
    printf("Números sorteados de 1 a 60 na Mega Sena:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", sorteioMega[i]);
    }
    
    return 0;
}

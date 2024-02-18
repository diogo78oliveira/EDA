#include <stdio.h>
#include "objeto.h"

int main() {
    Objeto Telemovel = { "Telemovel", 20.0 };
    Objeto Computador = { "Computador", 10.0 };

    converter_para_milimetros(&Telemovel);
    converter_para_milimetros(&Computador);

    Objeto mais_distante = objeto_mais_distante(Telemovel, Computador);
    float media = media_distancia(Telemovel, Computador);
    Objeto mais_proximo = objeto_mais_proximo(Telemovel, Computador);

    printf("Objeto mais distante: %s %.2f milimetros.\n", mais_distante.nome, mais_distante.distancia);
    printf("Media de distancia entre os objetos: %.2f milimetros.\n", media);
    printf("Objeto mais proximo: %s %.2f milimetros.\n", mais_proximo.nome, mais_proximo.distancia);
    
    
    FILE* file = fopen("dados.txt", "w");
    if (file == NULL) {
        printf("Erro,\n");
        return 1;
    }

    
    fprintf(file, "Objeto mais distante: %s %.2f milimetros.\n", mais_distante.nome, mais_distante.distancia);
    fprintf(file, "Media de distancia entre os objetos: %.2f milimetros.\n", media);
    fprintf(file, "Objeto mais proximo: %s %.2f milimetros.\n", mais_proximo.nome, mais_proximo.distancia);

    
    fclose(file);

    printf("Dados Guardados com sucesso.\n");

    return 0;
}

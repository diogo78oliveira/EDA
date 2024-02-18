#include <stdio.h>
#include "objeto.h"
#include <math.h>

float media_distancia(Objeto Telemovel, Objeto Computador) {
    return fabs(Computador.distancia - Telemovel.distancia);
}

Objeto objeto_mais_distante(Objeto Telemovel, Objeto Computador) {

    if (Telemovel.distancia > Computador.distancia) {
        return Telemovel;
    }
    else {
        return Computador;
    }
}

Objeto objeto_mais_proximo(Objeto Telemovel, Objeto Computador) {

    if (Telemovel.distancia < Computador.distancia) {
        return Telemovel;
    }
    else {
        return Computador;
    }
}

void converter_para_milimetros(Objeto* objeto) {
    objeto->distancia *= 1000.0;

}
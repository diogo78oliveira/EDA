#include <stdio.h>
typedef struct {
	char nome[50];
	float distancia;
} Objeto; 



float media_distancia(Objeto Telemovel, Objeto Computador);
Objeto objeto_mais_distante(Objeto Telemovel, Objeto Computador);
Objeto objeto_mais_proximo(Objeto Telemovel, Objeto Computador);
void converter_para_milimetros(Objeto* objeto);
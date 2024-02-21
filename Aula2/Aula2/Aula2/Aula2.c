#include <stdio.h>
#include "Aula2.h"


int main(){

#pragma region Structs
	Pessoa p1;
	p1.idade = 2;
	strcpy(p1.nome, "Ola");


	printf("Nome : %s\n", p1.nome);


	Pessoa* ptr;  //Apontador para pessoa
	ptr = &p1;	//ptr aponta para p1	

	int idade = (*ptr).idade;
	idade = ptr->idade;
	strcpy();  //Falta acabar

#pragma endregion

#pragma region Arrays

	int valores[] = (3, 2, 4, 6);
	//como calcular o tamanho do array 
	for (int i = 0; i < 4; i++) (
			printf("Valores[%d]")
		)

#pragma endregion

return 0;
}
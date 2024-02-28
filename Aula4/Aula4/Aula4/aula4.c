#include <stdio.h>
#include "Aula4.h"

int main() {

	//char nome[50];

	char* nome = (char*)malloc(sizeof(char) * 10);

	
	Aluno a1;
	a1.numero = 12;
	a1.nome = (char*)malloc(sizeof(char) * strlen("Andre"));
	strcpy(a1.nome, "Andre");

	Aluno* a2 = CriaAluno("ola", 12);

	Aluno* turma = CriaTurma(45);

	turma->numero = 12;
	turma->nome = (char*)malloc(sizeof(char) * strlen("Ola");
	strcpy(turma->nome, "ola");
	


	return 0;
}
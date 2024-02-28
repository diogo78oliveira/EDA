#include "Aula4.h"

Aluno* CriaAluno(char* nome, int numero) {
	Aluno* aux;

	aux = (Aluno*)malloc(sizeof(Aluno));
	aux->numero = numero;
	aux->nome = (char*)malloc(strlen(nome) * sizeof(char));
	strcpy(aux->nome, nome);
	return aux;
}

Aluno* CriaTurma(int numeroAlunos) {
	if (numeroAlunos <= 0) return NULL;
	return((Aluno*)malloc(sizeof(Aluno) * numeroAlunos);

}
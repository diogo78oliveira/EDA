#pragma once
#include <stdbool.h>

#define N 20

typedef struct Pessoa {

	int idade;
	char nome[N];
}Pessoa;

typedef struct Aluno {
	int numero;
	char* nome;
}Aluno;

typedef struct Alunos {
	Aluno a;
	Aluno* colega;
};



Aluno* CriaAluno(char* nome, int numero, int* pos);
Aluno* CriaTurma(int numeroAlunos);

bool ExisteAluno(Aluno turma[], int s, int n, int* pos);
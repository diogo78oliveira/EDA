/*
Apontadores
Aritmetica de apontadores
Diogo
*/

#include "Aula2.h"
#include <stdio.h>

int main() {

#pragma region Basico
	int p = 7;

	printf("Valor de p = %d\n", p);
	printf("p est� na posicao = %p\n", &p);

	int* k;								//k apontador para inteiro
	//O que faz isto?
	k = p;								//k fica com valor de p
	//k n�o aponta para p
//printf("Valor de k = %p\n", k);
//printf("Apontado por k = %d\n", *k);	//CUIDADO!!!

	k = &p;								//k fica com endere�o de p
	//k aponta para p
	printf("Valor de k = %p\n", k);
	printf("Apontado por k = %d\n", *k);
#pragma endregion

#pragma region Ex1

	int x = (*k)++;
	printf("Valor de p = %d\n", p);
	printf("Valor de x = %d\n", x);
	printf("Valor de k = %p\n", k);

	x = *(k++);						//equivalente a *k++
	printf("Valor de p = %d\n", p);
	printf("Valor de x = %d\n", x);
	printf("Valor de k = %p\n", k);

	x = *k++;						//pela preced�ncia de operadores, vale primeiro o que est� � direita, 
	//depois � esquerda										
	printf("Valor de p = %d\n", p);
	printf("Valor de x = %d\n", x);
	printf("Valor de k = %p\n", k);

	// Tamanho de mem�ria ocupado por um inteiro
	printf("int: %lu\n", sizeof(x));
	// Tamanho de mem�ria ocupado por apontador para  inteiro
	printf("*int: %lu\n", sizeof(k));
	// Tamanho de mem�ria ocupado por um double
	double aux;
	printf("double: %lu\n", sizeof(aux));

#pragma endregion

#pragma region Structs

	Pessoa p1;
	p1.idade = 2;
	strcpy(p1.nome, "Ola");

	printf("Nome: %s\n", p1.nome);

	Pessoa* ptr;		//Apontador para pessoa
	ptr = &p1;			//ptr aponta para p1

	int idade = (*ptr).idade;
	idade = ptr->idade;
	strcpy(ptr->nome, "");

	/*
	* (*ptr).campo == ptr->campo
	*/

	printf("Nome: %s\n", ptr->nome);
	printf("&p1: %p\n", &p1);
	printf("ptr: %p\n", ptr);

#pragma endregion

#pragma region Arrays

#pragma region ArraysSimples

	int valores[] = { 3,2,4,6 };
	// Como calcula o tamanho do array???
	// Ver sizeof(valores)
	int size = sizeof(valores) / sizeof(valores[0]);

	//Visualizar o conte�do do array
	for (int i = 0; i < size; i++) {
		printf("Valores[%d]=%d\n", i, valores[i]);
	}

	// endere�o de mem�ria do array valores
	printf("&Valores: %p\n", valores);

	// endere�o de mem�ria do 1� elemento do array valores
	printf("&Valores[0]: %p\n", &valores[0]);
	/*
	Conclus�o:
	 O nome do array corresponde ao endere�o
	 da primeira posi��o do array
	 valores == &valores[0]
	*/

	//Express�es equivalentes
	int* xx = &valores[0];
	int* yy = valores;

	printf("Valores[0]=%d - %d\n", *xx, *yy);

#pragma endregion

#pragma region ArrayApontadores

	int* ptrArray[N];
	//Inicializar o array
	for (int i = 0; i < N; i++) {
		ptrArray[i] = NULL;
	}
	ptrArray[0] = &p;
	*(ptrArray[0]) = 123;

	printf("*ptrArray[0]%d\n", *(ptrArray[0]));

	//Visualizar as variaveis que ptrArray aponta
	for (int i = 0; i < 5; i++) {
		printf("ptrArray[%d]=%p\n", i, ptrArray[i]);
		if (ptrArray[i] == NULL) continue;
		printf("*ptrArray[%d]=%d\n", i, *ptrArray[i]);
	}

	//Outro Exemplo
	int a = 5, b = 10, c = 15, d = 20, e = 25;
	int* ptrArray2[5] = { &a, &b, &c, &d, &e };

	for (int i = 0; i < 5; i++) {
		printf("Valor de ptrArray2[%d] = %p\n", i, ptrArray2[i]);
		printf("Valor de *ptrArray2[%d] = %d\n", i, *ptrArray2[i]);
	}
#pragma endregion
#pragma endregion

#pragma region Ex2

	int arr[] = { 10, 20 };
	int* n = arr;
	//n = &arr[0];
	++*n;
	printf("arr[0] = %d, arr[1] = %d, *n = %d\n",
		arr[0], arr[1], *n);

#pragma endregion

#pragma region Ex3

	int arr1[] = { 10, 20 };
	int* q = arr;
	q = &arr[0];
	*q++;
	printf("arr[0] = %d, arr[1] = %d, *q = %d\n",
		arr1[0], arr1[1], *q);
#pragma endregion

#pragma region Ex4
	int arr2[] = { 10, 20 };
	int* r = arr;
	*++r;
	printf("arr[0] = %d, arr[1] = %d, *r = %d\n",
		arr[0], arr[1], *r);
#pragma endregion


	return 0;
}






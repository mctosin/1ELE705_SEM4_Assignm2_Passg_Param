#include "stdio.h"
#include "stdlib.h"

// Não modifique o código acima

// Coloque aqui apenas os seus protótipos de função



// Não modifique o código abaixo

int main(int argc, char** argv) {

	int a[1000];
	int i, Q_elem_a;

	for (i = 1; i < argc; i++) {
		a[i - 1] = atoi(argv[i]);
		fprintf(stderr, "%d ", a[i - 1]);
	}
	fprintf(stderr, "\n");
	Q_elem_a = argc - 1;

	// Não modifique o código acima

	// Seu programa deve criar uma função para ordenar
	// o vetor a[]. A especificação da função segue abaixo.

	// Faça seu código aqui:


	// O vetor a[] já ordenado deve ser enviado para a saída padrão
	// A saída deve ser para a stdout e deve ser na forma de 
	// uma string contendo os elementos do vetor ordenado  
	// serados por um espaço entre eles.
	// O último caractere da string deve ser o pula linha '\n'. 
	// Exemplo: "<elem1>< ><elem2>< > ... < ><elemN><\n>"
	// <  > e ... servem para representar os componentes da string
	// e não devem ser impressos.
	// Crie a saída para o programa de testes automático aqui:

	

	// Não modifique o código abaixo
	
	return 0;
}

	// Não modifique o código acima

// Crie uma função para ordenar um vetor pelo método da seleção
// Esta função deve ser capaz de ordenar um vetor de inteiros
// cujo endereço é passado para a função.
// Outro parâmetro que deve ser passado para a função é a 
// quantidade de elementos do vetor a ser ordenado
// Nesta função é PROIBIDO:
// 1. Usar variáveis definidas globalmente.
// 2. Imprimir ou usar funções para impressão dentro desta função
// 3. Criar outros parâmetros de passagem para a função, senão
//	  aqueles definidos neste enunciado.

// Crie sua função abaixo



// Não modifique o código abaixo
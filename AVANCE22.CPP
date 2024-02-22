#include <iostream>
using namespace std;

// Función para imprimir los elementos de un array usando un bucle
void imprimir(int *n, int cant) {
	for (int i = 0; i < cant; i++) { // Itera sobre todos los elementos del array
		cout << i << " = " << n[i] << endl; // Imprime el índice y el valor del elemento
	}
}

// Función para imprimir los elementos de un array de forma recursiva
void imprec(int *n, int cant) {
	if (cant > 0) { // Verifica si aún quedan elementos por imprimir
		imprec(n, cant - 1); // Llama recursivamente a la función con un elemento menos
		cout << cant << " : " << n[cant - 1] << endl; // Imprime el valor del elemento actual
	}
}

int main(int argc, char *argv[]) {
	const int TAM = 7; // Tamaño del array
	int numeros[] = {3, 5, 2, 8, 1, 7, 4}; // Array de números
	
	cout << "IMPRECION BUCLE" << endl; // Imprime un encabezado
	imprimir(numeros, TAM); // Llama a la función para imprimir usando un bucle
	
	cout << "IMPRECION RECURSIVA" << endl; // Imprime un encabezado
	imprec(numeros, TAM); // Llama a la función para imprimir de forma recursiva
	
	return 0;
}

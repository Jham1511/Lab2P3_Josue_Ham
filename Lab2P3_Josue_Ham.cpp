#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int random() {
	int aleatorio = 97 + rand() % (123 - 97);
	return aleatorio;
}
void arreglos() {
	int array[10];
	cout << "Arreglo inicial: ";
	for (int i = 0; i < 10; i++)
	{
		array[i] = random();
		cout << "[" << (char)array[i] << "]";
	} //Este for rellena el arreglo inicial de chars aleatorios

	int arregloFinal[10];
	int auxiliar;
	int contador = 0;
	int valorAnterior; //Variable para salvar el valor anterior

	for (int k = 0; k < 10; k++)
	{
		if (array[k] != array[k+1])
		{
			arregloFinal[k] = array[k];
		}
	}//Le asigno los valores del arreglo inicial al arreglo a ordenar

	printf("\n");
	cout << "Nuevo arreglo con caracteres ordenados y sin repetir: ";
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (arregloFinal[j] > arregloFinal[j+1])
			{
				auxiliar = arregloFinal[j];
				arregloFinal[j] = arregloFinal[j + 1];
				arregloFinal[j + 1] = auxiliar;
			}
		}
	}//Metodo de burbuja para ordenar

	for (int l = 0; l < 10; l++)
	{
		cout << "[" << (char)arregloFinal[l] << "]";
	}//Solo imprime
}
//Metodos ejercicio 2
int Factorial(int numero) {
		if (numero == 0)
		{
			return 1;
		}
		else {
			return numero * (numero - 1);
		}
}
void figura(int tam) {
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			if (i == tam - 1)
			{
				cout << "*";
			}
			else if(j == 0) {
				cout << "*";
			} else if (j <= i){
				cout << "*";
			}
		}
		printf("\n");
	}
}
//Metodo del menu pricinpal, retorna la opcion
int menu() {
	cout << "\nMenu del Programa" << endl
		<< "1 -> Ejercicio 1" << endl
		<< "2 -> Ejercicio 2" << endl
		<< "3 -> Salir" << endl
		<< "Ingrese la opcion que desea: " << endl;
		int numero;
		cin >> numero;
		return numero;
}
int main()
{
	srand(time(NULL));
	int respuesta= menu();
	while (respuesta !=3){
		switch (respuesta) {
		case 1: {	
			arreglos();

		}
			  break;
		case 2: {
			cout << "Ingrese un numero entero: ";
			int numero;
			cin >> numero;
			if (numero > 0)
			{	
				int fact;
				fact = Factorial(numero);
				cout << "El factorial de " << numero << " es de: " << fact;
				printf("\n");
				printf("\n");
				figura(fact);
			}
			else {
				cout << "El numero ingresado no es valido";
			}
		}
			  break;
		}//Fin del switch
		respuesta = menu();
	}//Fin del while
}
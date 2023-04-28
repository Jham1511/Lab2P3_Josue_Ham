#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int random() {
	int aleatorio = 97 + rand() % (123 - 97);
	return aleatorio;
}
void arreglo_Inicial() {
	int array[10];
	cout << "Arreglo inicial: ";
	for (int i = 0; i < 10; i++)
	{
		array[i] = random();
		cout << "[" << (char)array[i] << "]";
	}


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
			arreglo_Inicial();

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
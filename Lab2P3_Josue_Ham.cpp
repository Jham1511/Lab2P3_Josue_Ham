#include <iostream>
using namespace std;
void figura(int tam) {
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			if (i == tam - 1) cout << "*";
			if (j == 0) cout << "*" << endl;
			if (j <= i) cout << "*";
		}
	}
}
int menu() {
	cout << "Menu del Programa" << endl
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
	int respuesta= menu();
	while (respuesta !=3){
		switch (respuesta) {
		case 1: {

		}
			  break;
		}
		case 2: {

		}
			  break;
	}//Fin del while
}
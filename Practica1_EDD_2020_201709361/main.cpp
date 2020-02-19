
#include <iostream>
#include <string>
#include <stdlib.h>
#include "ListaDoble.h"
#include <stdio.h>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include "Funciones.h"



using namespace std;


#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_X 120
#define KEY_BACKSPACE 8
#define CTRL_C 3
#define CTRL_W 23
#define CTRL_S 19


int main(){

	cout << "holi";
	char a = 'a';
	int ho = 2;
	
	

	Bit *holi = new Bit(a, ho);
	Nodo *em = new Nodo('a', 4);
	
	
	string aux;
	int man = em->bit->posicion;
	cout << holi->obtener_caracter();
	cout << man;
	cout << "\n";
	
	//...
	





	int choice, nn;

	do
	{
		system("cls");
		menu_principal();
		cout << "\n\nEnter your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			system("cls");
			crear_archivo();
			break;

		case 2:
			abrir_archivo();
			break;

		case 3:
			archivos_recientes();
			break;


		case 5:

			break;

		case 6:
			cout << "Total Nodes = ";
			break;

		case 7:
			int searchVal;
			cout << "Enter search data: ";
			cin >> searchVal;

			break;

		default:
			cout << "Sorry Wrong choice" << endl;
			break;
		}
	} while (choice != 4);


	for(int i=0;i<aux.length();i++)
	{
		cout << "\n" << aux[i];
	}
	
	
	system("pause");
	return 0;

}

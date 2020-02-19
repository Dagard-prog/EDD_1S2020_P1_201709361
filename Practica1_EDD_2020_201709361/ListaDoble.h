#pragma once
#include <iostream>
#include <string>
#include "Bit.h"
#include "Nodo.h"

using namespace std;

//todas las variables se declaran en minúsculas

class ListaDoble{


	class Nodo {






	public:
		Bit* bit;
		Nodo* anterior;
		Nodo* siguiente;

		//Declaración del Constructor de la clase "Nodo"
		Nodo(char bit_entrada, int posicion) {
			bit = new Bit(bit_entrada, posicion);
			bit->insertar_caracter(bit_entrada);
			bit->insertar_posicion(posicion);
			anterior = siguiente = NULL;
		};

		//Declaración de los metodos de la clase "Nodo"
		void insertar_nodo_anterior(Nodo* anterior) {
			this->anterior = anterior;
		};

		void insertar_nodo_siguiente(Nodo* siguiente) {
			this->siguiente = siguiente;
		};

		//Declaración de las funciones de la clase "Nodo"
		/*Nodo* obtener_nodo_siguiente() {
			Nodo *nodo_a_recuperar = this->siguiente;
			return nodo_a_recuperar;
		};
		Nodo* obtener_nodo_anterior() {
			Nodo *nodo_a_recuperar = this->anterior;
			return nodo_a_recuperar;
		};
		*/



	};
	//finaliza clase nodo

public:
	//inicio
	Nodo *head;
	//cola
	Nodo* tail;
	int size;

	ListaDoble() {
		head = tail = NULL;
		size = 0;



	}


	//retorna la longitud de la lista
	int length()
	{
		return size;
	}

	//retorna un booleano para ver si la lista está vacía o no verificando el contador de la lista
	bool is_empty()
	{
		if (size <= 0)
		{
			return true;
		}

		return false;
	}

	bool validacion_dato(int posicion, char caracter)
	{
		
		bool validacion = false;
		if (!is_empty()) {
			Nodo* temp = head;

			//busca la posición ingresada
			while (temp) {
				if (temp->bit->posicion == posicion|temp->bit->caracter==caracter)
				{
					validacion = true;
					break;
				}
				else {
					temp = temp->siguiente;

				}



			}

		}
		else {
			cout << "List is empty" << endl;
		}

		return validacion;
	}
	//busca en la lista de  nodos según el caracter ingresado y regresa la posición del nodo
	int search(char value, int posicion)
	{
		int posicion_del_nodo_encontrado = NULL;

		if (!is_empty()) {
			Nodo* temp = head;

			//busca la posición ingresada
			while (temp) {
				if (temp->bit->posicion == posicion)
				{
					
					break;
				}
				else {
					temp = temp->siguiente;
				
				}
				
				
			
			}
			//a partir de la posición ingresada se busca el caracter indicado
			while (temp){

				if (temp->bit->caracter == value)
				{
					posicion_del_nodo_encontrado = temp->bit->posicion;
					//cout << "YES! got it." << endl;
					break;
				}
				temp = temp->siguiente;
			}
			
		}
		else{
			cout << "List is empty" << endl;
		}

			return posicion_del_nodo_encontrado;
	}
	
	//funcion: insertar al inicio
	/*void insertar_al_inicio(char caracter, int posicion){
		
		Nodo*temp = new Nodo(caracter, posicion);
		size = 0;

		if(head==NULL) {
			head = tail = temp;
			
		}
		else {
			head->anterior = temp;
			temp->siguiente = head;
			head = temp;
		
		}
		size++;


	
	}*/

	void insert_al_final(char caracter, int posicion)
	{
		Nodo* temp = new Nodo(caracter, posicion);

		if (tail == NULL)
			head = tail = temp;
		else
		{
			tail->siguiente = temp;
			temp->anterior = tail;
			tail = temp;
		}
		size++;
	}

	//mostrar nodos de la lista

	void display()
	{
		Nodo* temp = head;

		cout << "\n\nDisplay in forward order\n";
		while (temp != NULL)
		{
			cout << temp->bit->caracter << " -> ";
			temp = temp->siguiente;
		}
		cout << " NULL";
	}

// Creación de variables, declaración de la forma de las funciones y metodos de la clase











};



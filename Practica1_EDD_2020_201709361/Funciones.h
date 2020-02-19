#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include "ListaDoble.h"
#include <stdio.h>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <string>

using namespace std;

#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_X 120
#define KEY_BACKSPACE 8
#define CTRL_C 3
#define CTRL_W 23
#define CTRL_S 19


void menu_principal() {
	cout << "-------- MENU ---------" << endl
		<< "UNIVERSIDAD DE SAN CARLOS" << endl
		<< "FACULTAD DE INGENIERÍA" << endl
		<< "ESTRUCTURAS DE DATOS" << endl
		<< "PRACTICA 1" << endl
		<< "DANIEL ANTONIO GRANADOS AZURDIA" << endl
		<< "201709361" << endl
		<< endl
		<< endl
		<< endl
		<< "1. Crear Archivo" << endl
		<< "2. Abrir Archivo" << endl
		<< "3. Archivos Recientes" << endl
		<< "4. Salir" << endl
		<< "5. Display" << endl
		<< "6. Total Nodes" << endl
		<< "7. Search" << endl
		<< "8. Exit" << endl;
}

void menu_crear_archivo()
{
	cout << "-------- MENU ---------" << endl

		<< "1. Buscar y Reemplazar: Ctrl + W" << endl
		<< "2. Reporte : Ctrl + C" << endl
		<< "Guardar : Ctrl + S" << endl
		<< "4. Regresar" << endl;





}



 string  Lista_Doble_Informe(string entrada)
{
	string salida = "";

	for (int i = 0; i < entrada.length(); i++) {
		if (i ==entrada.length()- 1) {
			salida = salida + entrada[i];
		}
		else {
			salida = salida + entrada[i] + "->";
		}


	}

	return salida;
}


 void abrir_archivo() {

	 ifstream open;
	 char cadena[128];
	 string texto_a_mandar;
	 string ruta_ingresada = "";
	 string texto_ingresado = "";
	 bool validacion_archivo_existente = 0;
	 // te pide ingresar el directorio del archivo a abrir

	 while (validacion_archivo_existente == 0) {

		 cout << "Ingresa la dirección del archivo:  ";
		 getline(cin, ruta_ingresada);

		 ifstream fe(ruta_ingresada.c_str());

		 //revisa si la ruta ingresada existe
		 if (fe.is_open()) {
			 while (!fe.eof()) {
				 fe >> cadena;
				 texto_a_mandar = texto_a_mandar + cadena + " ";
				 validacion_archivo_existente = 1;
				 
				 break;
			 }
			 fe.close();
		 }
		 else {
			 cout << "Ruta ingresada inexistente" << "\n";
		 }
	 }


	 ListaDoble* lista_de_caracteres = new ListaDoble();
	 menu_crear_archivo();
	 char key = ' ';
	 int value = key;
	 //texto del editor de texto
	 string texto = texto_a_mandar;
	 char plus_caracter;
	 int plus;
	 //variable que se usa para guardar todo el codigo de graphviz
	 string texto_en_lista = "";
	 int contador_lista = 0;
	 
	 while (value != VK_ESCAPE) {
		 key = _getch();
		 value = key;
		 string nombre_archivo;
		 ofstream archivo;
		 string lk;
		 switch (key) {

			 //funciones del teclado especiales con combinación de teclas

				 //Ctrl + c : se generan reportes
		 case CTRL_C:
			 system("cls");

			 cout << "Ingrese el nombre del archivo:  ";
			 // se ingresa el nombre del archivo
			 getline(cin, nombre_archivo);

			 nombre_archivo = nombre_archivo + ".dot";
			 // se genera un archivo ".txt" con el nombre ingresado 
			 archivo.open(nombre_archivo.c_str(), ios::out);
			 lk="dot -Tpng ./"+nombre_archivo+" -o holi.png";
			 system(lk.data());
			 // se genera el codigo de graphviz y se agrega al archivo
			 texto_en_lista = Lista_Doble_Informe(texto);
			 archivo << texto_en_lista;
			 archivo.close();
			 


			 break;

			 //Ctrl+ S: se guarda el archivo
		 case CTRL_S:
			 cout << "Ingrese el nombre del archivo:  ";
			 // se ingresa el nombre del archivo
			 getline(cin, nombre_archivo);

			 nombre_archivo = nombre_archivo + ".txt";
			 // se genera un archivo ".txt" con el nombre ingresado 
			 archivo.open(nombre_archivo.c_str(), ios::out);

			 archivo << texto;
			 archivo.close();

			 break;

			 //se busca y reemplaza una o varias palabras
		 case CTRL_W:
			 cout << "funcion para ctrl + w";
			 lista_de_caracteres->display();
			 break;


			 //funciones del teclado para moverse y borrar 

		 case KEY_LEFT:
			 cout << " GOES LEFT\n\n";
			 break;
		 case KEY_RIGHT:
			 cout << " GOES RIGHT\n\n";
			 break;
		 case KEY_BACKSPACE:

			 cout << " That is backspace\n\n";
			 break;
			 //acá se deben de agregar cada caracter ingresado a la lista doble
		 default:
			 if (value == 77 | value == 75 | value == 8)
			 {
				 break;
			 }
			 else {

				 
				 cout << texto;

				 char aux = key;
				 texto = texto + key;
				 lista_de_caracteres->insert_al_final(aux, contador_lista);
				 system("cls");
				 cout << texto;
				 value = key;
				 contador_lista++;
				 break;
			 }


		 }



	 }


	 

 };
 void archivos_recientes() {
 };

 void crear_archivo() {
	 ListaDoble *lista_de_caracteres = new ListaDoble();
	 menu_crear_archivo();
	 char key = ' ';
	 int value = key;
	 //texto del editor de texto
	 string texto = "";
	 char plus_caracter;
	 int plus;
	 //variable que se usa para guardar todo el codigo de graphviz
	 string texto_en_lista = "";
	 int contador_lista = 0;


	 while (value != VK_ESCAPE) {
		 key = _getch();
		 value = key;
		 string nombre_archivo;
		 ofstream archivo;
		 switch (key) {

			 //funciones del teclado especiales con combinación de teclas

				 //Ctrl + c : se generan reportes
		 case CTRL_C:
			 system("cls");

			 cout << "Ingrese el nombre del archivo:  ";
			 // se ingresa el nombre del archivo
			 getline(cin, nombre_archivo);

			 nombre_archivo = nombre_archivo + ".txt";
			 // se genera un archivo ".txt" con el nombre ingresado 
			 archivo.open(nombre_archivo.c_str(), ios::out);

			 // se genera el codigo de graphviz y se agrega al archivo
			 texto_en_lista = Lista_Doble_Informe(texto);
			 archivo << texto_en_lista;
			 archivo.close();
			 system("cls");


			 break;

			 //Ctrl+ S: se guarda el archivo
		 case CTRL_S:
			 cout << "Ingrese el nombre del archivo:  ";
			 // se ingresa el nombre del archivo
			 getline(cin, nombre_archivo);

			 nombre_archivo = nombre_archivo + ".txt";
			 // se genera un archivo ".txt" con el nombre ingresado 
			 archivo.open(nombre_archivo.c_str(), ios::out);

			 archivo << texto;
			 archivo.close();

			 break;

			 //se busca y reemplaza una o varias palabras
		 case CTRL_W:
			 cout << "funcion para ctrl + w";
			 lista_de_caracteres->display();
			 break;


			 //funciones del teclado para moverse y borrar 

		 case KEY_LEFT:
			 cout << " GOES LEFT\n\n";
			 break;
		 case KEY_RIGHT:
			 cout << " GOES RIGHT\n\n";
			 break;
		 case KEY_BACKSPACE:

			 cout << " That is backspace\n\n";
			 break;
			 //acá se deben de agregar cada caracter ingresado a la lista doble
		 default:
			 if (value == 77 | value == 75 | value == 8)
			 {
				 break;
			 }
			 else {

				 system("cls");
				 cout << texto;

				 char aux = key;
				 texto = texto + key;
				 lista_de_caracteres->insert_al_final(aux,contador_lista);
				 system("cls");
				 cout << texto;
				 value = key;
				 contador_lista++;
				 break;
			 }


		 }



	 }
 
 }

 //buscar y reemplaza una palabra y devuelve el texto actualizado :o 
 void buscar_reemplazar(ListaDoble lista_ingresada) {
 
	 string palabra_a_buscar;
	 string sustitucion_de_palabra_buscada;
	 ListaDoble lista_a_analizar = lista_ingresada;
	 
	 cout << "Ingrese palabra a buscar: ";
	 getline(cin, palabra_a_buscar,' ');

	 cout << "Ingrese reemplazo de palabra: ";
     getline(cin, sustitucion_de_palabra_buscada, ' ');
	 bool no_encontrada = true;
	 int posicion_desde_donde_empieza_busqueda=0;
	 int posicion_palabra = 0;
	 bool validacion=false;
	 int posicion_encontrada;
	 while(no_encontrada){ 
		 

		 

		 if (validacion == false){
			 posicion_palabra = 0;
			 posicion_encontrada = lista_a_analizar.search(palabra_a_buscar[0], posicion_desde_donde_empieza_busqueda);
			 posicion_desde_donde_empieza_busqueda = posicion_encontrada + 1;

		 }
		 else {
			 validacion = lista_a_analizar.validacion_dato(posicion_encontrada, palabra_a_buscar[posicion_palabra]);
			posicion_encontrada = posicion_encontrada+1;
			if (palabra_a_buscar.length() == posicion_palabra){

			}
			posicion_palabra++;
			
				

		 }



		 
	 }
 
 }


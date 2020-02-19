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
class Bit {
	//declaraci�n de variables de la clase

public:
	int posicion = NULL;
	char caracter = NULL;
	//Declaraci�n de la forma del constructor de la clase
	Bit(char caracter, int posicion) {
		this->posicion = posicion;
		this->caracter = caracter;
	};

	//--------------------------------------------------------------------------------------------------
	//Declaraci�n de la forma del metodo "insertar caracter" y de la funcion "obtener caracter"


	void insertar_caracter(char caracter_a_ingresar) {
		this->caracter = caracter_a_ingresar;
	};

	char obtener_caracter() {
		char caracter_a_recoger = this->caracter;
		return caracter_a_recoger;
	};
	//--------------------------------------------------------------------------------------------------
	//Declaraci�n de la forma del metodo "insertar posici�n" y de la funcion "obtener posicion"


	void insertar_posicion(int posicion_a_ingresar) {
		this->posicion = posicion_a_ingresar;
	};

	int obtener_posicion() {
		int posicion_a_recoger = this->posicion;

	};
};

class Bit {
	//declaración de variables de la clase

public:
	int posicion = NULL;
	char caracter = NULL;
	//Declaración de la forma del constructor de la clase
	Bit(char caracter, int posicion) {
		this->posicion = posicion;
		this->caracter = caracter;
	};

	//--------------------------------------------------------------------------------------------------
	//Declaración de la forma del metodo "insertar caracter" y de la funcion "obtener caracter"


	void insertar_caracter(char caracter_a_ingresar) {
		this->caracter = caracter_a_ingresar;
	};

	char obtener_caracter() {
		char caracter_a_recoger = this->caracter;
		return caracter_a_recoger;
	};
	//--------------------------------------------------------------------------------------------------
	//Declaración de la forma del metodo "insertar posición" y de la funcion "obtener posicion"


	void insertar_posicion(int posicion_a_ingresar) {
		this->posicion = posicion_a_ingresar;
	};

	int obtener_posicion() {
		int posicion_a_recoger = this->posicion;

	};
};

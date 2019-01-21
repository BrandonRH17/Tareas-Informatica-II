#include <iostream>
#include "mensaje.hh"
#include "mensaje1.hh"
#include "Valor3.hh"

int main(){
	/* 
	Se utiliza el prefijo std para aceder a los metodos incluidos en el lenguaje.
	*/
	printf(MENSAJE);
	
	printf("%s,%i\n", MENSAJE1, VALOR3);
	/* 
	retornamos el valor 0 para indicar que el programa se ejecuto sin errores.
	*/
	return 0;
}
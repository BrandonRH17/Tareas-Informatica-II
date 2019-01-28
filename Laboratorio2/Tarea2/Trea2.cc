#include <iostream>
int main(){

    int valor1 = 1;

    int valor2 = 1;



    int resultado = ++valor1 + valor2++;

//Queda como 3 ya que al agregar ++ después del valor2 indica que se agregue el valor después de evaluar la expresión, dando 
//como resultado 3, no 4. 

    std::printf("valor1: %i, valor2: %i, resultado: %i\n", valor1, valor2, resultado);

}
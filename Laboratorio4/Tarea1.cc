#include <iostream>
void porValor(int valor){
    valor = 42;
}
//*1*
void porReferencia(int& valor){
    valor = 42;
}

int main(){
    int valor1 = 0;
    int valor2 = 0;

    porValor(valor1);
    porReferencia(valor2);

    printf("El resultado por valor es %i\n", valor1);
    printf("El resultado por referencia es %i\n", valor2);
//EL valor queda como 42 ya que en *1*, se utilizo el &, entonces la función en lugar de 
//utilizar el valor dado, acude a la posición indicada, y esta habia sido 42. 
}
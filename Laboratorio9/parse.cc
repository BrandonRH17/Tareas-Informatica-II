#include "Expresion.hh"
#include <iostream>
#include <string.h>


double Valor::evaluar(){
    return valor;
}

double OperacionBinaria::evaluar(){
    double op1 = operador1->evaluar();
    double op2 = operador2->evaluar();
    double resultado = this -> operar(op1, op2); 
    return resultado; 
}

double Suma::operar(const double op1, const double op2){
    return op1+op2;
}

double Multiplicacion::operar(const double op1, const double op2){
    return op1*op2;
}

bool parse(const std::string expression, Expression* resultado){
    for (int i = 0; i < expression.size(); i++){
        if (((expression[i]=='+')||(expression[i]=='*'))&&((expression[i+1]!='+')||(expression[i+1]!='*'))&&((expression[i-1]!='+')||(expression[i-1]!='*'))){
            if ((expression[i]=='+')) {

				resultado = new Suma (new Valor(expression[i-1]));

			}else if ((expression[i]=='*')) {

				resultado = new Multiplicacion (new Valor(expression[i-1]));

			}

		}
        }
    }



int main(){

    std::string entrada("1+2*3");

    Expression* expr;



    // Si se llama a la funcion ''parse'' de la siguiente manera

    parse(entrada, expr);



    // Es equivalente a construir una expressoin de la siguiente manera

    Expression* expr2 = new Suma(new Valor(1), new Multiplicacion(new Valor(2), new Valor(3)));



    // Por lo tanto la siguiente linea impirme:

    // "La diferencia es 0.0"

    printf("La diferencia es %d", expr2->evaluar() - expr->evaluar());

}
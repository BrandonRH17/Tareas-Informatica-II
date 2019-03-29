#include <iostream>
#include <string.h>
#include "clases.hh"
#include "Semantica.hh"
#include <sstream>


bool Arith::parse(const std::string& valor, int& resultado){
    int result = 0, arg1, arg2;
    std::stringstream oper1, oper2;
    if(parse(valor, resultado)){
        for(int i= 0; i < valor.size(); i++){
            if (((valor[i]=='+')||(valor[i]=='*'))&&((valor[i]!='+')||(valor[i]!='*'))) {
                oper1<< valor[i-1];
                oper1>>arg1;
                oper2<<valor[i+1];
                oper2>>arg2;
                if ((valor[i]=='+')){
                    result += Arith::opSuma(arg1,arg2);
                }else if((valor[i]=='*')){
                    result += Arith::opProducto(arg1, arg2);
                }
            }
            oper1.str("");
            oper2.str("");
        }
        resultado = result;
    }else{
        return false;
    }
    return true;
}
int Arith::opSuma(const int arg1, const int arg2)const {
    return arg1 + arg2;
}
int Arith::opProducto(const int arg1, const int arg2)const{
    return arg1 * arg2;
}

bool ZArith::parse(const std::string& valor, int& resultado){
    int result = 0, arg1, arg2;
    std::stringstream oper1, oper2;
    if(parse(valor, resultado)){
        for(int i= 0; i < valor.size(); i++){
            if (((valor[i]=='+')||(valor[i]=='*'))&&((valor[i]!='+')||(valor[i]!='*'))) {
                oper1<<valor[i-1];
                oper1>>arg1;
                oper2<<valor[i+1];
                oper2>>arg2;
                if ((valor[i]=='+')){
                    result += ZArith::opSuma(arg1,arg2);
                }else if((valor[i]=='*')){
                    result += ZArith::opProducto(arg1, arg2);
                }
            }
            oper1.str("");
            oper2.str("");
        }
        resultado = result;
    }else{
        return false;
    }
    return true;
}
int ZArith::opSuma(const int arg1, const int arg2)const {
    return (arg1 + arg2)%_base;
}
int ZArith::opProducto(const int arg1, const int arg2)const{
    return (arg1 * arg2)%_base;
}

bool evaluar(const Semantica& x, const std::string& expression, int& resultado){

	return x.parse(expression, resultado);

}

int main(){
    std::string ex1("2*3+5");
    std::string ex2("2*mal+3");
    int resultado;
    Arith sem1;
    ZArith sem2(5);

    if(evaluar(sem1, ex1, resultado)){
        // Imprime: "El resultado es '11'"
        printf("El resultado es '%i'", resultado);
    }

    if(evaluar(sem2, ex1, resultado)){
        // Impirme: "El resultado es '2'"
        printf("El resultado es '%i'", resultado);
    }

    if(!evaluar(sem1, ex2, resultado)){
        // Imprime: "No se pudo evaluar ex2"
        printf("No se pudo evaluar ex2");
    }
}
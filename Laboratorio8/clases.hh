#pragma once 
#include "Semantica.hh"

class Arith : public Semantica {
    Arith(){};
    ~Arith(){};
    bool parse(const std::string& valor, int& resultado);
    int opSuma(const int arg1, const int arg2) const;
    int opProducto(const int arg1, const int arg2) const;
    };



class ZArith : public Semantica {
    public: 
    ZArith(int base){
        _base = base;
    }
    ~ZArith()= default;
    bool parse(const std::string& valor, int& resultado);
    int opSuma(const int arg1, const int arg2) const;
    int opProducto(const int arg1, const int arg2) const;
    
    private: 
    int _base;
};
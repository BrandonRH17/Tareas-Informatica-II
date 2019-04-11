#pragma once

class Expression{
    public: 
    virtual double evaluar();
};

class Valor: public Expression{
    public: 
    Valor(double valor);
    double evaluar() ;
    double valor;
};

class OperacionBinaria{
    public: 
    OperacionBinaria(Expression* operador1, Expression* operador2);
    virtual double operar(const double op1, const double op2);
    double evaluar();
    double op1;
    double op2;
    Expression* operador1;
    Expression* operador2;
};

class Suma: public OperacionBinaria{
    public: 
    double operar(const double op1, const double op2);
};

class Multiplicacion: public OperacionBinaria{
    public:
    double operar(const double op1, const double op2);
};

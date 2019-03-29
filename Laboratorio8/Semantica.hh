#pragma once
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
class Semantica {
    public: 
    virtual bool parse(const std::string& valor, int& resultado) const = 0;
    virtual int opSuma(const int arg1, const int arg2) const = 0;
    virtual int opProducto(const int arg1, const int arg2) const = 0;
};
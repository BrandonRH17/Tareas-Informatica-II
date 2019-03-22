#pragma once
#include <iostream>
#include <string>
#include "Vector2d.hh"
#include "Figura.hh"

class Rectangulo : public Figuras {
    public:
    Vector2d esquina;
    double ancho;
    double largo;
    Rectangulo (Vector2d e, double l, double a);
    double area() const;
    void escalar(const double escala);
    void mover(const Vector2d lugar);
    bool estaAdentro(const Vector2d posicion) const;
    std::string to_string(); 
};
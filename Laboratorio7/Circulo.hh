#pragma once
#include <iostream>
#include <string>
#include "Vector2d.hh"
#include "Figura.hh"


class Circulo : public Figuras {
    public:
    Vector2d centro;
    double r;
    const float pi = 3.1416;
    Circulo (Vector2d c, float r);
    virtual double area() const override;
    virtual void escalar(const double escala) override;
    virtual void mover(const Vector2d lugar) override;
    virtual bool estaAdentro(const Vector2d posicion) const override;
    virtual std::string to_string(); 
};
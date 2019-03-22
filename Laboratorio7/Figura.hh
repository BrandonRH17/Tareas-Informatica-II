#pragma once
#include "Vector2d.hh"

class  Figuras{
    public:
    virtual double area() const;
    virtual void escalar(const double escala);
    virtual void mover(const Vector2d lugar);
    virtual bool estaAdentro(const Vector2d posicion) const;
    virtual std::string to_string() const;
};

#pragma once
#include <string>
#include "Vector2d.hh"
#include <string>
#include <sstream>

class Vehiculo{
    public:     
    void aceleracion(float t){
        const float aX = Velocidad.x / t;
        const float aY = Velocidad.y / t;
    }
    void avanzar(float t){
        float disX = Velocidad.x * t;
        float disY = Velocidad.y * t;
        Posicion.x = Posicion.x + disX;
        Posicion.y = Posicion.y + disY; 
    }
    void to_string(){
        std::stringstream Vector2d;
        Vector2d<< "{x:"<< Posicion.x<< ",y:"<< Posicion.y<<"}";
        std::string l = Vector2d.str ();
        printf(l.c_str()); 
    }
    private: 
    Vector2d Velocidad; 
    Vector2d Posicion;
}; 
class Instancia{
    void avanzar(const Vector2d& acelerar){
        const Vector2d deltaVelocidad = acelerar * instante;
        Posicion.x = Posicion.x + Velocidad.x * instante;
        Posicion.y = Posicion.y + Velocidad.y * instante;
    }
    const float instante = 0.01;
    Vector2d Velocidad; 
    Vector2d Posicion;
}
<<<<<<< HEAD
#include "Vehiculo.hh"
#include "Vector2d.hh"
#include <string>

Vehiculo::Vehiculo() : Velocidad(0,0), Posicion(0,0){}

Vector2d Vehiculo::getVelocidad(){
   return Velocidad;
}

Vector2d Vehiculo::getPosicion(){
   return Posicion;
}

 std::string Vehiculo::to_string() {
   std::string v1 = Velocidad.to_string();
    std::string v2 = Posicion.to_string();
    std::string v3 = std::string("Velocidad") + std::string(v1) + std::string(", Posicion") + std::string(v2);
    return v3;
}

void Vehiculo::acelera(Vector2d a, float tiem){
   Velocidad.x = Velocidad.x + a.x * tiem;
   Velocidad.y = Velocidad.y + a.y * tiem;
   Posicion.x = Posicion.x + Velocidad.x * tiem;
   Posicion.y = Posicion.y + Velocidad.y* tiem;
}

void Vehiculo::avanzar(float tiem){
   Posicion.x = Posicion.x + Velocidad.x * tiem;
   Posicion.y = Posicion.y + Velocidad.y * tiem;
}
=======
#include "Vehiculo.hh"
#include "Vector2d.hh"

Vector2d::Vector2d(const float _x, const float _y) : x(_x), y(_y) {}
Vehiculo(t)
>>>>>>> 8752789e2b9bc53cf22f4f17d7398f41617b1bb7

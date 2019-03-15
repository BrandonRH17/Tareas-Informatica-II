#pragma once
#include <string>
#include "Vector2d.hh"
#include <string>

class Vehiculo{
  private:
  Vector2d Velocidad;
  Vector2d Posicion; 
  public: 
  Vehiculo();
  Vector2d getVelocidad();
  Vector2d getPosicion();
  std::string to_string();

  void acelera(Vector2d acelera, float tiem);
  void avanzar (float tiem);
};

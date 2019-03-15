<<<<<<< HEAD
#include <iostream>
#include "Vector2d.hh"
#include "Vehiculo.hh"
#include <string>

int main(){
    Vehiculo cambios;
    cambios.acelera(Vector2d(3,1), 5);
    cambios.avanzar(10);
    std::string valor = cambios.to_string();
    printf("%s\n", valor.c_str());
    cambios.acelera(Vector2d(-7.2, 8), 4);
    cambios.avanzar(9);
    std::string valor2 = cambios.to_string();
    printf("%s\n", valor2.c_str());

}
=======
#include "Vehiculo.hh"
#include "Vector2d.hh"

Vector2d::Vector2d(const float _x, const float _y) : x(_x), y(_y) {}
Vehiculo(t)
>>>>>>> 8752789e2b9bc53cf22f4f17d7398f41617b1bb7

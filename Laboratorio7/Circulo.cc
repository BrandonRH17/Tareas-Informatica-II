#include "Figura.hh"
#include "Circulo.hh"
#include "Vector2d.hh"
#include <string>


Circulo::Circulo (Vector2d c, float r) : centro(c), r(r){}

double Circulo::area() const{
    double a;
    a = pi * r * r;
    return a;
}

void Circulo::escalar(const double escala){
        r = r + escala;
    }

void Circulo::mover(const Vector2d lugar){
        centro = lugar;
    }

bool Circulo::estaAdentro(const Vector2d posicion) const{
        float pos;
        pos = sqrt((centro.x - posicion.x) + (centro.y - posicion.y));

        if (pos <= r){
            return true;
        }else{
            return false;
        }
    }

std::string Circulo::to_string(){
        std::string vector;
        std::string radio= std::to_string(r);
        vector = std::string("c(") + std::string(centro.to_string()) + std::string(", ") + std::string(radio) + std::string(")");
        return vector;
    }

int main(){

}
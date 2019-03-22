#include "Figura.hh"
#include "Vector2d.hh"
#include "Rectangulo.hh"
#include <string>

Rectangulo::Rectangulo (Vector2d e, double l, double a) : esquina(e), largo(l), ancho(a) {}

double Rectangulo::area() const{
    double at;
    at = ancho * largo;
    return at;
}
    
void Rectangulo::escalar(const double escala){
    	double vec;
        vec = (ancho * (largo + escala)) / largo;
        largo = largo + escala;
        ancho = vec;
    }
        
void Rectangulo::mover (const Vector2d lugar){
        esquina = lugar;
    }

bool Rectangulo::estaAdentro(const Vector2d posicion) const{
        double distancia = esquina.x + largo;
		double alt = esquina.y + ancho;
		
        if (posicion.x >= esquina.x && posicion.x <= distancia){
            if (posicion.y >= esquina.y && posicion.y <= alt){
            	return true;
        	}else{
        		return false;}
        }else{
        	return false;
    	}
    }

std::string Rectangulo::to_string(){
        std::string respuesta;
        std::string la = std::to_string(largo);
        std::string an = std::to_string(ancho);
        respuesta = std::string("r(") + std::string(esquina.to_string()) + std::string(", ") + std::string(la) + std::string(", ") + std::string(an) + std::string(")");
        return respuesta;
    }


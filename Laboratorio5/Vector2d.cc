#include "Vector2d.hh"
#include <string>


Vector2d::Vector2d( const  float _x, const  float _y) : x( _x), y( _y) {}

std::string Vector2d::to_string(){
    
    std::string  corde1= std::to_string(x);
    std::string corde2 = std::to_string(y);
    std::string corde3 = std::string("(") + std::string(corde1) + std::string(" ,") + std::string(corde2)+ std::string(")") ;
    return corde3;
}

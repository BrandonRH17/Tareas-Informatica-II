#include "Vector2d.hh"
#include <string>


Vector2d::Vector2d( const  float _x, const  float _y) : x( _x), y( _y) {}

std::string Vector2d::to_string(){
    
    std::string val1 = std::to_string(x);
    std::string val2 = std::to_string(y);
    std::string val3 = std::string("{") + std::string(val1) + std::string(" ,") + std::string(val2)+ std::string("}") ;
    return val3;
}

float Vector2d::getX(){
    return x;
}

float Vector2d::getY(){
    return y;
}

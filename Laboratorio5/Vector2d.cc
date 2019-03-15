<<<<<<< HEAD
#include "Vector2d.hh"
#include <string>


Vector2d::Vector2d( const  float _x, const  float _y) : x( _x), y( _y) {}

std::string Vector2d::to_string(){
    
    std::string  corde1= std::to_string(x);
    std::string corde2 = std::to_string(y);
    std::string corde3 = std::string("(") + std::string(corde1) + std::string(" ,") + std::string(corde2)+ std::string(")") ;
    return corde3;
}
=======
#include "Vector2d.hh"
#include <string>
#include <sstream>
int main(){
    
    std::stringstream Vector2d;
    Vector2d<< "{x:"<<2<< ",y:"<< 2.4<<"}";
    std::string s = Vector2d.str ();
    printf(s.c_str());
    
}
Vector2d::Vector2d(const float _x, const float _y) : x(_x), y(_y) {}
>>>>>>> 8752789e2b9bc53cf22f4f17d7398f41617b1bb7

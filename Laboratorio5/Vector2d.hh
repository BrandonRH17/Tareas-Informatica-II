#pragma once
#include <string>


class Vector2d{

    public:
    Vector2d( const float x,  const float y);
    Vector2d operator+(const Vector2d& otro) const;
    float getX() ;
    float getY() ;
    std::string to_string();
    float x;
    float y;
};
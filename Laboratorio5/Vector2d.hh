#pragma once
#include <string>


class Vector2d{

    Vector2d(float _x, float _y) : x(_x), y(_y) {}

    public:
    Vector2d operator*(float valor) const{
        return {x * valor, y * valor};
    };

    float getX() const;
    float getY() const;

    const std::string to_string() const;

    void To_string();
    void acelerar();
    void avanzar();
    

    float x;
    float y;

};
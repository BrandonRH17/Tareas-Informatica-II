<<<<<<< HEAD
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
=======
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

>>>>>>> 8752789e2b9bc53cf22f4f17d7398f41617b1bb7
};
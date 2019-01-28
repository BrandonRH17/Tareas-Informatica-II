#include <iostream>

int main(){
    // Int porque el numero de empleados solo puede ser exacto. 
    int empleados = 5;
    //Float porque es un numero con decimal
    float sueldo = 110.50;
    //Float porque el resultado será decimal
    float total = sueldo * empleados;
    float tasa = 0.1;
    //No se utiliza const porque el valor cambiará en el futuro. 
    float impuesto = total * tasa;

    std::printf("%f", total);


    std::printf("%f", impuesto);

    empleados++;
    empleados++;
    empleados++;

    total = sueldo * empleados;
    
 
    impuesto = total * tasa;

std::printf("%f", total);


std::printf("%f", impuesto);


    


}
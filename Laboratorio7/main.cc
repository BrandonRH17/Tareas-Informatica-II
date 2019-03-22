#include "Rectangulo.hh"
#include "Vector2d.hh"
#include "Circulo.hh"
#include "Figura.hh"
using namespace std;


const void abarcar(Figuras& figura, Vector2d[] puntos, int cantidad);
int main(){
    char x;
    float y;
    float z;
    float radio;
    float ancho;
    float largo; 
 printf("Ingrese la figura o vector que quiere averiguar \n");
         cin >> x; 
        if (x=='v'){
            printf("Ingrese dos numeros para las coordenadas de los vectores \n");
        cin >> y; 
        cin >> z;
        }
        else if (x=='c'){
            printf("Ingrese dos numeros correspondiendo al vector del centro del circulo \n");
            cin >> y;
            cin >> z; 
            printf("Ingrese el radio del circulo \n");
            cin >> radio;
        }
        else if (x=='r'){
            printf("Ingrese dos numeros correspondiendo al vector de la esquina inferior del rectangulo \n");
            cin >> y;
            cin >> z; 
            printf("Ingrese un numero determinando el ancho del rectangulo \n");
            cin >> ancho;
            printf("Ingrese un numero determinando el largo del rectangulo \n");
            cin >> largo;
        }
}
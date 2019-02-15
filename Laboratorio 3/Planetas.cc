
#include<iostream>
using namespace std;

int main ()
{
    char x;
    int q; 
    float gravedad;
    float resistencia;
    float vo;
    float vel;
    float dist; 
    float fur;
    float fatm; 
    float a; 
    float tiempo=0;
    int retornar = 1; 
    while (retornar == 1){
        printf("Ingrese el planeta deseado \n");
         cin >> x; 
        if (x=='t' || x=='v'|| x=='l'|| x=='c')
        {      
            printf("Introduzca el tiempo de caida libre \n");
            cin >> q; 
            if (q > 0)
            {
                switch (x)
                {
                    case 't':
                        gravedad = 9.8; 
                        resistencia = 0.0023;
                        break;
                    case 'v':
                        gravedad = 8.87; 
                        resistencia = 0.0023;
                        break;
                    case 'l':
                        gravedad = 1.62; 
                        resistencia = 0;
                        break;
                    case 'c':
                        gravedad = 1.23; 
                        resistencia = 0;
                        break;   
                }
                            printf("La gravedad es %f", gravedad);
                            printf("La resistencia es %f \n", resistencia);
                        
                            while(tiempo <= q)
                            {
                                fatm = resistencia * (pow(vo,2)); 
                                fur = gravedad - fatm;
                                a = fur;
                                vel = vel + (a *(0.01));
                                dist = dist + (vel *(0.01));
                                vo = vel; 
                                tiempo += 0.01;
                            }
                            printf("La distancia es %f", dist);
                            printf("La velocidad es %f", vel);
    }
    else {
        printf("Presione s para cerra, o cuelquier otra letra para retornar");
        char cerrar; 
        cin >> cerrar;
        if (cerrar != 's'){
            retornar = 1;
        }
        else {
            retornar = 0;
        }
    }
    }
}} 
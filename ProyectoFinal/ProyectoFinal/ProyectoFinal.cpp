#include "pch.h"
#include <iostream>
#include <windows.h>
#include <MMSystem.h>
#pragma comment(lib,"Winmm.lib")
#include <conio.h>
#include "pch.h"

#define FIL 22 
#define COL 22
#define Izquierda 75
#define Derecha 77
#define Arriba 72
#define Abajo 80
#define Nivel3 110 //tecla b
#define Nivel4 98//tecla n
#define Esc 27
#define Iniciar 105
using namespace System;
using namespace std;


class Mapa {
public:
	void menu();
	void copiar_nivel1();
	void copiar_nivel2();
	void copiar_nivel3();
	void copiar_nivel4();
	void imprimir_mapa();
	void ubicacion(int x, int y);
	void Caja(int x, int y, char dir);
	void jugar(int x, int y);
private:
	int nivel = 1;
	int mapa[FIL][COL];
	int Contador = 0;
};


void Mapa::ubicacion(int x, int y) {
	Console::SetCursorPosition(x, y); //posicion del muÃ±eco en x yS
}

void Mapa::Caja(int x, int y, char dir) {
	if (dir == 'r' && mapa[y][x + 1] != 1)
	{
		mapa[y][x] = 0;
		if (mapa[y][x + 1] == 3)
		{
			mapa[y][x + 1] = 2;
			Contador++;
		}
		else
		{
			mapa[y][x + 1] = 2;
		}
		ubicacion(x + 1, y);//posicion de la caja en x yS
		Console::ForegroundColor = ConsoleColor::Yellow;
		cout << (char)254;
	}
	if (dir == 'l' && mapa[y][x - 1] != 1)
	{
		mapa[y][x] = 0;
		if (mapa[y][x - 1] == 3)
		{
			mapa[y][x - 1] = 2;
			Contador++;
		}
		else
		{
			mapa[y][x - 1] = 2;
		}
		ubicacion(x - 1, y);//posicion de la caja en x yS
		Console::ForegroundColor = ConsoleColor::Yellow;
		cout << (char)254;
	}
	if (dir == 'u' && mapa[y - 1][x] != 1)
	{
		mapa[y][x] = 0;
		if (mapa[y - 1][x] == 3)
		{
			mapa[y - 1][x] = 2;
			Contador++;
		}
		else
		{
			mapa[y - 1][x] = 2;
		}
		ubicacion(x, y - 1);//posicion de la caja en x yS
		Console::ForegroundColor = ConsoleColor::Yellow;
		cout << (char)254;
	}
	if (dir == 'd' && mapa[y + 1][x] != 1)
	{
		mapa[y][x] = 0;
		if (mapa[y + 1][x] == 3)
		{
			mapa[y + 1][x] = 2;
			Contador++;
		}
		else
		{
			mapa[y + 1][x] = 2;
		}
		ubicacion(x, y + 1);//posicion de la caja en x yS
		Console::ForegroundColor = ConsoleColor::Yellow;
		cout << (char)254;
	}
}

void Mapa::menu() {
	int menu1[FIL][COL] = {
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,1,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,1,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,1,1,0,1,1,1,0,1,1,1,0,1,0,1,1,1,0,1,1,1,0},
		{0,1,0,0,1,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,1,0},
		{0,1,0,0,1,1,1,0,1,1,0,0,1,0,0,1,0,0,1,1,1,0},
		{0,1,1,0,1,0,1,0,1,1,0,0,1,0,0,1,0,0,1,0,1,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,1,1,0,1,1,0,1,0,0,0,0,1,1,1,0,0,0,0},
		{0,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,0,0},
		{0,0,0,0,1,1,0,1,1,0,1,0,0,1,0,0,1,0,0,0,0,0},
		{0,0,0,0,1,0,0,1,0,0,1,0,0,1,0,1,0,0,0,0,0,0},
		{0,0,0,0,1,0,0,1,1,0,1,1,0,1,0,1,1,1,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},

	};
	for (int f = 0; f < FIL; f++) {
		for (int c = 0; c < COL; c++) {
			mapa[f][c] = menu1[f][c];
		}
	}
	nivel = 1;

}

void Mapa::copiar_nivel1() {
	int mapa1[FIL][COL] = {
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,1,3,1,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,0,0,0,0,0},
		{0,0,0,0,0,0,0,1,1,1,2,0,2,3,1,0,0,0,0,0},
		{0,0,0,0,0,0,0,1,3,0,2,4,1,1,1,0,0,0,0,0},
		{0,0,0,0,0,0,0,1,1,1,1,2,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,1,3,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	};

	//copiar el contenido de mapa en mapa1
	for (int f = 0; f < FIL; f++) {
		for (int c = 0; c < COL; c++) {
			mapa[f][c] = mapa1[f][c];
		}
	}
	nivel = 2;
}
void Mapa::copiar_nivel2() {
	int mapa2[FIL][COL] = {
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,1,4,0,0,1,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,1,0,2,2,1,0,0,1,1,1,0,0,0,0},
		{0,0,0,0,0,0,1,0,2,0,1,0,0,1,0,1,0,0,0,0},
		{0,0,0,0,0,0,1,1,1,0,1,1,1,1,0,1,0,0,0,0},
		{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0},
		{0,0,0,0,0,0,0,1,3,0,0,1,1,0,0,1,0,0,0,0},
		{0,0,0,0,0,0,0,1,3,0,0,1,1,1,1,1,0,0,0,0},
		{0,0,0,0,0,0,0,1,3,0,0,1,1,1,1,1,0,0,0,0},
		{0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},

	};

	//copiar el contenido de mapa en mapa1
	for (int f = 0; f < FIL; f++) {
		for (int c = 0; c < COL; c++) {
			mapa[f][c] = mapa2[f][c];
		}
	}
	nivel = 3;

}
void Mapa::copiar_nivel3() {
	int mapa3[FIL][COL] = {
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,1,3,0,0,0,3,1,1,1,0,0,0,0,},
		{0,0,0,0,0,0,1,1,2,1,1,1,0,0,0,1,0,0,0,0,},
		{0,0,0,0,0,0,1,3,4,0,2,0,0,2,0,1,0,0,0,0,},
		{0,0,0,0,0,0,1,0,0,0,1,0,2,0,1,1,0,0,0,0,},
		{0,0,0,0,0,0,1,1,0,0,1,0,0,3,1,0,0,0,0,0,},
		{0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},

	};

	//copiar el contenido de mapa en mapa1
	for (int f = 0; f < FIL; f++) {
		for (int c = 0; c < COL; c++) {
			mapa[f][c] = mapa3[f][c];
		}
	}
	nivel = 4;

}
void Mapa::copiar_nivel4() {
	int mapa4[FIL][COL] = {
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,1,4,2,0,0,1,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,1,1,1,0,1,0,1,1,0,0,0,0,0,},
		{0,0,0,0,0,0,0,1,0,1,0,1,0,0,1,0,0,0,0,0,},
		{0,0,0,0,0,0,0,1,3,2,0,0,1,0,1,0,0,0,0,0,},
		{0,0,0,0,0,0,0,1,3,0,0,0,2,3,1,0,0,0,0,0,},
		{0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},

	};

	//copiar el contenido de mapa en mapa1
	for (int f = 0; f < FIL; f++) {
		for (int c = 0; c < COL; c++) {
			mapa[f][c] = mapa4[f][c];
		}
	}

}

void Mapa::imprimir_mapa() {
	for (int fil = 0; fil < FIL; fil++) {
		for (int col = 0; col < COL; col++) {
			Console::SetCursorPosition(col, fil);
			if (mapa[fil][col] == 0) {
				Console::ForegroundColor = ConsoleColor::Black;
			}
			if (mapa[fil][col] == 1) {
				Console::ForegroundColor = ConsoleColor::Gray;
				cout << (char)219;
			}
			if (mapa[fil][col] == 2) {
				Console::ForegroundColor = ConsoleColor::Yellow;
				cout << (char)254;
			}
			if (mapa[fil][col] == 3) {
				Console::ForegroundColor = ConsoleColor::Blue;
				cout << (char)177;
			}
			if (mapa[fil][col] == 4) {
				Console::ForegroundColor = ConsoleColor::White;
				cout << (char)254;
			}
			if (mapa[fil][col] == 5) {
				Console::ForegroundColor = ConsoleColor::White;
				cout << "Preciona\n i para Iniciar\n \n ESC para Salir";
			}
		}
	}
}

void Mapa::jugar(int x, int y) {
	int  v = 4;

	while (1) {
		if (_kbhit()) {// inditificacion si una tecla se ha apachado
			char tecla = _getch();
			//borra caracter
			ubicacion(x, y); cout << " ";
			switch (tecla) {
			case Derecha:
				if (tecla == Derecha && mapa[y][x + 1] != 1) {
					if (mapa[y][x + 1] == 2 && mapa[y][x + 2] != 1)
					{
						Caja(x + 1, y, 'r');//llama a moveCaja con la posicion de la caja :v
						x++;
					}
					else if (mapa[y][x + 1] == 2 && mapa[y][x + 2] == 1)//evita borrar la caja al haber pared del otro lado
					{

					}
					else
					{
						x++;
					}
				}
				break;
			case Izquierda:
				if (tecla == Izquierda && mapa[y][x - 1] != 1) {
					if (mapa[y][x - 1] == 2 && mapa[y][x - 2] != 1)
					{
						Caja(x - 1, y, 'l');
						x--;
					}
					else if (mapa[y][x - 1] == 2 && mapa[y][x - 2] == 1)
					{

					}
					else
					{
						x--;
					}
				}
				break;
			case Arriba:
				if (tecla == Arriba && mapa[y - 1][x] != 1) {
					if (mapa[y - 1][x] == 2 && mapa[y - 2][x] != 1)
					{
						Caja(x, y - 1, 'u');
						y--;
					}
					else if (mapa[y - 1][x] == 2 && mapa[y - 2][x] == 1)
					{

					}
					else
					{
						y--;
					}
				}
				break;
			case Abajo:
				if (tecla == Abajo && mapa[y + 1][x] != 1) {
					if (mapa[y + 1][x] == 2 && mapa[y + 2][x] != 1)
					{
						Caja(x, y + 1, 'd');
						y++;
					}
					else if (mapa[y + 1][x] == 2 && mapa[y + 2][x] == 1)
					{

					}
					else
					{
						y++;
					}
				}
				break;
			case Iniciar:
				if (tecla == Iniciar) {
					Console::Clear();
					copiar_nivel1();
					imprimir_mapa();
					x = 11, y = 10;
					Console::ForegroundColor = ConsoleColor::Green;
					ubicacion(x, y);
					cout << (char)2;
				}
				break;
			case Nivel3:
				if (tecla == Nivel3) {
					Console::Clear();
					copiar_nivel3();
					imprimir_mapa();
					x = 8; y = 8;
				}
				break;
			case Nivel4:
				if (tecla == Nivel4) {
					Console::Clear();
					copiar_nivel4();
					imprimir_mapa();
					x = 9; y = 7;
				}
				break;
			case Esc:
				if (tecla == Esc) {
					Console::Clear();
					exit(EXIT_SUCCESS);
				}
				break;

			}
			ubicacion(x, y);
			Console::ForegroundColor = ConsoleColor::Green;
			cout << (char)2;
		}
		if (Contador == v)
		{
			if (nivel == 1) {
				Console::Clear();
				copiar_nivel1();
				imprimir_mapa();
				x = 11, y = 10;
				Console::ForegroundColor = ConsoleColor::Green;
				ubicacion(x, y);
				cout << (char)2;
				Contador = 0;
				v = 4;
			}
			else if (nivel == 2) {
				Console::Clear();
				copiar_nivel2();
				imprimir_mapa();
				x = 7, y = 6;
				Console::ForegroundColor = ConsoleColor::Green;
				ubicacion(x, y);
				cout << (char)2;
				Contador = 0;
				v = 3;
			}
			else if (nivel == 3)
			{
				Console::Clear();
				copiar_nivel3();
				imprimir_mapa();
				x = 8; y = 8;
				Console::ForegroundColor = ConsoleColor::Green;
				ubicacion(x, y);
				cout << (char)2;
				Contador = 0;
				v = 4;

			}
			else if (nivel == 4) {
				Console::Clear();
				copiar_nivel4();
				imprimir_mapa();
				x = 9; y = 7;
				Console::ForegroundColor = ConsoleColor::Green;
				ubicacion(x, y);
				cout << (char)2;
				Contador = 0;
				v = 3;
			}
		}
	}
}


int main() {
	PlaySound(L"C:\\Users\\Evelyn\\Desktop\\Tareas-Informatica-II\\ProyectoFinal\\prueba.wav", NULL, SND_FILENAME | SND_ASYNC);
	Mapa cop;
	Console::SetWindowSize(COL + 1, FIL + 1); // definir el tamaÃ±o de la consola 
	Console::CursorVisible = false;// permite que no se mueva el cursor en la pantalla 
	char tecla;
	int x = 13, y = 11; // posicion del caracter
	Console::Clear();
	cop.menu();
	cop.imprimir_mapa();
	Console::ForegroundColor = ConsoleColor::Green;
	cop.ubicacion(x, y); cout << (char)2;
	cop.jugar(x, y);



	_getch();
	return 0;
}
#include "Header.h"

//функция установки цветов заливки и текста в консоле принимает два аргумента, Bg – цвет
//фона от 0 до 15 и Tex -> цвет текста от 0 до 15
void SetColorBgTex(int Bg = 0, int Tex = 15)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	Bg = Bg << 4 | Tex;
	SetConsoleTextAttribute(hConsole, Bg);
}

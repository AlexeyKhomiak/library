#pragma once
#include "Header.h"

void main()
{
	SetColorBgTex(1, 14);
	
	system("mode con cols=125 lines=45");
	setlocale(LC_ALL, "Russian");
	MENU_LIBRARY();
	
	cout << endl << endl;
	system("pause");
}
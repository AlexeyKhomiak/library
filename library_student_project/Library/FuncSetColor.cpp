#include "Header.h"

//������� ��������� ������ ������� � ������ � ������� ��������� ��� ���������, Bg � ����
//���� �� 0 �� 15 � Tex -> ���� ������ �� 0 �� 15
void SetColorBgTex(int Bg = 0, int Tex = 15)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	Bg = Bg << 4 | Tex;
	SetConsoleTextAttribute(hConsole, Bg);
}

#include "Header.h"

void MENU_LIBRARY() //������� ���� "����������"
{
	system("cls");
	SetColorBgTex(1, 14);
	string menu;
	do
	{
		cout << "\t\t\t����������\t\t\t\n\n";

		cout << "\t��� ����� � ���� ������� ������� (��������� �������)\n\n";
		
		cout << "-���� \"�����\":\t";
		SetColorBgTex(1, 10);
		cout << "book\n\n";
		SetColorBgTex(1, 14);
		cout << "\t(����������, ��������, ��������������, �����, ����������, ������ � ������� ����,\n"
			<< "\t������� ����, ������� � �� ������������ � ���� �����)\n\n";
		
		cout << "-���� \"��������\":";
		SetColorBgTex(1, 10);
		cout << "reader\n\n";
		SetColorBgTex(1, 14);
		cout << "\t(����������, ��������, ��������������, �����, ����������,\n"
			<< "\t�������� ��������, ��������-��������)\n\n";
		
		cout << "-�����:\t\t";
		SetColorBgTex(1, 10);
		cout << "exit\n\n";
		SetColorBgTex(1, 14);
		
		cout << "������� �������:\n";
		SetColorBgTex(1, 10);
		getline(cin, menu);
		system("cls");
		SetColorBgTex(1, 14);
		if (menu == "book")
		{
			MENU_BOOK();
			system("cls");
		}
		if (menu == "reader")
		{
			MENU_READER(); //������� ���� "��������"
			system("cls");
		}
	} while (menu != "exit");

}

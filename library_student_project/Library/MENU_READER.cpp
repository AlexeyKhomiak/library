#include "Header.h"

void MENU_READER() //������� ���� "��������"
{
	system("cls");
	SetColorBgTex(1, 14);
	string menu;
	do
	{
		cout << "\t\t���� ��������\t\n\n";
		
		cout << "-�������� ���������:\t";
		SetColorBgTex(1, 10);
		cout << "list\n";
		SetColorBgTex(1, 14);
		
		cout << "-�������� ��������:\t";
		SetColorBgTex(1, 10);
		cout << "add\n";
		SetColorBgTex(1, 14);
		
		cout << "-������� ��������:\t";
		SetColorBgTex(1, 10);
		cout << "delete\n";
		SetColorBgTex(1, 14);
		
		cout << "-������������� ��������:";
		SetColorBgTex(1, 10);
		cout << "edit\n";
		SetColorBgTex(1, 14);
		
		cout << "-�����:\t\t\t";
		SetColorBgTex(1, 10);
		cout << "find\n";
		SetColorBgTex(1, 14);
		
		cout << "-����������:\t\t";
		SetColorBgTex(1, 10);
		cout << "sort\n";
		SetColorBgTex(1, 14);
		
		cout << "-�������� ��������:\t";
		SetColorBgTex(1, 10);
		cout << "active\n";
		SetColorBgTex(1, 14);

		cout << "\n-������� ����:\t\t";
		SetColorBgTex(1, 10);
		cout << "menu\n\n";
		SetColorBgTex(1, 14);
		
		cout << "������� �������:\n";
		SetColorBgTex(1, 10);
		getline(cin, menu);
		system("cls");
		SetColorBgTex(1, 14);

		if (menu == "list")
		{
			system("cls");
			LIST_READER();	//������� ��������� ���� ����
			system("pause");
			system("cls");
		}
		if (menu == "add")
		{
			system("cls");
			ADD_READER(); //������� ���������� ��������
			system("cls");
		}
		if (menu == "delete")
		{
			system("cls");
			DELETE_READER();	//������� �������� ��������
			system("cls");
		}
		if (menu == "edit")
		{
			system("cls");
			EDIT_READER();	//������� �������������� ��������
			system("cls");
		}
		if (menu == "find")
		{
			system("cls");
			FIND_READER();	//������� ����� ��������
			system("pause");
			system("cls");
		}
		if (menu == "sort")
		{
			system("cls");
			SORT_READER();	//���������� �� ��������
			system("cls");
		}
		if (menu == "active")
		{
			system("cls");
			ACTIVE_READER();	//������� �������� ��������
			system("pause");
			system("cls");
		}
		
	} while (menu != "menu");

}

#include "Header.h"
void MENU_BOOK() //������� ���� "�����"
{
	system("cls");
	SetColorBgTex(1, 14);
	string menu;
	do
	{
		cout << "\t\t���� �����\t\t\n\n";
		
		cout << "-�������� ����:\t\t";
		SetColorBgTex(1, 10);
		cout << "list\n";
		SetColorBgTex(1, 14);
		
		cout << "-�������� �����:\t";
		SetColorBgTex(1, 10);
		cout << "add\n";
		SetColorBgTex(1, 14);
		
		cout << "-������� �����:\t\t";
		SetColorBgTex(1, 10);
		cout << "delete\n";
		SetColorBgTex(1, 14);
		
		cout << "-������������� �����:\t";
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
		
		cout << "-���������� �����:\t";
		SetColorBgTex(1, 10);
		cout << "popular\n";
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
			LIST_BOOK();//������� ��������� ���� ����
			system("pause");
			system("cls");
		}
		if (menu == "add")
		{
			system("cls");
			ADD_BOOK();		//������� ���������� ����
			system("cls");
		}
		if (menu == "delete")
		{
			system("cls");
			DELETE_BOOK();	//������� �������� ����
			system("cls");
		}
		if (menu == "edit")
		{
			system("cls");
			EDIT_BOOK();	//������� �������������� ����
			system("cls");
		}
		if (menu == "find")
		{
			system("cls");
			FIND_BOOK();	//������� ������ ����
			system("cls");
		}
		if (menu == "sort")
		{
			system("cls");
			SORT_BOOK();	//������� ���������� ����
			system("cls");
		}
		if (menu == "popular")
		{
			system("cls");
			POPULAR_BOOK();	//������� ���������� ����
			system("pause");
			system("cls");
		}

	} while (menu != "menu");

}

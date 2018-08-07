#include "Header.h"

void MENU_READER() //функция меню "Читатель"
{
	system("cls");
	SetColorBgTex(1, 14);
	string menu;
	do
	{
		cout << "\t\tМЕНЮ ЧИТАТЕЛЬ\t\n\n";
		
		cout << "-ПЕРЕЧЕНЬ ЧИТАТЕЛЕЙ:\t";
		SetColorBgTex(1, 10);
		cout << "list\n";
		SetColorBgTex(1, 14);
		
		cout << "-ДОБАВИТЬ ЧИТАТЕЛЯ:\t";
		SetColorBgTex(1, 10);
		cout << "add\n";
		SetColorBgTex(1, 14);
		
		cout << "-УДАЛИТЬ ЧИТАТЕЛЯ:\t";
		SetColorBgTex(1, 10);
		cout << "delete\n";
		SetColorBgTex(1, 14);
		
		cout << "-РЕДАКТИРОВАТЬ ЧИТАТЕЛЯ:";
		SetColorBgTex(1, 10);
		cout << "edit\n";
		SetColorBgTex(1, 14);
		
		cout << "-ПОИСК:\t\t\t";
		SetColorBgTex(1, 10);
		cout << "find\n";
		SetColorBgTex(1, 14);
		
		cout << "-СОРТИРОВКА:\t\t";
		SetColorBgTex(1, 10);
		cout << "sort\n";
		SetColorBgTex(1, 14);
		
		cout << "-АКТИВНЫЕ ЧИТАТЕЛИ:\t";
		SetColorBgTex(1, 10);
		cout << "active\n";
		SetColorBgTex(1, 14);

		cout << "\n-ГЛАВНОЕ МЕНЮ:\t\t";
		SetColorBgTex(1, 10);
		cout << "menu\n\n";
		SetColorBgTex(1, 14);
		
		cout << "Введите команду:\n";
		SetColorBgTex(1, 10);
		getline(cin, menu);
		system("cls");
		SetColorBgTex(1, 14);

		if (menu == "list")
		{
			system("cls");
			LIST_READER();	//функция просмотра всех книг
			system("pause");
			system("cls");
		}
		if (menu == "add")
		{
			system("cls");
			ADD_READER(); //функция добавления читателя
			system("cls");
		}
		if (menu == "delete")
		{
			system("cls");
			DELETE_READER();	//функция удаления Читателя
			system("cls");
		}
		if (menu == "edit")
		{
			system("cls");
			EDIT_READER();	//функция редактирования Читателя
			system("cls");
		}
		if (menu == "find")
		{
			system("cls");
			FIND_READER();	//функция поиск читателя
			system("pause");
			system("cls");
		}
		if (menu == "sort")
		{
			system("cls");
			SORT_READER();	//сортировка по читателю
			system("cls");
		}
		if (menu == "active")
		{
			system("cls");
			ACTIVE_READER();	//Функция Активные читатели
			system("pause");
			system("cls");
		}
		
	} while (menu != "menu");

}

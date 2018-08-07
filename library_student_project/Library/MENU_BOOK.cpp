#include "Header.h"
void MENU_BOOK() //функция меню "книга"
{
	system("cls");
	SetColorBgTex(1, 14);
	string menu;
	do
	{
		cout << "\t\tМЕНЮ КНИГА\t\t\n\n";
		
		cout << "-ПЕРЕЧЕНЬ КНИГ:\t\t";
		SetColorBgTex(1, 10);
		cout << "list\n";
		SetColorBgTex(1, 14);
		
		cout << "-ДОБАВИТЬ КНИГУ:\t";
		SetColorBgTex(1, 10);
		cout << "add\n";
		SetColorBgTex(1, 14);
		
		cout << "-УДАЛИТЬ КНИГУ:\t\t";
		SetColorBgTex(1, 10);
		cout << "delete\n";
		SetColorBgTex(1, 14);
		
		cout << "-РЕДАКТИРОВАТЬ КНИГУ:\t";
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
		
		cout << "-ПОПУЛЯРНЫЕ КНИГИ:\t";
		SetColorBgTex(1, 10);
		cout << "popular\n";
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
			LIST_BOOK();//функция просмотра всех книг
			system("pause");
			system("cls");
		}
		if (menu == "add")
		{
			system("cls");
			ADD_BOOK();		//функция добавления книг
			system("cls");
		}
		if (menu == "delete")
		{
			system("cls");
			DELETE_BOOK();	//функция удаления книг
			system("cls");
		}
		if (menu == "edit")
		{
			system("cls");
			EDIT_BOOK();	//функция редактирования книг
			system("cls");
		}
		if (menu == "find")
		{
			system("cls");
			FIND_BOOK();	//функция поиска книг
			system("cls");
		}
		if (menu == "sort")
		{
			system("cls");
			SORT_BOOK();	//функция сортировки книг
			system("cls");
		}
		if (menu == "popular")
		{
			system("cls");
			POPULAR_BOOK();	//функция сортировки книг
			system("pause");
			system("cls");
		}

	} while (menu != "menu");

}

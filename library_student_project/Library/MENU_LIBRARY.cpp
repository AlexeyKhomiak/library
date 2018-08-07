#include "Header.h"

void MENU_LIBRARY() //функция меню "библиотека"
{
	system("cls");
	SetColorBgTex(1, 14);
	string menu;
	do
	{
		cout << "\t\t\tБИБЛИОТЕКА\t\t\t\n\n";

		cout << "\tдля входа в меню введите команду (выделеную зеленым)\n\n";
		
		cout << "-МЕНЮ \"КНИГА\":\t";
		SetColorBgTex(1, 10);
		cout << "book\n\n";
		SetColorBgTex(1, 14);
		cout << "\t(добавление, удаление, редактирование, поиск, сортировка, выдача и возврат книг,\n"
			<< "\tрейтинг книг, выданые и не возвращенные в срок книги)\n\n";
		
		cout << "-МЕНЮ \"ЧИТАТЕЛЬ\":";
		SetColorBgTex(1, 10);
		cout << "reader\n\n";
		SetColorBgTex(1, 14);
		cout << "\t(добавление, удаление, редактирование, поиск, сортировка,\n"
			<< "\tактивные читатели, читатели-должники)\n\n";
		
		cout << "-ВЫХОД:\t\t";
		SetColorBgTex(1, 10);
		cout << "exit\n\n";
		SetColorBgTex(1, 14);
		
		cout << "Введите команду:\n";
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
			MENU_READER(); //функция меню "Читатель"
			system("cls");
		}
	} while (menu != "exit");

}

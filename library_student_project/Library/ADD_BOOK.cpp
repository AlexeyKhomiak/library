#include "Header.h"

void ADD_BOOK() //функция добавления книги
{
	FILE * file;
	file = fopen("D:\\books.txt", "at");
	Book * add_book = new Book[255];
	cout << "\tДОБАВЛЕНИЕ КНИГИ В БИБЛИОТЕКУ\t" << endl << endl;
	cout << "Внимание!!! Информацию нужно вводить на английском языке!\t" << endl;
	char *buf = new char[255];

	add_book[0].ID_Number_Book = COUNT_BOOK() + 1;
	cout << "ID номер книги:\n";
	SetColorBgTex(1, 10);
	cout << add_book[0].ID_Number_Book << endl;
	SetColorBgTex(1, 14);
	fputs(_itoa(add_book[0].ID_Number_Book, buf, 10), file);
	fputs(";", file);

	cout << "Введите название книги: " << endl;
	SetColorBgTex(1, 10);
	cin.getline(add_book[0].Name_Book, 255);
	SetColorBgTex(1, 14);
	if (strlen(add_book[0].Name_Book) == 0)			// если ничего не введено то записываем 0
		strcpy(add_book[0].Name_Book, "0");
	strcat(add_book[0].Name_Book, ";");
	fputs(add_book[0].Name_Book, file);

	cout << "Введите автора: " << endl;
	SetColorBgTex(1, 10);
	cin.getline(add_book[0].Author, 255);
	SetColorBgTex(1, 14);
	if (strlen(add_book[0].Author) == 0)			// если ничего не введено то записываем 0
		strcpy(add_book[0].Author, "0");
	strcat(add_book[0].Author, ";");
	fputs(add_book[0].Author, file);

	cout << "Введите год издания книги: " << endl;
	SetColorBgTex(1, 10);
	cin.getline(buf, 255);
	SetColorBgTex(1, 14);
	if (strlen(buf) == 0)			// если ничего не введено то записываем 0
	{
		strcpy(buf, "0");
		add_book[0].Date_public = 0;
	}
	else
		add_book[0].Date_public = atoi(buf);
	fputs(buf, file);
	fputs(";", file);

	cout << "Введите жанр: " << endl;
	SetColorBgTex(1, 10);
	cin.getline(add_book[0].Genre, 255);
	SetColorBgTex(1, 14);
	if (strlen(add_book[0].Genre) == 0)			// если ничего не введено то записываем 0
		strcpy(add_book[0].Genre, "0");
	strcat(add_book[0].Genre, ";");
	fputs(add_book[0].Genre, file);

	cout << "Введите стоимость книги: " << endl;
	SetColorBgTex(1, 10);
	cin.getline(buf, 255);
	SetColorBgTex(1, 14);
	if (strlen(buf) == 0)			// если ничего не введено то записываем 0
	{
		strcpy(buf, "0");
		add_book[0].Cost = 0;
	}
	else
		add_book[0].Cost = atoi(buf);
	fputs(buf, file);
	fputs(";", file);

	add_book[0].Rating = 0;// рейтинг новой книги в нашей библиотеке нулевой, пока ее кто то не возьмет почитать.
	fputs(_itoa(add_book[0].Rating, buf, 10), file);
	fputs(";", file);

	strcpy(add_book[0].Availability, "Available");// вносим признак, что новая книга в наличии  и доступна к выдаче.
	strcat(add_book[0].Availability, ";");
	fputs(add_book[0].Availability, file);

	add_book[0].Date_issue = 0;// вносим признак даты выдачи 0, т.к. книга новая и находится в библиотеке.
	fputs(_itoa(add_book[0].Date_issue, buf, 10), file);
	fputs(";\n", file);

	delete[]buf;
	delete[]add_book;
	fclose(file);

	cout << "\nКНИГА ДОБАВЛЕНА\n" << endl;
	LIST_BOOK();
	system("pause");

}

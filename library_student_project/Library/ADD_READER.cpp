#include "Header.h"

void ADD_READER() //функция добавления читателя
{
	FILE * file;
	file = fopen("D:\\readers.txt", "at");
	Reader * add_reader = new Reader[255];
	cout << "\tДОБАВЛЕНИЕ ЧИТАТЕЛЯ\t" << endl << endl;
	cout << "Внимание!!! Информацию нужно вводить на английском языке!\t" << endl;
	char *buf = new char[255];

	add_reader[0].ID_number_Reader = COUNT_READERS() + 1;
	cout << "ID номер читателя:\n";
	SetColorBgTex(1, 10);
	cout << add_reader[0].ID_number_Reader << endl;
	SetColorBgTex(1, 14);
	fputs(_itoa(add_reader[0].ID_number_Reader, buf, 10), file);
	fputs(";", file);

	cout << "Введите ФИО читателя(пример: Ivanov I.I.):" << endl;
	SetColorBgTex(1, 10);
	cin.getline(add_reader[0].Surname_Name_Middle_Name, 255);
	SetColorBgTex(1, 14);
	if (strlen(add_reader[0].Surname_Name_Middle_Name) == 0)			// если ничего не введено то записываем 0
		strcpy(add_reader[0].Surname_Name_Middle_Name, "0");
	strcat(add_reader[0].Surname_Name_Middle_Name, ";");
	fputs(add_reader[0].Surname_Name_Middle_Name, file);

	cout << "Введите Дату рождения(пример:25/04/1990): " << endl;
	SetColorBgTex(1, 10);
	cin.getline(add_reader[0].Date_Birth, 255);
	SetColorBgTex(1, 14);
	if (strlen(add_reader[0].Date_Birth) == 0)			// если ничего не введено то записываем 0
		strcpy(add_reader[0].Date_Birth, "0");
	strcat(add_reader[0].Date_Birth, ";");
	fputs(add_reader[0].Date_Birth, file);

	cout << "Введите Номер паспорта (пример:АА000000): " << endl;
	SetColorBgTex(1, 10);
	cin.getline(add_reader[0].Number_Passport, 255);
	SetColorBgTex(1, 14);
	if (strlen(add_reader[0].Number_Passport) == 0)			// если ничего не введено то записываем 0
		strcpy(add_reader[0].Number_Passport, "0");
	strcat(add_reader[0].Number_Passport, ";");
	fputs(add_reader[0].Number_Passport, file);

	add_reader[0].Count_Books_Read = 0;		// Количество прочитанных книг 0, т.к. читатель новый.
	fputs(_itoa(add_reader[0].Count_Books_Read, buf, 10), file);
	fputs(";", file);

	add_reader[0].Count_Books = 0;		// Количество книг на руках 0, т.к. читатель новый.
	fputs(_itoa(add_reader[0].Count_Books, buf, 10), file);
	fputs(";\n", file);

	delete[]buf;
	delete[]add_reader;
	fclose(file);

	cout << "\nЧИТАТЕЛЬ ДОБАВЛЕН.\n" << endl;
	LIST_READER();				//Функция просмотра всех читателей

	system("pause");
}

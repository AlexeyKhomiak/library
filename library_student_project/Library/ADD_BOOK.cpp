#include "Header.h"

void ADD_BOOK() //������� ���������� �����
{
	FILE * file;
	file = fopen("D:\\books.txt", "at");
	Book * add_book = new Book[255];
	cout << "\t���������� ����� � ����������\t" << endl << endl;
	cout << "��������!!! ���������� ����� ������� �� ���������� �����!\t" << endl;
	char *buf = new char[255];

	add_book[0].ID_Number_Book = COUNT_BOOK() + 1;
	cout << "ID ����� �����:\n";
	SetColorBgTex(1, 10);
	cout << add_book[0].ID_Number_Book << endl;
	SetColorBgTex(1, 14);
	fputs(_itoa(add_book[0].ID_Number_Book, buf, 10), file);
	fputs(";", file);

	cout << "������� �������� �����: " << endl;
	SetColorBgTex(1, 10);
	cin.getline(add_book[0].Name_Book, 255);
	SetColorBgTex(1, 14);
	if (strlen(add_book[0].Name_Book) == 0)			// ���� ������ �� ������� �� ���������� 0
		strcpy(add_book[0].Name_Book, "0");
	strcat(add_book[0].Name_Book, ";");
	fputs(add_book[0].Name_Book, file);

	cout << "������� ������: " << endl;
	SetColorBgTex(1, 10);
	cin.getline(add_book[0].Author, 255);
	SetColorBgTex(1, 14);
	if (strlen(add_book[0].Author) == 0)			// ���� ������ �� ������� �� ���������� 0
		strcpy(add_book[0].Author, "0");
	strcat(add_book[0].Author, ";");
	fputs(add_book[0].Author, file);

	cout << "������� ��� ������� �����: " << endl;
	SetColorBgTex(1, 10);
	cin.getline(buf, 255);
	SetColorBgTex(1, 14);
	if (strlen(buf) == 0)			// ���� ������ �� ������� �� ���������� 0
	{
		strcpy(buf, "0");
		add_book[0].Date_public = 0;
	}
	else
		add_book[0].Date_public = atoi(buf);
	fputs(buf, file);
	fputs(";", file);

	cout << "������� ����: " << endl;
	SetColorBgTex(1, 10);
	cin.getline(add_book[0].Genre, 255);
	SetColorBgTex(1, 14);
	if (strlen(add_book[0].Genre) == 0)			// ���� ������ �� ������� �� ���������� 0
		strcpy(add_book[0].Genre, "0");
	strcat(add_book[0].Genre, ";");
	fputs(add_book[0].Genre, file);

	cout << "������� ��������� �����: " << endl;
	SetColorBgTex(1, 10);
	cin.getline(buf, 255);
	SetColorBgTex(1, 14);
	if (strlen(buf) == 0)			// ���� ������ �� ������� �� ���������� 0
	{
		strcpy(buf, "0");
		add_book[0].Cost = 0;
	}
	else
		add_book[0].Cost = atoi(buf);
	fputs(buf, file);
	fputs(";", file);

	add_book[0].Rating = 0;// ������� ����� ����� � ����� ���������� �������, ���� �� ��� �� �� ������� ��������.
	fputs(_itoa(add_book[0].Rating, buf, 10), file);
	fputs(";", file);

	strcpy(add_book[0].Availability, "Available");// ������ �������, ��� ����� ����� � �������  � �������� � ������.
	strcat(add_book[0].Availability, ";");
	fputs(add_book[0].Availability, file);

	add_book[0].Date_issue = 0;// ������ ������� ���� ������ 0, �.�. ����� ����� � ��������� � ����������.
	fputs(_itoa(add_book[0].Date_issue, buf, 10), file);
	fputs(";\n", file);

	delete[]buf;
	delete[]add_book;
	fclose(file);

	cout << "\n����� ���������\n" << endl;
	LIST_BOOK();
	system("pause");

}

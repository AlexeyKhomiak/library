#include "Header.h"

void DELETE_BOOK() //������� �������� �����
{
	cout << "\t\t�������� �����\t\t\n\n";
	cout << "������� ID ����� ������� ����� �������:\n\n";
	LIST_BOOK();
	cout << "������� ID ����� ������� ����� �������:\n";
	int delete_number_string;
	cin >> delete_number_string;
	FILE * file;
	file = fopen("D:\\books.txt", "rt");
	int n = COUNT_BOOK();
	Book * delete_book = new Book[n];
	int i = 0;
	char *str = new char[255];
	while (fgets(str, 255, file)) //��������� �� ����� ��� ������
	{
		char *token = strtok(str, ";");
		delete_book[i].ID_Number_Book = atoi(token);
		token = strtok(NULL, ";");
		strcpy(delete_book[i].Name_Book, token);
		token = strtok(NULL, ";");
		strcpy(delete_book[i].Author, token);
		token = strtok(NULL, ";");
		delete_book[i].Date_public = atoi(token);
		token = strtok(NULL, ";");
		strcpy(delete_book[i].Genre, token);
		token = strtok(NULL, ";");
		delete_book[i].Cost = atoi(token);
		token = strtok(NULL, ";");
		delete_book[i].Rating = atoi(token);
		token = strtok(NULL, ";");
		strcpy(delete_book[i].Availability, token);
		token = strtok(NULL, ";");
		delete_book[i].Date_issue = atoi(token);
		token = strtok(NULL, ";");
		i++;
	}
	fclose(file);
	delete[]str;

	file = fopen("D:\\books.txt", "wt"); //���������� �� ������ � ���� ��� ������ ��� ��������� �����
	char *buf = new char[255];
	for (int i = 0; i < n; i++)
	{
		if (delete_book[i].ID_Number_Book == delete_number_string) //���������� ID ����� ����� � ��� ������� ����� �������,
																   //���� ���������, �� ���������� ��� � �� ���������� � ����
		{
			i++;
			if (i >= n)
				break;
		}
		fputs(_itoa(delete_book[i].ID_Number_Book, buf, 10), file);
		fputs(";", file);

		strcat(delete_book[i].Name_Book, ";");
		fputs(delete_book[i].Name_Book, file);

		strcat(delete_book[i].Author, ";");
		fputs(delete_book[i].Author, file);
		
		fputs(_itoa(delete_book[i].Date_public, buf, 10), file);
		fputs(";", file);

		strcat(delete_book[i].Genre, ";");
		fputs(delete_book[i].Genre, file);

		fputs(_itoa(delete_book[i].Cost, buf, 10), file);
		fputs(";", file);

		fputs(_itoa(delete_book[i].Rating, buf, 10), file);
		fputs(";", file);

		strcat(delete_book[i].Availability, ";");
		fputs(delete_book[i].Availability, file);

		fputs(_itoa(delete_book[i].Date_issue, buf, 10), file);
		fputs(";", file);
		fputs("\n", file);
	}

	system("cls");

	cout << "\n����� �������.\n\n";

	delete[]buf;
	fclose(file);
	delete[]delete_book;

	LIST_BOOK();
	system("pause");

}

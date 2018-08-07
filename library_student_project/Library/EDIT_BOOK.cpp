#include "Header.h"

void EDIT_BOOK()
{
	cout << "\t\t�������������� �����\t\t\n\n";
	cout << "������� ID �����, ������� ����� ���������������:\n\n";
	LIST_BOOK();
	cout << "������� ID �����, ������� ����� ���������������:\n";
	int edit_number_string;
	SetColorBgTex(1, 10);
	cin >> edit_number_string;
	cin.ignore();
	SetColorBgTex(1, 14);
	FILE * file;
	file = fopen("D:\\books.txt", "rt");
	int n = COUNT_BOOK();
	Book * edit_book = new Book[n];
	char *str = new char[255];
	int i = 0;
	while (fgets(str, 255, file)) //��������� �� ����� ��� ������
	{
		char *token = strtok(str, ";");
		edit_book[i].ID_Number_Book = atoi(token);
		token = strtok(NULL, ";");
		strcpy(edit_book[i].Name_Book, token);
		token = strtok(NULL, ";");
		strcpy(edit_book[i].Author, token);
		token = strtok(NULL, ";");
		edit_book[i].Date_public = atoi(token);
		token = strtok(NULL, ";");
		strcpy(edit_book[i].Genre, token);
		token = strtok(NULL, ";");
		edit_book[i].Cost = atoi(token);
		token = strtok(NULL, ";");
		edit_book[i].Rating = atoi(token);
		token = strtok(NULL, ";");
		strcpy(edit_book[i].Availability, token);
		token = strtok(NULL, ";");
		edit_book[i].Date_issue = atoi(token);
		token = strtok(NULL, ";");
		i++;
	}
	fclose(file);
	delete[]str;

	int edit = edit_number_string-1;
	string edit_str;
	char *edit_buffer = new char[255];
	do
	{
		system("cls");
		cout << "������ ��� ��������������:\n\n";
		cout << "ID\t\t" << "��������\t\t" << "  �����\t\t" << " ���\t" << " ����\t" << "�������\t" << "����\t" << "�������\t\n\n";
		printf("%d\t %25.25s\t %.10s\t %d\t %.6s\t %d\t %d\t %s\n\n", edit_book[edit].ID_Number_Book, edit_book[edit].Name_Book,
			edit_book[edit].Author, edit_book[edit].Date_public, edit_book[edit].Genre, edit_book[edit].Rating,
			edit_book[edit].Cost, edit_book[edit].Availability);
			
		cout << "������� ������� ��� ��������������:\n\n";

		cout << "-��������:\t";
		SetColorBgTex(1, 10);
		cout << "name\n";
		SetColorBgTex(1, 14);

		cout << "-�����:\t\t";
		SetColorBgTex(1, 10);
		cout << "author\n";
		SetColorBgTex(1, 14);
						
		cout << "-��� �������:\t";
		SetColorBgTex(1, 10);
		cout << "year\n";
		SetColorBgTex(1, 14);

		cout << "-����:\t\t";
		SetColorBgTex(1, 10);
		cout << "genre\n";
		SetColorBgTex(1, 14);

		cout << "-���������:\t";
		SetColorBgTex(1, 10);
		cout << "cost\n\n";
		SetColorBgTex(1, 14);
		
		cout << "-����� � ����:\t";
		SetColorBgTex(1, 10);
		cout << "menu\n\n";
		SetColorBgTex(1, 14);

		cout << "������� �������:\n";
		SetColorBgTex(1, 10);
		getline(cin, edit_str);
		cout << endl;
		SetColorBgTex(1, 14);
		if (edit_str == "name")
		{
			cout << "������� �������� �����:\n";
			cout << "��������!!! ���������� ����� ������� �� ���������� �����!\t" << endl;
			SetColorBgTex(1, 10);
			cin.getline(edit_book[edit].Name_Book, 255);
			cout << endl;
			SetColorBgTex(1, 14);
			if (strlen(edit_book[edit].Name_Book) == 0)			// ���� ������ �� ������� �� ���������� 0
				strcpy(edit_book[edit].Name_Book, "0");
		}
		if (edit_str == "author")
		{
			cout << "������� ������ �����:\n\n";
			cout << "��������!!! ���������� ����� ������� �� ���������� �����!\t" << endl;
			SetColorBgTex(1, 10);
			cin.getline(edit_book[edit].Author, 255);
			cout << endl;
			SetColorBgTex(1, 14);
			if (strlen(edit_book[edit].Author) == 0)			// ���� ������ �� ������� �� ���������� 0
				strcpy(edit_book[edit].Author, "0");
		}
		if (edit_str == "year")
		{
			cout << "������� ��� ������� �����:\n";
			SetColorBgTex(1, 10);
			cin.getline(edit_buffer, 255);
			cout << endl;
			SetColorBgTex(1, 14);
			if (strlen(edit_buffer) == 0)			// ���� ������ �� ������� �� ���������� 0
			{
				edit_book[edit].Date_public = 0;
			}
			else
				edit_book[edit].Date_public = atoi(edit_buffer);
		}
		if (edit_str =="genre")
		{
			cout << "������� ���� �����:\n";
			cout << "��������!!! ���������� ����� ������� �� ���������� �����!\t" << endl;
			SetColorBgTex(1, 10);
			cin.getline(edit_book[edit].Genre, 255);
			cout << endl;
			SetColorBgTex(1, 14);
			if (strlen(edit_book[edit].Genre) == 0)			// ���� ������ �� ������� �� ���������� 0
				strcpy(edit_book[edit].Genre, "0");
		}
		if (edit_str == "cost")
		{
			cout << "������� ��������� �����:\n";
			SetColorBgTex(1, 10);
			cin.getline(edit_buffer, 255);
			cout << endl;
			SetColorBgTex(1, 14);
			if (strlen(edit_buffer) == 0)			// ���� ������ �� ������� �� ���������� 0
			{
				strcpy(edit_buffer, "0");
				edit_book[edit].Cost = 0;
			}
			else
				edit_book[edit].Cost = atoi(edit_buffer);
		}
	} while (edit_str != "menu");

	delete[]edit_buffer;

	file = fopen("D:\\books.txt", "wt"); //���������� �� ������ � ���� ��� ������
	char *buf = new char[255];
	for (int i = 0; i < n; i++)
	{
		fputs(_itoa(edit_book[i].ID_Number_Book, buf, 10), file);
		fputs(";", file);

		strcat(edit_book[i].Name_Book, ";");
		fputs(edit_book[i].Name_Book, file);

		strcat(edit_book[i].Author, ";");
		fputs(edit_book[i].Author, file);

		fputs(_itoa(edit_book[i].Date_public, buf, 10), file);
		fputs(";", file);

		strcat(edit_book[i].Genre, ";");
		fputs(edit_book[i].Genre, file);

		fputs(_itoa(edit_book[i].Cost, buf, 10), file);
		fputs(";", file);

		fputs(_itoa(edit_book[i].Rating, buf, 10), file);
		fputs(";", file);

		strcat(edit_book[i].Availability, ";");
		fputs(edit_book[i].Availability, file);

		fputs(_itoa(edit_book[i].Date_issue, buf, 10), file);
		fputs(";", file);
		fputs("\n", file);
	}
	delete[]buf;
	fclose(file);
	delete[]edit_book;

}

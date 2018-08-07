#include "Header.h"

void EDIT_READER()
{
	cout << "\t\t�������������� ��������\t\t\n\n";
	cout << "������� ID ��������, �������� ����� ���������������:\n\n";
	LIST_READER();
	cout << "������� ID ��������, �������� ����� ���������������:\n\n";
	int edit_number_string;
	SetColorBgTex(1, 10);
	cin >> edit_number_string;
	cin.ignore();
	SetColorBgTex(1, 14);
	FILE * file;
	file = fopen("D:\\readers.txt", "rt");
	int n = COUNT_READERS();
	Reader * edit_reader = new Reader[n];
	char *str = new char[255];
	int i = 0;
	while (fgets(str, 255, file)) //��������� �� ����� ��� ������
	{
		char *token = strtok(str, ";");
		edit_reader[i].ID_number_Reader = atoi(token);
		token = strtok(NULL, ";");
		strcpy(edit_reader[i].Surname_Name_Middle_Name, token);
		token = strtok(NULL, ";");
		strcpy(edit_reader[i].Date_Birth, token);
		token = strtok(NULL, ";");
		strcpy(edit_reader[i].Number_Passport, token);
		token = strtok(NULL, ";");
		edit_reader[i].Count_Books_Read = atoi(token);
		token = strtok(NULL, ";");
		edit_reader[i].Count_Books = atoi(token);
		token = strtok(NULL, ";");

		i++;
	}
	fclose(file);
	delete[]str;

	int edit = edit_number_string - 1;
	string edit_str;
	char *edit_buffer = new char[255];
	do
	{
		system("cls");
		cout << "������ ��� ��������������:\n\n";
		cout << "ID\t" << "���\t\t" << "���� ��������\t" << "����� ��������\t" << "���-�� ���������� ����\t" << "���-�� ���� �� �����\t\n\n";
		cout << edit_reader[edit].ID_number_Reader << "\t" << edit_reader[edit].Surname_Name_Middle_Name << "\t"
			<< edit_reader[edit].Date_Birth << "\t" << edit_reader[edit].Number_Passport << "\t"
			<< edit_reader[edit].Count_Books_Read << "\t\t\t" << edit_reader[edit].Count_Books << "\t\n\n\n";

		cout << "������� ������� ��� ��������������:\n\n";

		cout << "-���:\t\t\t";
		SetColorBgTex(1, 10);
		cout << "name\n";
		SetColorBgTex(1, 14);

		cout << "-���� ��������:\t\t";
		SetColorBgTex(1, 10);
		cout << "date\n";
		SetColorBgTex(1, 14);

		cout << "-����� ��������:\t";
		SetColorBgTex(1, 10);
		cout << "passport\n";
		SetColorBgTex(1, 14);

		cout << "\n-����� � ����:\t\t";
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
			cout << "������� ��� ��������(������: Ivanov I.I.):" << endl;
			cout << "��������!!! ���������� ����� ������� �� ���������� �����!\t" << endl;
			SetColorBgTex(1, 10);
			cin.getline(edit_reader[edit].Surname_Name_Middle_Name, 255);
			cout << endl;
			SetColorBgTex(1, 14);
			if (strlen(edit_reader[edit].Surname_Name_Middle_Name) == 0)			// ���� ������ �� ������� �� ���������� 0
				strcpy(edit_reader[edit].Surname_Name_Middle_Name, "0");
		}
		if (edit_str == "date")
		{
			cout << "������� ���� ��������(������:25/04/1990): " << endl;
			SetColorBgTex(1, 10);
			cin.getline(edit_reader[edit].Date_Birth, 255);
			cout << endl;
			SetColorBgTex(1, 14);
			if (strlen(edit_reader[edit].Date_Birth) == 0)			// ���� ������ �� ������� �� ���������� 0
				strcpy(edit_reader[edit].Date_Birth, "0");
		}
		if (edit_str == "passport")
		{
			cout << "������� ����� �������� (������:��000000): " << endl;
			cout << "��������!!! ���������� ����� ������� �� ���������� �����!\t" << endl;
			SetColorBgTex(1, 10);
			cin.getline(edit_reader[edit].Number_Passport, 255);
			cout << endl;
			SetColorBgTex(1, 14);
			if (strlen(edit_reader[edit].Number_Passport) == 0)			// ���� ������ �� ������� �� ���������� 0
				strcpy(edit_reader[edit].Number_Passport, "0");
		}
	} while (edit_str != "menu");

	delete[]edit_buffer;

	file = fopen("D:\\readers.txt", "wt"); //���������� �� ������ � ���� ��� ������
	char *buf = new char[255];
	for (int i = 0; i < n; i++)
	{
		fputs(_itoa(edit_reader[i].ID_number_Reader, buf, 10), file);
		fputs(";", file);

		strcat(edit_reader[i].Surname_Name_Middle_Name, ";");
		fputs(edit_reader[i].Surname_Name_Middle_Name, file);

		strcat(edit_reader[i].Date_Birth, ";");
		fputs(edit_reader[i].Date_Birth, file);

		strcat(edit_reader[i].Number_Passport, ";");
		fputs(edit_reader[i].Number_Passport, file);

		fputs(_itoa(edit_reader[i].Count_Books_Read, buf, 10), file);
		fputs(";", file);

		fputs(_itoa(edit_reader[i].Count_Books, buf, 10), file);
		fputs(";", file);

		fputs("\n", file);
	}
	delete[]buf;
	fclose(file);
	delete[]edit_reader;

}
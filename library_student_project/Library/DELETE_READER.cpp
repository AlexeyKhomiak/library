#include "Header.h"

void DELETE_READER()
{
		cout << "\t\t�������� ��������\t\t\n\n";
		cout << "������� ID �������� �������� ����� �������:\n\n";
		LIST_READER();
		cout << "������� ID �������� �������� ����� �������:\n\n";
		int delete_number_string;
		cin >> delete_number_string;
		FILE * file;
		file = fopen("D:\\readers.txt", "rt");
		int n = COUNT_READERS();
		Reader * delete_Reader = new Reader[n];
		int i = 0;
		char *str = new char[255];
		while (fgets(str, 255, file)) //��������� �� ����� ��� ������
		{
			char *token = strtok(str, ";");
			delete_Reader[i].ID_number_Reader = atoi(token);
			token = strtok(NULL, ";");
			strcpy(delete_Reader[i].Surname_Name_Middle_Name, token);
			token = strtok(NULL, ";");
			strcpy(delete_Reader[i].Date_Birth, token);
			token = strtok(NULL, ";");
			strcpy(delete_Reader[i].Number_Passport, token);
			token = strtok(NULL, ";");
			delete_Reader[i].Count_Books_Read = atoi(token);
			token = strtok(NULL, ";");
			delete_Reader[i].Count_Books = atoi(token);
			token = strtok(NULL, ";");
			i++;
		}
		fclose(file);
		delete[]str;

		file = fopen("D:\\readers.txt", "wt"); //���������� �� ������ � ���� ��� ������ ��� ���������� ��������
		char *buf = new char[255];
		for (int i = 0; i < n; i++)
		{
			if (delete_Reader[i].ID_number_Reader == delete_number_string) //���������� ID ����� �������� � ��� ������� ����� �������,
																	   //���� ���������, �� ���������� ��� � �� ���������� � ����
			{
				i++;
				if (i >= n)
					break;
			}
			fputs(_itoa(delete_Reader[i].ID_number_Reader, buf, 10), file);
			fputs(";", file);

			strcat(delete_Reader[i].Surname_Name_Middle_Name, ";");
			fputs(delete_Reader[i].Surname_Name_Middle_Name, file);

			strcat(delete_Reader[i].Date_Birth, ";");
			fputs(delete_Reader[i].Date_Birth, file);

			strcat(delete_Reader[i].Number_Passport, ";");
			fputs(delete_Reader[i].Number_Passport, file);

			fputs(_itoa(delete_Reader[i].Count_Books_Read, buf, 10), file);
			fputs(";", file);

			fputs(_itoa(delete_Reader[i].Count_Books, buf, 10), file);
			fputs(";", file);

			fputs("\n", file);
		}

		system("cls");

		cout << "\n�������� ������.\n\n";

		delete[]buf;
		fclose(file);
		delete[]delete_Reader;

		LIST_READER();

		system("pause");
}
#include "Header.h"

void DELETE_READER()
{
		cout << "\t\t”ƒјЋ≈Ќ»≈ „»“ј“≈Ћя\t\t\n\n";
		cout << "¬ведите ID читател€ которого нужно удалить:\n\n";
		LIST_READER();
		cout << "¬ведите ID читател€ которого нужно удалить:\n\n";
		int delete_number_string;
		cin >> delete_number_string;
		FILE * file;
		file = fopen("D:\\readers.txt", "rt");
		int n = COUNT_READERS();
		Reader * delete_Reader = new Reader[n];
		int i = 0;
		char *str = new char[255];
		while (fgets(str, 255, file)) //считываем из файла все строки
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

		file = fopen("D:\\readers.txt", "wt"); //записываем из пам€ти в файл все строки без удаленного читател€
		char *buf = new char[255];
		for (int i = 0; i < n; i++)
		{
			if (delete_Reader[i].ID_number_Reader == delete_number_string) //сравниваем ID номер читател€ с тем который нужно удалить,
																	   //если совпадает, то пропускаем его и не записываем в файл
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

		cout << "\n„»“ј“≈Ћ№ ”ƒјЋ≈Ќ.\n\n";

		delete[]buf;
		fclose(file);
		delete[]delete_Reader;

		LIST_READER();

		system("pause");
}
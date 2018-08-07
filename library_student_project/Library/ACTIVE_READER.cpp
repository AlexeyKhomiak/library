#include "Header.h"

void ACTIVE_READER()	//Ôóíêöèÿ Àêòèâíûå ÷èòàòåëè
{
	FILE * file;
	file = fopen("d:\\readers.txt", "rt");
	int n = COUNT_READERS();
	Reader * list_reader = new Reader[n];
	int i = 0;
	char *str = new char[255];
	while (fgets(str, 255, file))
	{
		char *token = strtok(str, ";");
		list_reader[i].ID_number_Reader = atoi(token);
		token = strtok(NULL, ";");
		strcpy(list_reader[i].Surname_Name_Middle_Name, token);
		token = strtok(NULL, ";");
		strcpy(list_reader[i].Date_Birth, token);
		token = strtok(NULL, ";");
		strcpy(list_reader[i].Number_Passport, token);
		token = strtok(NULL, ";");
		list_reader[i].Count_Books_Read = atoi(token);
		token = strtok(NULL, ";");
		list_reader[i].Count_Books = atoi(token);
		token = strtok(NULL, ";");

		i++;
	}
	delete[]str;
	fclose(file);

	system("cls");
	cout << "\t\tÏßÒÅĞÊÀ ÑÀÌÛÕ ÀÊÒÈÂÍÛÕ ×ÈÒÀÒÅËÅÉ\t\t\n\n";

			for (int i = 0; i < n - 1; i++)
			{
				for (int j = i + 1; j < n; j++)
				{
					if (list_reader[i].Count_Books_Read<list_reader[j].Count_Books_Read)
					{
						Reader swap;
						swap = list_reader[i];
						list_reader[i] = list_reader[j];
						list_reader[j] = swap;
					}
				}
			}
		cout << "ID\t" << "ÔÈÎ\t\t" << "ÄÀÒÀ ĞÎÆÄÅÍÈß\t" << "ÍÎÌÅĞ ÏÀÑÏÎĞÒÀ\t" << "ÊÎË-ÂÎ ÏĞÎ×ÈÒÀÍÛÕ ÊÍÈÃ\t" << "ÊÎË-ÂÎ ÊÍÈÃ ÍÀ ĞÓÊÀÕ\t\n\n";
		
		if (n<5)
		{
			for (int k = 0; k < n; k++)
			{
				cout << list_reader[k].ID_number_Reader << "\t" << list_reader[k].Surname_Name_Middle_Name << "\t"
					<< list_reader[k].Date_Birth << "\t" << list_reader[k].Number_Passport << "\t"
					<< list_reader[k].Count_Books_Read << "\t\t\t" << list_reader[k].Count_Books << "\t\n";
			}
		}
		else
		{
			for (int k = 0; k < 5; k++)
			{
				cout << list_reader[k].ID_number_Reader << "\t" << list_reader[k].Surname_Name_Middle_Name << "\t"
					<< list_reader[k].Date_Birth << "\t" << list_reader[k].Number_Passport << "\t"
					<< list_reader[k].Count_Books_Read << "\t\t\t" << list_reader[k].Count_Books << "\t\n";
			}
		}
		cout << endl;

	cout << endl;
	delete[]list_reader;

}
#include "Header.h"

void FIND_READER() //ôóíêöèÿ ïîèñê ÷èòàòåëÿ
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

	cout << "\t\tÏÎÈÑÊ\t\t\n\n";
	cout << "Ââåäèòå ñëîâî (c ó÷åòîì ğåãèñòğà íà àíãëèéñêîì) èëè öèôğû:\n";

	char *find_word = new char[255];
	char *buf = new char[255];

	SetColorBgTex(1, 10);
	cin.getline(find_word, 255);
	cout << endl;
	SetColorBgTex(1, 14);

	cout << "ID\t" << "ÔÈÎ\t\t" << "ÄÀÒÀ ĞÎÆÄÅÍÈß\t" << "ÍÎÌÅĞ ÏÀÑÏÎĞÒÀ\t" << "ÊÎË-ÂÎ ÏĞÎ×ÈÒÀÍÛÕ ÊÍÈÃ\t" << "ÊÎË-ÂÎ ÊÍÈÃ ÍÀ ĞÓÊÀÕ\t\n\n";

	for (int i = 0; i < n; i++)
	{
		if (strstr(list_reader[i].Surname_Name_Middle_Name, find_word) != NULL)
		{
			cout << list_reader[i].ID_number_Reader << "\t" << list_reader[i].Surname_Name_Middle_Name << "\t"
				<< list_reader[i].Date_Birth << "\t" << list_reader[i].Number_Passport << "\t"
				<< list_reader[i].Count_Books_Read << "\t\t\t"<< list_reader[i].Count_Books <<"\t\n";
		}
		if (strstr(list_reader[i].Number_Passport, find_word) != NULL)
		{
			cout << list_reader[i].ID_number_Reader << "\t" << list_reader[i].Surname_Name_Middle_Name << "\t"
				<< list_reader[i].Date_Birth << "\t" << list_reader[i].Number_Passport << "\t"
				<< list_reader[i].Count_Books_Read << "\t\t\t" << list_reader[i].Count_Books << "\t\n";
		}
		if (strstr(_itoa(list_reader[i].Count_Books_Read, buf, 10), find_word) != NULL)
		{
			cout << list_reader[i].ID_number_Reader << "\t" << list_reader[i].Surname_Name_Middle_Name << "\t"
				<< list_reader[i].Date_Birth << "\t" << list_reader[i].Number_Passport << "\t"
				<< list_reader[i].Count_Books_Read << "\t\t\t" << list_reader[i].Count_Books << "\t\n";
		}
	}
	cout << endl;

	delete[]buf;
	delete[]list_reader;

}
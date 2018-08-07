#include "Header.h"

void LIST_READER() //Ôóíêöèÿ ïğîñìîòğà âñåõ ÷èòàòåëåé
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

		cout << "\t\tÏÅĞÅ×ÅÍÜ ×ÈÒÀÒÅËÅÉ\t\t\n\n";
		cout << "ID\t" << "ÔÈÎ\t\t" << "ÄÀÒÀ ĞÎÆÄÅÍÈß\t" << "ÍÎÌÅĞ ÏÀÑÏÎĞÒÀ\t" << "ÊÎË-ÂÎ ÏĞÎ×ÈÒÀÍÛÕ ÊÍÈÃ\t" << "ÊÎË-ÂÎ ÊÍÈÃ ÍÀ ĞÓÊÀÕ\t\n\n";
		for (int i = 0; i < n; i++)
		{
			cout << list_reader[i].ID_number_Reader << "\t" << list_reader[i].Surname_Name_Middle_Name << "\t" 
				<< list_reader[i].Date_Birth << "\t"<< list_reader[i].Number_Passport << "\t" 
				<< list_reader[i].Count_Books_Read<< "\t\t\t" << list_reader[i].Count_Books << "\t\n";
		}
		cout << endl;
		delete[]list_reader;
}
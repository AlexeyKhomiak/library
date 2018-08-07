#include "Header.h"

void SORT_READER() // ñîğòèğîâêà ×èòàòåëÿ
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

	string sort_str;
	do
	{
		system("cls");
		cout << "\t\tÑÎĞÒÈĞÎÂÊÀ\t\t\n\n";
		cout << "Ââåäèòå ïàğàìåòğ ïî êîòîğîìó ñîğòèğîâàòü:\n";
		
		cout << "-ÔÈÎ:\t\t\t\t";
		SetColorBgTex(1, 10);
		cout << "name\n";
		SetColorBgTex(1, 14);

		cout << "-ÍÎÌÅĞ ÏÀÑÏÎĞÒÀ:\t\t";
		SetColorBgTex(1, 10);
		cout << "passport\n";
		SetColorBgTex(1, 14);

		cout << "-ÊÎËÈ×ÅÑÒÂÎ ÏĞÎ×ÈÒÀÍÛÕ ÊÍÈÃ:\t";
		SetColorBgTex(1, 10);
		cout << "count\n\n";
		SetColorBgTex(1, 14);

		cout << "-ÂÛÉÒÈ â ìåíş:\t\t\t";
		SetColorBgTex(1, 10);
		cout << "menu\n\n";
		SetColorBgTex(1, 14);

		cout << "Ââåäèòå êîìàíäó:\n";
		SetColorBgTex(1, 10);
		getline(cin, sort_str);
		cout << endl;
		SetColorBgTex(1, 14);
		if (sort_str == "name")
		{
			cout << "ÏÎ ÂÎÇĞÀÑÒÀÍÈŞ:\t";
			SetColorBgTex(1, 10);
			cout << "high\n\n";
			SetColorBgTex(1, 14);

			cout << "ÏÎ ÓÁÛÂÀÍÈŞ:\t";
			SetColorBgTex(1, 10);
			cout << "low\n\n";
			SetColorBgTex(1, 14);

			cout << "Ââåäèòå êîìàíäó:\n";
			SetColorBgTex(1, 10);
			getline(cin, sort_str);
			cout << endl;
			SetColorBgTex(1, 14);

			if (sort_str == "high")
			{
				for (int i = 0; i < n - 1; i++)
				{
					for (int j = i + 1; j < n; j++)
					{
						if (strcmp(list_reader[i].Surname_Name_Middle_Name, list_reader[j].Surname_Name_Middle_Name)>0)
						{
							Reader swap;
							swap = list_reader[i];
							list_reader[i] = list_reader[j];
							list_reader[j] = swap;
						}
					}
				}
			}
			if (sort_str == "low")
			{
				for (int i = 0; i < n - 1; i++)
				{
					for (int j = i + 1; j < n; j++)
					{
						if (strcmp(list_reader[i].Surname_Name_Middle_Name, list_reader[j].Surname_Name_Middle_Name)<0)
						{
							Reader swap;
							swap = list_reader[i];
							list_reader[i] = list_reader[j];
							list_reader[j] = swap;
						}
					}
				}
			}
			cout << "ID\t" << "ÔÈÎ\t\t" << "ÄÀÒÀ ĞÎÆÄÅÍÈß\t" << "ÍÎÌÅĞ ÏÀÑÏÎĞÒÀ\t" << "ÊÎË-ÂÎ ÏĞÎ×ÈÒÀÍÛÕ ÊÍÈÃ\t" << "ÊÎË-ÂÎ ÊÍÈÃ ÍÀ ĞÓÊÀÕ\t\n\n";
			for (int k = 0; k < n; k++)
			{
				cout << list_reader[k].ID_number_Reader << "\t" << list_reader[k].Surname_Name_Middle_Name << "\t"
					<< list_reader[k].Date_Birth << "\t"<< list_reader[k].Number_Passport << "\t" 
					<< list_reader[k].Count_Books_Read << "\t\t\t" << list_reader[k].Count_Books << "\t\n";
			}
			cout << endl;
			system("pause");
		}
		if (sort_str == "passport")
		{
			cout << "ÏÎ ÂÎÇĞÀÑÒÀÍÈŞ:\t";
			SetColorBgTex(1, 10);
			cout << "high\n\n";
			SetColorBgTex(1, 14);

			cout << "ÏÎ ÓÁÛÂÀÍÈŞ:\t";
			SetColorBgTex(1, 10);
			cout << "low\n\n";
			SetColorBgTex(1, 14);

			cout << "Ââåäèòå êîìàíäó:\n";
			SetColorBgTex(1, 10);
			getline(cin, sort_str);
			cout << endl;
			SetColorBgTex(1, 14);

			if (sort_str == "high")
			{
				for (int i = 0; i < n - 1; i++)
				{
					for (int j = i + 1; j < n; j++)
					{
						if (strcmp(list_reader[i].Number_Passport, list_reader[j].Number_Passport)>0)
						{
							Reader swap;
							swap = list_reader[i];
							list_reader[i] = list_reader[j];
							list_reader[j] = swap;
						}
					}
				}
			}
			if (sort_str == "low")
			{
				for (int i = 0; i < n - 1; i++)
				{
					for (int j = i + 1; j < n; j++)
					{
						if (strcmp(list_reader[i].Number_Passport, list_reader[j].Number_Passport)<0)
						{
							Reader swap;
							swap = list_reader[i];
							list_reader[i] = list_reader[j];
							list_reader[j] = swap;
						}
					}
				}
			}
			cout << "ID\t" << "ÔÈÎ\t\t" << "ÄÀÒÀ ĞÎÆÄÅÍÈß\t" << "ÍÎÌÅĞ ÏÀÑÏÎĞÒÀ\t" << "ÊÎË-ÂÎ ÏĞÎ×ÈÒÀÍÛÕ ÊÍÈÃ\t" << "ÊÎË-ÂÎ ÊÍÈÃ ÍÀ ĞÓÊÀÕ\t\n\n";
			for (int k = 0; k < n; k++)
			{
				cout << list_reader[k].ID_number_Reader << "\t" << list_reader[k].Surname_Name_Middle_Name << "\t"
					<< list_reader[k].Date_Birth << "\t" << list_reader[k].Number_Passport << "\t"
					<< list_reader[k].Count_Books_Read << "\t\t\t" << list_reader[k].Count_Books << "\t\n";
			}
			cout << endl;
			system("pause");
		}
		if (sort_str == "count")
		{
			cout << "ÏÎ ÂÎÇĞÀÑÒÀÍÈŞ:\t";
			SetColorBgTex(1, 10);
			cout << "high\n\n";
			SetColorBgTex(1, 14);

			cout << "ÏÎ ÓÁÛÂÀÍÈŞ:\t";
			SetColorBgTex(1, 10);
			cout << "low\n\n";
			SetColorBgTex(1, 14);

			cout << "Ââåäèòå êîìàíäó:\n";
			SetColorBgTex(1, 10);
			getline(cin, sort_str);
			cout << endl;
			SetColorBgTex(1, 14);

			if (sort_str == "high")
			{
				for (int i = 0; i < n - 1; i++)
				{
					for (int j = i + 1; j < n; j++)
					{
						if (list_reader[i].Count_Books_Read>list_reader[j].Count_Books_Read)
						{
							Reader swap;
							swap = list_reader[i];
							list_reader[i] = list_reader[j];
							list_reader[j] = swap;
						}
					}
				}
			}
			if (sort_str == "low")
			{
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
			}
			cout << "ID\t" << "ÔÈÎ\t\t" << "ÄÀÒÀ ĞÎÆÄÅÍÈß\t" << "ÍÎÌÅĞ ÏÀÑÏÎĞÒÀ\t" << "ÊÎË-ÂÎ ÏĞÎ×ÈÒÀÍÛÕ ÊÍÈÃ\t" << "ÊÎË-ÂÎ ÊÍÈÃ ÍÀ ĞÓÊÀÕ\t\n\n";
			for (int k = 0; k < n; k++)
			{
				cout << list_reader[k].ID_number_Reader << "\t" << list_reader[k].Surname_Name_Middle_Name << "\t"
					<< list_reader[k].Date_Birth << "\t" << list_reader[k].Number_Passport << "\t"
					<< list_reader[k].Count_Books_Read << "\t\t\t" << list_reader[k].Count_Books << "\t\n";
			}
			cout << endl;
			system("pause");
		}
	} while (sort_str != "menu");

	cout << endl;
	delete[]list_reader;

}
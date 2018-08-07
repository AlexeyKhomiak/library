#include "Header.h"

void SORT_BOOK()
{
	FILE * file;
	file = fopen("d:\\books.txt", "rt");
	int n = COUNT_BOOK();
	Book * list_book = new Book[n];
	int i = 0;
	char *str = new char[255];
	while (fgets(str, 255, file))
	{
		char *token = strtok(str, ";");
		list_book[i].ID_Number_Book = atoi(token);
		token = strtok(NULL, ";");
		strcpy(list_book[i].Name_Book, token);
		token = strtok(NULL, ";");
		strcpy(list_book[i].Author, token);
		token = strtok(NULL, ";");
		list_book[i].Date_public = atoi(token);
		token = strtok(NULL, ";");
		strcpy(list_book[i].Genre, token);
		token = strtok(NULL, ";");
		list_book[i].Cost = atoi(token);
		token = strtok(NULL, ";");
		list_book[i].Rating = atoi(token);
		token = strtok(NULL, ";");
		strcpy(list_book[i].Availability, token);
		token = strtok(NULL, ";");
		list_book[i].Date_issue = atoi(token);
		token = strtok(NULL, ";");
		i++;
	}
	delete[]str;
	fclose(file);
	
	string sort_str;
	do
	{
	system("cls");
	cout << "\t\tÑÎÐÒÈÐÎÂÊÀ\t\t\n\n";
	cout << "Ââåäèòå ïàðàìåòð ïî êîòîðîìó ñîðòèðîâàòü:\n";
	
	cout << "-ÍÀÇÂÀÍÈÅ:\t";
	SetColorBgTex(1, 10);
	cout << "name\n";
	SetColorBgTex(1, 14);

	cout << "-ÀÂÒÎÐ:\t\t";
	SetColorBgTex(1, 10);
	cout << "author\n";
	SetColorBgTex(1, 14);

	cout << "-ÆÀÍÐ:\t\t";
	SetColorBgTex(1, 10);
	cout << "genre\n";
	SetColorBgTex(1, 14);

	cout << "-ÏÎÏÓËßÐÍÎÑÒÜ:\t";
	SetColorBgTex(1, 10);
	cout << "popular\n\n";
	SetColorBgTex(1, 14);

	cout << "-ÂÛÉÒÈ â ìåíþ:\t";
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
		cout << "ÏÎ ÂÎÇÐÀÑÒÀÍÈÞ:\t";
		SetColorBgTex(1, 10);
		cout << "high\n\n";
		SetColorBgTex(1, 14);

		cout << "ÏÎ ÓÁÛÂÀÍÈÞ:\t";
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
				for (int j = i+1; j < n; j++)
				{
					if (strcmp(list_book[i].Name_Book,list_book[j].Name_Book)>0)
					{
						Book swap;
						swap = list_book[i];
						list_book[i] = list_book[j];
						list_book[j] = swap;
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
					if (strcmp(list_book[i].Name_Book, list_book[j].Name_Book)<0)
					{
						Book swap;
						swap = list_book[i];
						list_book[i] = list_book[j];
						list_book[j] = swap;
					}
				}
			}
		}
		cout << "ID\t\t" << "ÍÀÇÂÀÍÈÅ\t\t" << "  ÀÂÒÎÐ\t\t" << " ÃÎÄ\t" << " ÆÀÍÐ\t" << "ÐÅÉÒÈÍÃ\t" << "ÖÅÍÀ\t" << "ÍÀËÈ×ÈÅ\t\n\n";
		for (int k = 0; k < n; k++)
		{
			printf("%d\t %25.25s\t %.10s\t %d\t %.6s\t %d\t %d\t %s\n", list_book[k].ID_Number_Book, list_book[k].Name_Book,
				list_book[k].Author, list_book[k].Date_public, list_book[k].Genre, list_book[k].Rating,
				list_book[k].Cost, list_book[k].Availability);
		}
		cout << endl;
		system("pause");
	}
	if (sort_str == "author")
	{
		cout << "ÏÎ ÂÎÇÐÀÑÒÀÍÈÞ:\t";
		SetColorBgTex(1, 10);
		cout << "high\n\n";
		SetColorBgTex(1, 14);

		cout << "ÏÎ ÓÁÛÂÀÍÈÞ:\t";
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
					if (strcmp(list_book[i].Author, list_book[j].Author)>0)
					{
						Book swap;
						swap = list_book[i];
						list_book[i] = list_book[j];
						list_book[j] = swap;
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
					if (strcmp(list_book[i].Author, list_book[j].Author)<0)
					{
						Book swap;
						swap = list_book[i];
						list_book[i] = list_book[j];
						list_book[j] = swap;
					}
				}
			}
		}
		cout << "ID\t\t" << "ÍÀÇÂÀÍÈÅ\t\t" << "  ÀÂÒÎÐ\t\t" << " ÃÎÄ\t" << " ÆÀÍÐ\t" << "ÐÅÉÒÈÍÃ\t" << "ÖÅÍÀ\t" << "ÍÀËÈ×ÈÅ\t\n\n";
		for (int k = 0; k < n; k++)
		{
			printf("%d\t %25.25s\t %.10s\t %d\t %.6s\t %d\t %d\t %s\n", list_book[k].ID_Number_Book, list_book[k].Name_Book,
				list_book[k].Author, list_book[k].Date_public, list_book[k].Genre, list_book[k].Rating,
				list_book[k].Cost, list_book[k].Availability);
		}
		cout << endl;
		system("pause");
	}
	if (sort_str == "popular")
	{
		cout << "ÏÎ ÂÎÇÐÀÑÒÀÍÈÞ:\t";
		SetColorBgTex(1, 10);
		cout << "high\n\n";
		SetColorBgTex(1, 14);

		cout << "ÏÎ ÓÁÛÂÀÍÈÞ:\t";
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
					if (list_book[i].Rating>list_book[j].Rating)
					{
						Book swap;
						swap = list_book[i];
						list_book[i] = list_book[j];
						list_book[j] = swap;
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
					if (list_book[i].Date_public<list_book[j].Date_public)
					{
						Book swap;
						swap = list_book[i];
						list_book[i] = list_book[j];
						list_book[j] = swap;
					}
				}
			}
		}
		cout << "ID\t\t" << "ÍÀÇÂÀÍÈÅ\t\t" << "  ÀÂÒÎÐ\t\t" << " ÃÎÄ\t" << " ÆÀÍÐ\t" << "ÐÅÉÒÈÍÃ\t" << "ÖÅÍÀ\t" << "ÍÀËÈ×ÈÅ\t\n\n";
		for (int k = 0; k < n; k++)
		{
			printf("%d\t %25.25s\t %.10s\t %d\t %.6s\t %d\t %d\t %s\n", list_book[k].ID_Number_Book, list_book[k].Name_Book,
				list_book[k].Author, list_book[k].Date_public, list_book[k].Genre, list_book[k].Rating,
				list_book[k].Cost, list_book[k].Availability);
		}
		cout << endl;
		system("pause");
	}
	if (sort_str == "genre")
	{
		cout << "ÏÎ ÂÎÇÐÀÑÒÀÍÈÞ:\t";
		SetColorBgTex(1, 10);
		cout << "high\n\n";
		SetColorBgTex(1, 14);

		cout << "ÏÎ ÓÁÛÂÀÍÈÞ:\t";
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
					if (strcmp(list_book[i].Genre, list_book[j].Genre)>0)
					{
						Book swap;
						swap = list_book[i];
						list_book[i] = list_book[j];
						list_book[j] = swap;
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
					if (strcmp(list_book[i].Genre, list_book[j].Genre)<0)
					{
						Book swap;
						swap = list_book[i];
						list_book[i] = list_book[j];
						list_book[j] = swap;
					}
				}
			}
		}
		cout << "ID\t\t" << "ÍÀÇÂÀÍÈÅ\t\t" << "  ÀÂÒÎÐ\t\t" << " ÃÎÄ\t" << " ÆÀÍÐ\t" << "ÐÅÉÒÈÍÃ\t" << "ÖÅÍÀ\t" << "ÍÀËÈ×ÈÅ\t\n\n";
		for (int k = 0; k < n; k++)
		{
			printf("%d\t %25.25s\t %.10s\t %d\t %.6s\t %d\t %d\t %s\n", list_book[k].ID_Number_Book, list_book[k].Name_Book,
				list_book[k].Author, list_book[k].Date_public, list_book[k].Genre, list_book[k].Rating,
				list_book[k].Cost, list_book[k].Availability);
		}
		cout << endl;
		system("pause");
	}
} while (sort_str != "menu");

	cout << endl;
	delete[]list_book;
}
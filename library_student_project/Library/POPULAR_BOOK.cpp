#include "Header.h"

void POPULAR_BOOK()
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

		system("cls");
		cout << "\t\tÏÎÏÓËßÐÍÛÅ ÊÍÈÃÈ Â ÑÂÎÅÌ ÆÀÍÐÅ\t\t\n\n";

		for (int i = 0; i < n - 1; i++)  //ñîðòèðóåì ïî ïîïóëÿðíîñòè
		{
			for (int j = i + 1; j < n; j++)
			{
				if (list_book[i].Rating<list_book[j].Rating)
				{
					Book swap;
					swap = list_book[i];
					list_book[i] = list_book[j];
					list_book[j] = swap;
				}
			}
		}

		cout << "ID\t\t" << "ÍÀÇÂÀÍÈÅ\t\t" << "  ÀÂÒÎÐ\t\t" << " ÃÎÄ\t" << " ÆÀÍÐ\t" << "ÐÅÉÒÈÍÃ\t" << "ÖÅÍÀ\t" << "ÍÀËÈ×ÈÅ\t\n\n";

		Book * buffer=new Book[n];
		int k=1;
		buffer[0] = list_book[0];    
		for (int i = 1; i < n; i++)
		{
			bool isFound = false;
			for (int j = 0; j < n; j++)
			{
				if (strcmp(list_book[i].Genre,buffer[j].Genre) == 0)
				{
					isFound = true;
					break;
				}
			}
			if (isFound==false)
			{
				buffer[k] = list_book[i];
				printf("%d\t %25.25s\t %.10s\t %d\t %.6s\t %d\t %d\t %s\n", buffer[k].ID_Number_Book, buffer[k].Name_Book,
					buffer[k].Author, buffer[k].Date_public, buffer[k].Genre, buffer[k].Rating,
					buffer[k].Cost, buffer[k].Availability);
				k++;
			}
		}
		
	cout << endl;

	cout << endl;
	delete[]list_book;
}

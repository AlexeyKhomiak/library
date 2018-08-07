#include "Header.h"

void LIST_BOOK() //ôóíêöèÿ âûâîäà íà ıêğàí âñåõ êíèã
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

	cout << "\t\tÏÅĞÅ×ÅÍÜ ÊÍÈÃ\t\t\n\n";
	cout << "ID\t\t" << "ÍÀÇÂÀÍÈÅ\t\t" << "  ÀÂÒÎĞ\t\t" << " ÃÎÄ\t" << " ÆÀÍĞ\t" << "ĞÅÉÒÈÍÃ\t" << "ÖÅÍÀ\t" << "ÍÀËÈ×ÈÅ\t\n\n";
	for (int i = 0; i < n; i++)
	{
		printf("%d\t %25.25s\t %.10s\t %d\t %.6s\t %d\t %d\t %s\n", list_book[i].ID_Number_Book, list_book[i].Name_Book, 
			list_book[i].Author, list_book[i].Date_public, list_book[i].Genre, list_book[i].Rating,
			list_book[i].Cost, list_book[i].Availability);
	}
	cout << endl;
	delete[]list_book;

}

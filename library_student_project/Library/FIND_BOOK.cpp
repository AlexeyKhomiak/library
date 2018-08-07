#include "Header.h"

void FIND_BOOK() //функция вывода на экран всех книг
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

	cout << "\t\tПОИСК\t\t\n\n";
	cout << "Введите слово (на английском) или цифры:\n";

	char *find_word = new char[255];
	char *buf = new char[255];

	SetColorBgTex(1, 10);
	cin.getline(find_word,255);
	cout << endl;
	SetColorBgTex(1, 14);
	
	cout << "ID\t\t" << "НАЗВАНИЕ\t\t" << "  АВТОР\t\t" << " ГОД\t" << " ЖАНР\t" << "РЕЙТИНГ\t" << "ЦЕНА\t" << "НАЛИЧИЕ\t\n\n";

	for (int i = 0; i < n; i++)
	{
		if (strstr(list_book[i].Name_Book, find_word)!=NULL)
		{

			printf("%d\t %25.25s\t %.10s\t %d\t %.6s\t %d\t %d\t %s\n", list_book[i].ID_Number_Book, list_book[i].Name_Book,
				list_book[i].Author, list_book[i].Date_public, list_book[i].Genre, list_book[i].Rating,
				list_book[i].Cost, list_book[i].Availability);

			continue;
		}
		if (strstr(list_book[i].Author, find_word) != NULL)
		{

			printf("%d\t %25.25s\t %.10s\t %d\t %.6s\t %d\t %d\t %s\n", list_book[i].ID_Number_Book, list_book[i].Name_Book,
				list_book[i].Author, list_book[i].Date_public, list_book[i].Genre, list_book[i].Rating,
				list_book[i].Cost, list_book[i].Availability);

			continue;
		}
		if (strstr(list_book[i].Genre, find_word) != NULL)
		{
			printf("%d\t %25.25s\t %.10s\t %d\t %.6s\t %d\t %d\t %s\n", list_book[i].ID_Number_Book, list_book[i].Name_Book,
				list_book[i].Author, list_book[i].Date_public, list_book[i].Genre, list_book[i].Rating,
				list_book[i].Cost, list_book[i].Availability);

			continue;
		}
		if (strstr(_itoa(list_book[i].Date_public, buf, 10), find_word) != NULL)
		{
			
			printf("%d\t %25.25s\t %.10s\t %d\t %.6s\t %d\t %d\t %s\n", list_book[i].ID_Number_Book, list_book[i].Name_Book,
				list_book[i].Author, list_book[i].Date_public, list_book[i].Genre, list_book[i].Rating,
				list_book[i].Cost, list_book[i].Availability);

			continue;
		}
		if (strstr(_itoa(list_book[i].Cost, buf,10), find_word) != NULL)
		{
			printf("%d\t %25.25s\t %.10s\t %d\t %.6s\t %d\t %d\t %s\n", list_book[i].ID_Number_Book, list_book[i].Name_Book,
				list_book[i].Author, list_book[i].Date_public, list_book[i].Genre, list_book[i].Rating,
				list_book[i].Cost, list_book[i].Availability);

			continue;
		}
	}
	cout << endl;

	system("pause");

	delete[]buf;
	delete[]list_book;
}


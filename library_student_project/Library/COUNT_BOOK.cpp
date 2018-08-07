#include "Header.h"

int COUNT_BOOK() // функция подсчета книг
{
	FILE * file;
	file = fopen("D:\\books.txt", "rt");
	int count = 0;
	char * buffer = new char[255];
	while (fgets(buffer, 255, file))
		count++;
	delete[]buffer;
	fclose(file);
	return count;
}

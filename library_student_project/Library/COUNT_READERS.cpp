#include "Header.h"

int COUNT_READERS() // функция подсчета читателей
{
	FILE * file;
	file = fopen("D:\\readers.txt", "rt");
	int count = 0;
	char * buffer = new char[255];
	while (fgets(buffer, 255, file))
		count++;
	delete[]buffer;
	fclose(file);
	return count;
}

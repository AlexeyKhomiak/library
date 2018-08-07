#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <iostream>
#include <string>

using namespace std;
void SetColorBgTex(int Bg, int Tex); //функция установки цветов заливки и текста

struct Reader		//структура Читатель
{
	int ID_number_Reader;
	char Surname_Name_Middle_Name[255];
	char Date_Birth[255];
	char Number_Passport[255];
	int Count_Books_Read;
	int Count_Books;
};

struct Book			//структура книга
{
	int ID_Number_Book;
	int Date_public;
	char Name_Book[255];
	char Author[255];
	char Genre[255];
	int Cost;
	int Rating;
	char Availability[255];	//Reader Name_Reader;
	int Date_issue;
}; 

void MENU_LIBRARY();//функция меню "библиотека"
void MENU_BOOK();	//функция меню "книга"
int COUNT_BOOK();	//Функция подсчета книг в файле
void ADD_BOOK();	//функция добавления книги
void LIST_BOOK();	//функция вывода на экран всех книг
void DELETE_BOOK(); //функция удаления книги
void EDIT_BOOK();	//функция редактирования книги
void FIND_BOOK();	//функция поиска по книгам
void SORT_BOOK();	//функция сортировки по книгам
void POPULAR_BOOK();//функция популярніе книги в своем жанре
void MENU_READER(); //функция меню "Читатель"
void ADD_READER(); //функция добавления читателя
int COUNT_READERS(); // функция подсчета книг
void LIST_READER(); //Функция просмотра всех читателей
void DELETE_READER(); //Функция удаления читателя
void EDIT_READER();	//Функция редактирования читателя
void FIND_READER(); //Функция поиск читателя
void SORT_READER(); // сортировка Читателя
void ACTIVE_READER();//Функция Активные читатели



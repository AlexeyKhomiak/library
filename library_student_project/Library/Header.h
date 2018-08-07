#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <iostream>
#include <string>

using namespace std;
void SetColorBgTex(int Bg, int Tex); //������� ��������� ������ ������� � ������

struct Reader		//��������� ��������
{
	int ID_number_Reader;
	char Surname_Name_Middle_Name[255];
	char Date_Birth[255];
	char Number_Passport[255];
	int Count_Books_Read;
	int Count_Books;
};

struct Book			//��������� �����
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

void MENU_LIBRARY();//������� ���� "����������"
void MENU_BOOK();	//������� ���� "�����"
int COUNT_BOOK();	//������� �������� ���� � �����
void ADD_BOOK();	//������� ���������� �����
void LIST_BOOK();	//������� ������ �� ����� ���� ����
void DELETE_BOOK(); //������� �������� �����
void EDIT_BOOK();	//������� �������������� �����
void FIND_BOOK();	//������� ������ �� ������
void SORT_BOOK();	//������� ���������� �� ������
void POPULAR_BOOK();//������� ��������� ����� � ����� �����
void MENU_READER(); //������� ���� "��������"
void ADD_READER(); //������� ���������� ��������
int COUNT_READERS(); // ������� �������� ����
void LIST_READER(); //������� ��������� ���� ���������
void DELETE_READER(); //������� �������� ��������
void EDIT_READER();	//������� �������������� ��������
void FIND_READER(); //������� ����� ��������
void SORT_READER(); // ���������� ��������
void ACTIVE_READER();//������� �������� ��������



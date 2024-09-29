#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int ,int );
main()
{
        system("cls");
	int x;
	int y;
	gotoxy(30,20);
	cout << " MUHAMMAD ABUBAKAR ASIF ";
	
}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
	
	




#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int x, int y);
void moveplayer(int x, int y);
 
main()
{
	int x = 4, y = 1;
	system("cls");
	printmaze();
	while(true)
	{
	   moveplayer(x,y);
	   y = y + 1;
	   if(y == 8)
	   {
		y = 1;
	   }
	}
	
}

void moveplayer(int x,int y)
{
	gotoxy(x, y);
	cout<<"p";
	Sleep(400);
	gotoxy(x, y);
	cout<<"  ";
}

void printmaze()
{
	
	cout<< "#########################"<<endl;
	cout<< "#			#"<<endl;
	cout<< "#			#"<<endl;
	cout<< "#			#"<<endl;
	cout<< "#			#"<<endl;
	cout<< "#			#"<<endl;
	cout<< "#			#"<<endl;
	cout<< "#			#"<<endl;
	cout<< "#########################"<<endl;
}

void gotoxy(int x,int y)
{

	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
	



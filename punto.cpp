#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
void mover(int x,int y)
{  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}  

void punto()
{
	system("cls");
	char opcion;
	int x=5,y=5;
	while(opcion!='z')
	{
		system("cls");
		mover(x,y);
		cout<<"*";
		opcion=getch();
		switch(opcion)
		{
			case 'a':
				x--;
				break;
			case 's':
				y++;
				break;
			case 'd':
				x++;
				break;
			case 'w':
				y--;
				break;
		}
	}
}


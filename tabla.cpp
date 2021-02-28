#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void tabla()
{
	system("cls");
	int numero,resultado;
	string opcion;
	cout<<"ingrese la tabla que quiere: "; cin>>numero;
	for(int i=0;i<=12;i++)
	{
		cout<<numero <<" x "<<i<<" = "<<numero*i<<endl;
	}
	cout<<"\n\n Desea ver otra tabla de multiplicar (s/n): "; cin>>opcion;
	if(opcion=="s")
	{
		tabla();
	}
	else
	{
		cout<<"Nos vemos"<<endl;
	}
}

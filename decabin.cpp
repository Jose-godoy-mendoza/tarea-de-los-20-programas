#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void decabin()
{
	system("cls");
	int numero;
	string opcion;
	short binario[10];
	
	cout<<"ingresa el numero para pasarlo a binario: "; cin>>numero;
	for(int i=0; i<8; i++)
	{
		binario[i] = numero % 2;
		numero /=2;
	}
	cout<<"El numero en binario es: ";
	for(int i=7;i>=0; i--)
	{
		cout<<binario[i];
	}
	cout<<"\n\n Desea convertir otro numero a binario (s/n): "; cin>>opcion;
	if(opcion=="s")
	{
		decabin();
	}
	else
	{
		cout<<"nos vemos"<<endl;
	}
}


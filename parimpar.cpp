#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
// Determinar si un numero es par o impar
void parimpar()
{
	system("cls");
	int A;
	string opcion;
	cout<<"Esta seccion es para determinar si el numero es par o impar"<<endl;
	cout<<"ingrese el valor de A: "; cin>>A; 
	if(A % 2 == 0)
	{
		cout<<"El numero es par"<<endl;
	}
	else
	{
		cout<<"El numero es impar"<<endl;
	}
	
	cout<<"\n\n Desea ver si otro numero es par o impar (s/n): "; cin>>opcion;
	if(opcion=="s")
	{
		parimpar();
	}
	else
	{
		cout<<"Nos vemos"<<endl;
	}
}

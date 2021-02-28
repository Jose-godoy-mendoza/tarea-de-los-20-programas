#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void decihexa ()
{
	system("cls");
	int digito[20];
	int decimal, residuo, resultado, i=0;
	string opcion;
	
	cout<<"Ingrese el decimal a convertir: ", cin>>decimal;
	do
	{
		residuo=decimal%16;
		resultado=decimal/16;
		digito[i]=residuo;
		decimal=resultado;
		i++;
	}while(resultado>15);
	digito[i]=resultado;
	
	cout<<"El digito "<<digito<<" a hexadecimal es: ";
	for(int j=i;j>=0;j--)
	{
		if(digito[j]==10)
		{
			cout<<"A";
		}
		if(digito[j]==11)
		{
			cout<<"B";
		}
		if(digito[j]==12)
		{
			cout<<"C";
		}
		if(digito[j]==13)
		{
			cout<<"D";
		}
		if(digito[j]==14)
		{
			cout<<"E";
		}
		if(digito[j]==15)
		{
			cout<<"F";
		}
		else
		{
			cout<<digito[j];
		}
		
	}
	cout<<"\n Desea volver a convertir otro decimal a hexadecimal (s/n): "; cin>>opcion;
	if(opcion=="s")
	{
		decihexa();
	}
	else
	{
		cout<<"Nos vemos"<<endl;
	}
}


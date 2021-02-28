#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

void adivinar()
{
	system("cls");
	int numero, dato, contador=0;
	string opcion;
	srand(time(NULL));
	dato= 1 + rand() % (100);
	
	cout<<"Estoy pensando en un numero del 1 al 100"<<endl;
	cout<<"Puedes adivinar cual es"<<endl;
	do
	{
		cout<<"Ingrese un numero: "; cin>>numero;
		if(numero>dato)
		{
			cout<<"El numero es menor"<<endl;
		}
		if(numero<dato)
		{
			cout<<"El numero es mayor"<<endl;
		}
		contador++;
	} while(numero!=dato);
	cout<<"\n Exacto, ese numero estaba pensando"<<endl;
	cout<<"Tuviste "<<contador<< " intentos, pero lo lograste"<<endl;
	system("pause");
	
	cout<<"\n\n Quieres volver a intentarlo(s/n): ";cin>>opcion;
	if(opcion=="s")
	{
		adivinar();
	}
	else
	{
		cout<<"\nNos vemos";
	 } 
}

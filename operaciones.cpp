#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
//suma, resta, division y multiplicacion de 2 numeros
void operaciones()
{
	system("cls");
	int opcion;
	string opc;
	double A, B;
	cout<<"-------- Menu para operaciones entre 2 numeros --------"<<endl;
	cout<<"1. 	Suma"<<endl;
	cout<<"2. 	Resta"<<endl;
	cout<<"3. 	Division"<<endl;
	cout<<"4. 	Multiplicacion"<<endl<<endl;
	cout<<"Ingrese el valor de A: "; cin>>A;
	cout<<endl<<"Ingrese el valor de B: "; cin>>B;
	cout<<endl<<"ingrese la operacion que quiere"<<endl; cin>>opcion;
	
	switch(opcion)
	{
		case 1:
			cout<<"La suma de A + B es: "<<A + B;
			break;
		case 2:
			cout<<"La resta de A - B es: "<<A - B;
			break;
		case 3:
			cout<<"La division de A / B es: "<<A / B;
			break;
		case 4:
			cout<<"La multiplicacion de A * B es: "<<A * B;
			break;
	}
	cout<<"\n\n Desea realizar otra operacion (s/n): "; cin>>opc;
	if(opc=="s")
	{
		operaciones();
	}
	else
	{
		cout<<"Nos vemos"<<endl;
	}
}

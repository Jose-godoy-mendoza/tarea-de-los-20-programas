#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
//de Km a Millas, mts a pulagadas, libras a kilos y viceversa
void conversiones()
{
	system("cls");
	double A, B;
	string opc;
	int opcion;
	cout<<"---------- Menu de conversiones ----------"<<endl;
	cout<<"1. De Kilometros a Millas"<<endl;
	cout<<"2. De metros a Pulgadas"<<endl;
	cout<<"3. De Libras a Kilos"<<endl;
	cout<<"4. De Millas a Kilometros"<<endl;
	cout<<"5. De Pulgadas a Metros"<<endl;
	cout<<"6. De Kilos a Libras"<<endl;
	cout<<"ingrese la opcion: "; cin>>opcion;
	switch(opcion)
	{
		case 1:
			cout<<"\n ----------------------------------------"<<endl;
			cout<<"ingrese la cantidad en Kilometros para pasarlo a Millas: "; cin>>A;
			B = A * 0.621371;
			cout<<"\n La cantidad de "<<A<<" km son: "<<B<<" millas"<<endl; 
			break;
		case 2:
			cout<<"\n ----------------------------------------"<<endl;
			cout<<"ingrese la cantidad en Metros para pasarlo a Pulgadas: "; cin>>A;
			B = A * 39.3701;
			cout<<"\n La cantidad de "<<A<<" Metros son: "<<B<<" Pulgadas"<<endl; 
			break;
		case 3:
			cout<<"\n ----------------------------------------"<<endl;
			cout<<"ingrese la cantidad en Libras para pasarlo a Kilos: "; cin>>A;
			B = A * 0.453592;
			cout<<"\n La cantidad de "<<A<<" Libras son: "<<B<<" Kilos"<<endl; 
			break;
		case 4:
			cout<<"\n ----------------------------------------"<<endl;
			cout<<"ingrese la cantidad en Millas para pasarlo a Kilometros: "; cin>>A;
			B = A * 1.60934;
			cout<<"\n La cantidad de "<<A<<" Millas son: "<<B<<" Kilometros"<<endl; 
			break;
		case 5:
			cout<<"\n ----------------------------------------"<<endl;
			cout<<"ingrese la cantidad en Pulgadas para pasarlo a Metros: "; cin>>A;
			B = A * 0.0254;
			cout<<"\n La cantidad de "<<A<<" Pulgadas son: "<<B<<" Metros"<<endl; 
			break;
		case 6:
			cout<<"\n ----------------------------------------"<<endl;
			cout<<"ingrese la cantidad en Kilos para pasarlo a Libras: "; cin>>A;
			B = A * 2.20462;
			cout<<"\n La cantidad de "<<A<<" Kilos son: "<<B<<" Libras"<<endl; 
			break;
		default:
			cout<<"Esta opcion no existe"<<endl;
			break;
	}
	cout<<"\n\n Desea hacer otra conversion (s/n): "; cin>>opc;
	if(opc=="s")
	{
		conversiones();
	}
	else
	{
		cout<<"Nos vemos"<<endl;
	}
}

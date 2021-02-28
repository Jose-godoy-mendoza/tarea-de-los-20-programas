#include <iostream>
using namespace std;

string opc;

void menucajero()
{
	cout<<"---------------- Menu de Cajero ----------------"<<endl;
	cout<<"1. Consultar Saldo"<<endl;
	cout<<"2. Depositar Saldo"<<endl;
	cout<<"3. Retirar Dinero"<<endl;
	cout<<"4. Salir"<<endl;
}

double consultar(double total)
{
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"\nsu saldo actual es de: "<<total;
	return total;
}

double depositar(double total)
{
	double deposito=0;
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"\nIngrese la cantidad que va a depositar: "; cin>>deposito;
	total=deposito+total;
	cout<<"Su nuevo saldo es de: "<<total;
	return total;
}

double retirar(double total)
{
	double retiro=0;
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"\ningrese la cantidad que quiere retirar: "; cin>>retiro;
	if(retiro>total)
	{
		cout<<"No puede realizar el retiro ya que no cuenta con el dinero suficiente"<<endl;
		cout<<"Actualmente cuenta con: "<<total;
	}
	else
	{
		total=total-retiro;
		cout<<"transaccion realizada, su saldo ahora es de: "<<total;
	}
	return total;
}
 
void cajero(double total)
{
	system("cls");
	int opcion;
	do
	{
	
	menucajero();
	cout<<"\n Escoja la opcion que desea: "; cin>>opcion;
	
	switch(opcion)
	{
		case 1:
			total=consultar(total);
			break;
		case 2:
			total=depositar(total);
			break;
		case 3:
			total=retirar(total);
			break;
		case 4:
			cout<<"Que tenga buen dia"<<endl;
			break;
	}
	cout<<"\n\nDesea realizar otra transaccion (s/n): ";cin>>opc;
	if(opc=="s")
	{
		system("cls");
		cajero(total);
	}
	else
	{
		cout<<"";
	}
	}while(opcion>=4);
} 


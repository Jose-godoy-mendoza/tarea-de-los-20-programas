#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
using namespace std; 

void posicion(int x,int y)
{  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}
 
void multigrafica(){
	system("cls");
	int a, b, c, d, e, f, repetir, resultado=a*b;
	string opcion;
	//primera unidad= pu, primer decimal= pd
	int pua, pda, pub, pdb, uc, dc, ue, de;
	cout<<("Ingrese la Cantidad a multiplicar: ");
	cin>>a;
	cout<<("Ingrese la otra cantidad a multiplicar: ");
	cin>>b;
	posicion(19,14);cout<<a*b;
	
	posicion(20,6);cout<<a;
	posicion(18,8);cout<<"X";
	posicion(20,8);cout<<b;
	posicion(15,9);cout<<"________________";
	
	pua = a%10; a /= 10;
	pda = a%10; a /= 10;
    pub = b%10; b /= 10;
	pdb = b%10; b /= 10;

	c=pub*pua;
	uc = c%10; c /= 10;
	dc = c%10; c /= 10;
	
	d=pub*pda+dc;
	posicion(20,11);cout<<d<<uc;
	
	e=pdb*pua;
	ue = e%10; e /= 10;
	de = e%10; e /= 10;
	
	f= pdb*pda + de;
	posicion(19,12);cout<<f<<ue;
	posicion(15,13);cout<<("____________\n\n");
	
	cout<<"\n\n Desea ver otra grafica de multiplicacion (s/n): "; cin>>opcion;
	if(opcion=="s")
	{
		multigrafica();
	}
	else
	{
		cout<<"Nos vemos"<<endl;
	}
}


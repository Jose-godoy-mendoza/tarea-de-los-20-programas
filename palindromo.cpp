#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;


void palindromo()
{
	system("cls");
	string texto, opc;
	int numero;
    int aux = 0, igual = 0;
	cout << "Ingrese la palabra a evaluar: ";
   	getline(cin >> ws, texto);
    
    for(int i = texto.length() - 1; i >= 0; i--) 
	{
        if(texto[i] == texto[aux]) 
		{
            igual++;
    	}
        aux++;
    }
    
    if(texto.length() == igual) 
	{
        cout << "La palabra o numero ingresada es palindromo" << endl;
    } else 
	{
        cout << "La palabra o numero ingresada no es palindromo" << endl;
    }
    
    cout<<"\n\n Desea ver si otra palabra o numero es palindromo (s/n): "; cin>>opc;
	if(opc=="s")
	{
		palindromo();
	}
	else
	{
		cout<<"Nos vemos"<<endl;
	}
}


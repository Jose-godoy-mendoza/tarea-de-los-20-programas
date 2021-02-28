#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void tablas1a10()
{
	system("cls");
	for (int numeroDeTabla = 1; numeroDeTabla <= 10; numeroDeTabla++) 
	  {
	  
	  	for (int x = 1; x <= 12; x++) 
		{
		    int resultado = x * numeroDeTabla;
		    printf("%d x %d = %d\n", numeroDeTabla, x, resultado);
	  	}
	  	cout<<"\n--------------------\n"<<endl;
	  }
	
}


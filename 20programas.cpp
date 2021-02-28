#include "operaciones.cpp"
#include "parimpar.cpp"
#include "conversiones.cpp"
#include "palindromo.cpp" 
#include "arabigos.cpp"
#include "numaletra.cpp"
#include "deciletras.cpp"
#include "tabla.cpp"
#include "tablas1a10.cpp"
#include "multigrafica.cpp"
#include "decabin.cpp"
#include "decihexa.cpp"
#include "figuras.cpp"
#include "punto.cpp"
#include "cajero.cpp"
#include "hipotenusa.cpp"
#include "animacion.cpp"
#include "adivinanumero.cpp"
#include "grados.cpp"
#include "ordenamiento.cpp" //arreglar

#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

//menu principal
void menu()
{
	cout<<"------------- Menu de los 20 programas -------------"<<endl;
	cout<<"1. Suma, resta, multiplicacion y division de 2 numeros"<<endl;
	cout<<"2. Par o impar"<<endl; 
	cout<<"3. Conversiones (km, millas, etc)"<<endl;
	cout<<"4. Determinar si una palabra o numero es palindromo"<<endl;
	cout<<"5. De numeros arabigos a Romanos"<<endl;
	cout<<"6. Conversion de numeros enteros a letras"<<endl;
	cout<<"7. Conversion de numeros con decimales a letras"<<endl;
	cout<<"8. Tabla de Multiplicar"<<endl;
	cout<<"9. Tablas del 1 al 10"<<endl;
	cout<<"10. Multiplicacion grafica"<<endl;
	cout<<"11. De decimal a binario"<<endl;
	cout<<"12. De decimal a Hexadecimal"<<endl;
	cout<<"13. Figuras geometricas"<<endl;
	cout<<"14. Mover punto por la pantalla"<<endl;
	cout<<"15. Cajero "<<endl;
	cout<<"16. Calcular hipotenusa"<<endl;
	cout<<"17. Ordenamiento ascendente y descendente"<<endl;
	cout<<"18. Adivinar numero"<<endl;
	cout<<"19. Conversion de Grados"<<endl;
	cout<<"20. Animacion"<<endl;
	
	cout<<"\n Elija la opcion que desee: ";
}

int main()
{
	int opcion;
	double total=0;
	menu();
	cin>>opcion;

	switch(opcion)
	{
		case 1:
			operaciones();
			break;
		case 2:
			parimpar();
			break;
		case 3:
			conversiones();
			break;
		case 4:
			palindromo();
			break;
		case 5:
			arabigo();
			break;
		case 6:
			numaletra();
			break;
		case 7:
			deciletras();
			break;
		case 8:
			tabla();
			break;
		case 9:
			tablas1a10();
			break;
		case 10:
			multigrafica();
			break;
		case 11:
			decabin();
			break;
		case 12:
			decihexa();
			break;
		case 13:
			figuras();
			break;
		case 14:
			punto();
			break;
		case 15:
			cajero(total);
			break;
		case 16:
			hipotenusa();
			break;
		case 17:
			ordenamientos();
			break;
		case 18:
			adivinar();
			break;
		case 19:
			grados();
			break;
		case 20:
			animacion();
			break;
	}
	return 0;
}



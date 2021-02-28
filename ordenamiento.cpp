#include <iostream>
using namespace std;

void ordenamientos(){
	system("cls");
	int vector, cantidad, orden[20];
	string opcion;
	int i, j;
	int aux;
	
	cout<<"Cuantos numeros desea ordenar de forma ascendente y descendente: "; cin>>vector;
	for(int k=1; k<=vector;k++)
	{
		cout<<"Ingrese el valor del numero "<<k<<": ";
		cin>>orden[k];
	}
	
	for (i=0;i<vector;i++){
		for(j=0;j<vector-1;j++){
			if (orden[j] > orden[j+1]){
				aux=orden[j];
				orden[j] = orden[j+1];
				orden[j+1] = aux;
			}
		}
	}
	cout<<"\nEn orden ascendente es: "<<endl;
	for(i=0;i<vector;i++)
	{
		cout<<orden[i]<<"  ";
	}
	
	for (i=0;i<vector;i++){
		for(j=0;j<vector-1;j++){
			if (orden[j] < orden[j+1]){
				aux=orden[j];
				orden[j] = orden[j+1];
				orden[j+1] = aux;
			}
		}
	}
	cout<<"\n-----------------------------"<<endl;
	cout<<"\nEn orden Descendente es: "<<endl;
	for(i=0;i<vector;i++)
	{
		cout<<orden[i]<<"  ";
	}
	
	cout<<"\n\nDesea volver a intentarlo (s/n): "; cin>>opcion;
	if(opcion=="s")
	{
		ordenamientos();
	}
	else
	{
		cout<<"Nos vemos"<<endl;
	}
}




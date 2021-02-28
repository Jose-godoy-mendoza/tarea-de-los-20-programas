#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

void hipotenusa(){
	system("cls");
 int co,ca;
 float h;
 
 cout<<"Ingrese el cateto opuesto:";
 cin>>co;
 
 cout<<"Ingrese el cateto adyacente:";
 cin>>ca;
 
 h=sqrt (pow(co,2)+pow(ca,2));
 
 cout<<"la hipotenusa es:"<<h;
 
 cin.get();
}

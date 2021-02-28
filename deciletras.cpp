#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void deciletras()
{
	system("cls");
	float x;
	string opcion;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
    if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
    else
    {
        if(x>=900)   {cout<<"NOVECIENTOS  ";	x=x-900;}
        if(x>=800)   {cout<<"OCHOCIENTOS  ";	x=x-800;}
        if(x>=700)   {cout<<"SETECIENTOS ";		x=x-700;}
        if(x>=600)   {cout<<"SEISCIENTOS ";		x=x-600;}
        if(x>=500)   {cout<<"QUINIENTOS ";		x=x-500;}
        if(x>=400)   {cout<<"CUATROCIENTOS ";	x=x-400;}
        if(x>=300)   {cout<<"TRESCIENTOS ";		x=x-300;}
        if(x>=200)   {cout<<"DOSCIENTOS ";		x=x-200;}
        if(x>100)    {cout<<"CIENTO ";		x=x-100;}
        if(x>=100)   {cout<<"CIEN ";		x=x-100;}
        if(x>90.999) {cout<<"NOVENTA Y ";	x=x-90; }
        if(x>=90)   {cout<<"NOVENTA ";		x=x-90; }
        if(x>80) 	{cout<<"OCHENTA Y ";	x=x-80; }
        if(x>=80)   {cout<<"OCHENTA ";		x=x-80; }
        if(x>70) 	{cout<<"SETENTA Y ";	x=x-70; }
        if(x>=70)   {cout<<"SETENTA ";		x=x-70; }
        if(x>60) 	{cout<<"SESENTA Y ";	x=x-60; }
        if(x>=60)   {cout<<"SESENTA";		x=x-60; }
        if(x>50) 	{cout<<"CINCUENTA Y ";	x=x-50; }
        if(x>=50)   {cout<<"CINCUENTA";		x=x-50; }
        if(x>40) 	{cout<<"CUARENTA Y ";	x=x-40; }
        if(x>=40)   {cout<<"CUARENTA";		x=x-40; }
        if(x>30) 	{cout<<"TREINTA Y ";	x=x-30; }
        if(x>=30)   {cout<<"TREINTA";		x=x-30; }
        if(x>20) 	{cout<<"VEINTI";		x=x-20; }
        if(x>=20)   {cout<<"VEINTE";	x=x-20; }
        if(x>=16)   {cout<<"DIECISEIS ";x=x-16; }
        if(x>=15)   {cout<<"QUINCE";	x=x-15; }
        if(x>=14)   {cout<<"CATORCE";	x=x-14; }
        if(x>=13)   {cout<<"TRECE";		x=x-13; }
        if(x>=12)   {cout<<"DOCE";		x=x-12; }
        if(x>=11)   {cout<<"ONCE";		x=x-11; }
        if(x>=10)   {cout<<"DIEZ";		x=x-10; }
        if(x>=9)    {cout<<"NUEVE";		x=x-9;  }
        if(x>=8)    {cout<<"OCHO";		x=x-8;  }
        if(x>=7)    {cout<<"SIETE";		x=x-7;  }
        if(x>=6)    {cout<<"SEIS";		x=x-6;  }
        if(x>=5)    {cout<<"CINCO";		x=x-5;  }
    	if(x>=4)    {cout<<"CUATRO";	x=x-4;  }
        if(x>=3)    {cout<<"TRES";		x=x-3;  }
        if(x>=2)    {cout<<"DOS";		x=x-2;  }
        if(x>=1)    {cout<<"UNO";		x=x-1;  }
        if(x>=0.9)  {cout<<" CON NUEVE CENTIMOS"; 	x=x-0.9;}
        if(x>=0.8)  {cout<<" CON OCHO CENTIMOS"; 	x=x-0.8;}
        if(x>=0.7)  {cout<<" CON SIETE CENTIMOS"; 	x=x-0.7;}
        if(x>=0.6)  {cout<<" CON SEIS CENTIMOS"; 	x=x-0.6;}
        if(x>=0.5)  {cout<<" CON CINCO CENTIMOS"; 	x=x-0.5;}
        if(x>=0.4)  {cout<<" CON CUATRO CENTIMOS"; 	x=x-0.4;}
        if(x>=0.3)  {cout<<" CON TRES CENTIMOS"; 	x=x-0.3;}
        if(x>=0.2)  {cout<<" CON DOS CENTIMOS"; 	x=x-0.2;}
        if(x>=0.1)  {cout<<" CON UNO CENTIMOS"; 	x=x-0.1;}
        }
        cout<<"\n\n Desea pasar otro numero con decimal a letras (s/n): "; cin>>opcion;
        if(opcion=="s")
        {
        	deciletras();
		}
		else
		{
			cout<<"nos vemos"<<endl;
		}
}

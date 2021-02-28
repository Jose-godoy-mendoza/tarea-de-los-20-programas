#include <iostream>
#include <windows.h>
using namespace std;

 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 


void animacion(){
	int i;
	int yy;
	int e, v;
	int vuelta, vueltas, vuelT;
	int vv=20;
	int ee=10;
	vueltas=0;
	vuelta=0;
	vuelT=0;
	e=2;
	v=12;
	
	system("cls");
	
	for(i=2;i<85;i++){
			/*for(x=0;x<5;x++){
    		gotoxy(x,10);
			}*/
		gotoxy(i,0);
		cout<<"x"<<endl;
		Sleep(10);
		gotoxy(i,22);
		cout<<"x";
	
	if (i++==i){
	system("cls");
	}
	}
	
	for (i=0;i<23;i++)
	{
		gotoxy(0,i);
		cout<<"x";
		Sleep(10);
		
		gotoxy(86,i);
		cout<<"x";
		Sleep(10);
	}
	

		while(vueltas<9)
		{
		for (yy=2;yy<41;yy++)
		{
			gotoxy(yy,e);
			Sleep(10);
			cout<<"-";
			if(yy++==yy)
				{
					system("cls");
				}
		}
					
			for (yy=0;yy<40;yy++)
		{
			gotoxy(yy=yy+2,v);
			Sleep(10);
			cout<<"UMG";
			if(yy++==yy)
				{
					system("cls");
				} 
		}
		for (yy=42;yy<80;yy++)
		{
			gotoxy(yy=yy+2,e);
			Sleep(10);
			cout<<"UMG";
			
			gotoxy(yy,v);
			Sleep(10);
			cout<<"-";
			
				if(yy++==yy)
				{
					system("cls");
				}
		}
		v++;
		e++;
		vueltas++;
	}
			//inicio del segundo ciclo, reversa.
				//
			system("cls");
				//
			//inicio del segundo ciclo, reversa.
			

		while(vuelta<9)
		{
		for (yy=0;yy<40;yy++)
		{
			gotoxy(yy=yy+2,ee);
			Sleep(10);
			cout<<"UMG";
			if(yy++==yy)
				{
					system("cls");
				}
		}			
			for (yy=2;yy<41;yy++)
		{
			gotoxy(yy,vv);
			Sleep(10);
			cout<<"-";
			if(yy++==yy)
				{
					system("cls");
				} 
		}
		for (yy=42;yy<80;yy++)
		{
			gotoxy(yy=yy+2,vv);
			Sleep(10);
			cout<<"UMG";
			
			gotoxy(yy,ee);
			Sleep(10);
			cout<<"-";
			
				if(yy++==yy)
				{
					system("cls");
				}
		}
		vv--;
		ee--;
		vuelta++;
	}
	
	while(vuelT<3){
		for(i=2;i<85;i++){
			/*for(x=0;x<5;x++){
    		gotoxy(x,10);
			}*/
		gotoxy(i,0);
		cout<<"x"<<endl;
		Sleep(10);
		gotoxy(i,22);
		cout<<"x";
	
	if (i++==i){
	system("cls");
	}
	}
	
	for (i=0;i<23;i++)
	{
		gotoxy(0,i);
		cout<<"x";
		Sleep(10);
		
		gotoxy(86,i);
		cout<<"x";
		Sleep(10);
	}
	
	vuelT++;

		}
}


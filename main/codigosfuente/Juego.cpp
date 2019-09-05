#include "../cabeceras/Juego.h"
#include "../cabeceras/Consola.h"
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *@date: march/2017
  *
  *
  */
void JUEGO::pintarLimites(){
	for(int i = 2; i < 118; i++){
		gotoxy(i,3); cout<<char(205);
		gotoxy(i,28);cout<<char(205);
	}
	for(int i = 4; i < 28; i++){
		gotoxy(2,i);  cout<<char(186);
		gotoxy(117,i);cout<<char(186);
	}
	gotoxy(2,3);   cout<<char(201);
	gotoxy(117,3); cout<<char(187);
	gotoxy(2,28);  cout<<char(200);
	gotoxy(117,28);cout<<char(188);
}
void JUEGO::mostrarInstrucciones(){
	cout<<"\n\n\t\t\t                          INSTRUCCIONES DEL JUEGO"<<endl;
	cout<<"\t\t\t                          ======================="<<endl;
	cout<<"\n\n\n\t                              ???    "<<endl;
	cout<<"\t                              ?"<<char(202)<<"?    "<<endl;
	cout<<"\t                              ???    "<<endl;
	cout<<"\t                           ???   ???"<<endl;
	cout<<"\tPara mover Use las teclas: ?"<<char(185)<<"? "<<char(206)<<" ?"<<char(204)<<"?"<<endl;
	cout<<"\t                           ???   ???"<<endl;
	cout<<"\t                              ???  "<<endl;
	cout<<"\t                              ?"<<char(203)<<"?  "<<endl;
	cout<<"\t                              ???  "<<endl;
}

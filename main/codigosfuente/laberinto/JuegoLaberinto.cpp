#include "../../cabeceras/laberinto/JuegoLaberinto.h"
#include "../../cabeceras/Consola.h"
#include "../../cabeceras/laberinto/Personaje.h"
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *@date: march/2017
  *
  *
  */
JUEGO_LABERINTO::JUEGO_LABERINTO(){
	
}
void JUEGO_LABERINTO::empezarJuego(){
	system("CLS");
	mostrarInstrucciones();
	system("CLS");
	pintarLimites();
	if(!cargarMapa("recursos/archivos/laberinto/mapa1.AndherssonSalazar")){
		cout<<"Mapa no encontrado"<<endl;
		getche();
		return;
	}
	PERSONAJE personaje(3,5,3,ABAJO, mapa);
	while(!juegoTerminado){
		personaje.borrar();
		personaje.mover();
		personaje.pintar();
		if(personaje.gano()){
			gotoxy(50,20);
			cout<<"Bien hecho has ganado"<<endl;
			juegoTerminado=true;
		}
		if(teclaEstaPresionada(ESC)){
			juegoTerminado=true;
		}
		Sleep(30);
	}
}
void JUEGO_LABERINTO::mostrarInstrucciones(){
	JUEGO::mostrarInstrucciones();
	getche();
}
void JUEGO_LABERINTO::pintarLimites(){
	JUEGO::pintarLimites();
}
bool JUEGO_LABERINTO::cargarMapa(char* nombreArchivo){
	FILE * archivo;
    archivo = fopen (nombreArchivo,"rb");
    if (archivo==NULL){
    	gotoxy(25, 15);
        cout<<"ERROR: No existe el mapa "<<nombreArchivo;
        getch();
        return false;
    }
    char linea[117];
    int j=3;
    fread(&linea,sizeof(linea),1,archivo);
    while(!feof(archivo)){
    	gotoxy(2,j);
    	for(int k=0; k<116; k++){
    		char a=linea[k];
    		mapa[j-3][k]=1;
    		switch(a){
    			case '0':
    				cout<<" ";
    				mapa[j-3][k]=0;
    				break;
    			case '1':
    				cout<<char(205);
    				break;
    			case '2':
    				cout<<char(186);
    				break;
    			case '3':
    				cout<<char(201);
    				break;
    			case '4':
    				cout<<char(187);
    				break;
    			case '5':
    				cout<<char(200);
    				break;
    			case '6':
    				cout<<char(188);
    				break;
    			case '7':
    				cout<<char(202);
    				break;
    			case '8':
    				cout<<char(203);
    				break;
    			case '9':
    				cout<<char(204);
    				break;
    			case 'a':
    				cout<<char(185);
    				break;
    			case 'b':
    				cout<<char(206);
    				break;
    			default:
    				cout<<a;
    				break;
			}
		}
		fread(&linea,sizeof(linea),1,archivo);
    	j++;
	}
    fclose(archivo);
    return true;
}

#include <ctype.h>
#include "cabeceras/Consola.h"
#include "cabeceras/nave/JuegoNave.h"
#include "cabeceras/serpiente/JuegoSerpiente.h"
#include "cabeceras/laberinto/JuegoLaberinto.h"
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *@date: march/2017
  *
  *
  */
int main() {
	int opcion;
	do{
		opcion=0;
		ocultarCursor();
		do{
	    	cout<<"\t\t\t\t\t\t\tJUEGOS "<<endl;
	    	cout<<"\t\t\t\t\t\t\t======"<<endl;
	    	cout<<"\n\n\t\t[1].  NAVE"<<endl;
	    	cout<<"\n\t\t[2].  SNAKE"<<endl;
	    	cout<<"\n\t\t[3].  LABERINTO"<<endl;
	    	cout<<"\n\t\t[4].  SALIR"<<endl;
	    	cout<<"\n\t\t\tIngrese la opcion: [ ]";
	    	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t   @author: Andhersson Salazar";
    		cout<<"\n\t\t\t\t   @contact: andhersson.salazar@gmail.com"<<endl;
    		gotoxy(44,12);
	    	char a=getchar();
	    	switch(a){
	    		case '1':
	    			opcion=1;
	    			break;
	    		case '2':
	    			opcion=2;
	    			break;
	    		case'3':
	    			opcion=3;
	    			break;
	    		case'4':
	    			opcion=4;
	    			break;
	    		default:
	    			break;
			}
	    	system ("CLS");
        }while(opcion<1|| opcion>4);
		switch(opcion){
			case 1:{
				JUEGO_NAVE juegoNave;
		        juegoNave.empezarJuego();
		        system("CLS");
				cout<<"\n\n\n\t\t\t\tJUEGO FINALIZADO!!!";
				getche();
				break;
			}
			case 2:{
				JUEGO_SERPIENTE juegoSerpiente;
				juegoSerpiente.empezarJuego();
				system("CLS");
				cout<<"\n\n\n\t\t\t\tJUEGO FINALIZADO!!!";
				getche();
				break;
			}
			case 3:{
				JUEGO_LABERINTO juegoLaberinto;
				juegoLaberinto.empezarJuego();
				system("CLS");
				cout<<"\n\n\n\t\t\t\tJUEGO FINALIZADO!!!";
				getche();
				break;
			}
		}
		system("CLS");
    }while(opcion!=4);
    cout<<"\n\n\n\t\t\t\tVUELVE PRONTO A JUGAR VIDEOJUEGOS!!!";
    cout<<"\n\n\n\t\t\t\t   @author: Andhersson Salazar";
    cout<<"\n\t\t\t\t   @contact: andhersson.salazar@gmail.com\n\n\n\n\n";
	getche();
	return 0;
}

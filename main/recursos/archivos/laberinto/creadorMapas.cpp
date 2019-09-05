#include <iostream>
#include <conio.h>
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *
  *
  */
using namespace std;

FILE* archivo;
FILE* archivoTexto;
bool crearArchivo(const char* nombreArchivo){
	archivo = fopen(nombreArchivo,"wb+");
    archivoTexto=fopen("borrador.txt", "r");
    if ((archivo==NULL) || (archivoTexto==NULL)){
        cout<<"\n\n\n ERROR: No existe el mapa mapa1.AndherssonSalazar"<<endl;
        getch();
        return false;
    }
    char linea[116];
	do{
    	fread(&linea,sizeof(linea),1,archivoTexto);
    	fwrite(&linea,sizeof(linea),1,archivo);
	}while(!feof(archivoTexto));
    cout<<endl<<endl<<endl;
    fclose(archivo);
    fclose(archivoTexto);
    return true;
}
bool mostrarArchivo(const char* nombreArchivo){
	archivo = fopen (nombreArchivo,"rb");
    if (archivo==NULL){
        cout<<"\n\n\n ERROR: No se puede abrir el mapa mapa1.AndherssonSalazar"<<endl;
        getch();
        return false;
    }
    char linea2[117];
    fread(&linea2,sizeof(linea2),1,archivo);
    while(!feof(archivo)){
    	cout<<endl;
    	for(int k=0; k<116; k++){
    		char a=linea2[k];
    		switch(a){
    			case '0':
    				cout<<" ";
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
		fread(&linea2,sizeof(linea2),1,archivo);
	}
	fclose(archivo);
	return true;
}
int main(){
	if(crearArchivo("mapa1.AndherssonSalazar")){
		system("CLS");
		cout<<"archivo creado correctamente"<<endl;
		if(mostrarArchivo("mapa1.AndherssonSalazar")){
			cout<<"\narchivo abirto correctamente"<<endl;
		}
	}
}

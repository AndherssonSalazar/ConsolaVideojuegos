#ifndef SERPIENTE_H
#define SERPIENTE_H
/**
  *
  *
  *@author: Andhersson Salazar
  *@contact: andherson.salazar@gmail.com
  *@date: march/2017
  *
  *
  */
class SERPIENTE{
	private:
		int x, y, cuerpo[1000][2], tamagno=1, direccion, velocidad, puntaje=0;
		char tecla;
	public:
		SERPIENTE(int _x, int _y, int _direccion, int _velocidad);
		void guardarPosicion();
		void pintar();
		void borrar();
		void mover();
		int obtenerVelocidad();
		void cambiarDireccion();
		void cambiarVelocidad();
		void comer(class COMIDA &comida);
		bool morir();
		void pintarPuntos();
};

#endif

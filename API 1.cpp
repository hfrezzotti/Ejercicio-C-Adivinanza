//API 1

/*
-- Al inicio del juego, se debe solicitar al usuario que ingrese el rango de
números para el juego y la cantidad de intentos máximos
.
-- El programa debe generar un número aleatorio dentro del rango
ingresado por el usuario.

-- El programa debe permitir al usuario la posibilidad de adivinar el
número generado en la cantidad de intentos especificada.

-- El programa debe indicar si el número ingresado por el usuario es
mayor o menor que el número generado.

-- El programa debe indicar al usuario cuántos intentos lleva y cuántos
intentos le quedan.

--El programa debe permitir al usuario ingresar varios números para
intentar adivinar el número generado, y guardarlos en un
array.

--El programa debe verificar si el número ingresado ya fue ingresado
anteriormente.

--El programa debe ordenar los números ingresados por el usuario de
manera ascendente.

--El programa debe indicar al usuario los números que ya fueron
ingresados ordenados.

--El juego debe terminar cuando el usuario adivina el número o se
quedan sin intentos
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>//Evita cierre del ejecutable
#include <time.h>

using namespace std;

int main () {
	int numero;//variable que almacena numero que digite el usuario
	int dato;//Almacena el numero aleatorio
	int contador=0;
	int intentosRestantes;
	int intentosRealizados=1;
	int limiteInferior;
	int limiteSuperior;
	int opcionesEscogidas [100];
	
	/*Instrucciones jugador*/
	cout<<"Ingrese el limite inferior: "; cin>>limiteInferior;
	cout<<"Ingrese el limite superior: "; cin>>limiteSuperior;
	cout<<"Ingrese el limite de intentos: "; cin>>intentosRestantes;
			
	/*Creacion del numero aleatorio*/
	srand(time(NULL));
	dato=limiteInferior	+ rand()% (limiteSuperior-limiteInferior);
	
	contador=intentosRestantes;
	
	/*Iniciando el ciclo del juego*/
	
	do{
		
	 	cout<<"\nDigite un numero: \n";cin>>numero;
	
	 			 	
		if (numero>dato){
			cout<<"Digite un numero menor";
			cout<<"\nIntentos restantes: "<<contador--;
			cout<<"\nIntentos realizados: "<<intentosRealizados++;
		}
		else if (numero<dato){
			cout<<"Digite un numero mayor";
			cout<<"\nIntentos restantes: "<<contador--;
			cout<<"\nIntentos realizados: "<<intentosRealizados++;
		
		}else if (numero == dato){
			cout<<"Felicitaciones, gano el juego";
			return 0;
		}
	}while (contador!=-1);
	
	cout<<"\nLo siento, no hay mas intentos\n";	
	
	system("pause");
	return 0;
		
}
	

	

#include"stdio.h"
//inicializar un arreglo de 10 elementos, y con un ciclo "for" verificar cual de los elementos es el mayor
int main(){

  int i;
  int numeros[10]={34, 11, 23, 19, 21, 10, 67, 2, 3, 9};
  int mayor=0; // se empieza suponiendo que el subíndice 0 es el mayor, empieza de acuerdo a la posición


  for(i=0; i < 10; i++){ //el arreglo va de acuerdo al arreglo, las posiciones
   
   if(numeros[i] > numeros[mayor]){ //los de arreglo nos muestra el número
   	    mayor=i;
   }
  }

  printf("\nEl elemento de mayor valor en el arreglo es: %d", numeros[mayor]);
  printf("\n\n Y esta en la posicion: %d", mayor);

	return 0;
}
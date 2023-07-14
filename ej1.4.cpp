#include<stdio.h>
/*hacer una función que reciba como argumento un año y devuelva verdadero si es bisiesto, 
falso en caso contrario. Considera que un año es bisiesto si es divisible entre 4 y no es 
divisible entre 100, o es divisible entre 400  int EsBisiesto(int)*/
int EsBisiesto(int);
int main(){
	int año;
	printf("Digite un año: ");
	scanf("%d",&año);
   /*cuando se harán las sentencias ya en la función principal, se pone la función que llamamos
   y esta función pues ya sabe lo que tiene que hacer, por lo tanto, en el argumento de la función se le pone el año en este caso,
   si no, pues cualquier otro dato que se solicite según el programa*/
   if(EsBisiesto(año)){
   	printf("%d es un año bisiesto.",año);
   }
  else {
  	printf("%d no es un año bisiesto.",año);
  }

	return 0;
}

int EsBisiesto(int a){

  if(a%4 == 0){
    return 1;
  }
  else if((a%100 != 0) || (a%400 == 0)){
    return 1;
  }
  else 
    return 0;

}
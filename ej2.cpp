#include<stdio.h>
/* DEfine una función que reciba como argumento un caracter y devuelva verdadero si es
una letra, ya sea mayúscula o minúscula; falso si no lo es: int EsLetra(char)*/
int EsLetra(char);
int main(){
 char car;
 printf("Digite cualquier carácter: ");
 scanf("%c",&car);

  if(EsLetra(car)){
  	printf("Pusiste una letra, bien:).");
  }
  else 
  	printf("Pusiste un número jeje :).");

	return 0;
}
int EsLetra(char l){

  if(((l >= 'a') && (l <= 'z')) || (l >= 'A') && (l <= 'Z')){
  	return 1;
  }
  else 
  	return 0;

}
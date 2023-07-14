#include<stdio.h>
/*hacer una función que reciba como argumento un año y devuelva verdadero si es bisiesto, 
falso en caso contrario. Considera que un año es bisiesto si es divisible entre 4 y no es 
divisible entre 100, o es divisible entre 400  int EsBisiesto(int)*/
int EsBisiesto(int);
int main(){

 int año;
 printf("Digite un año y te diré si es bisiesto o no: ");
 scanf("%d",&año);
   
   if(EsBisiesto(año)){
   	printf("El año %d sí es bisiesto :).",año);
   }
  else{
  	printf("El año %d no es bisiesto :(.",año);
  }

	return 0;
}
int EsBisiesto(int a){

   if(a%4 == 0){
   	return 1;
   }
   else if(a%100 != 0){
   	return 1;
   }
   else if(a%400 == 0){
   	return 1;
   }
   else 
   	return 0;
}
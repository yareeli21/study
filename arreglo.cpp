#include<stdio.h>
//pedir 5 calificaciones, declarando un arreglo de flotantes
//un arreglo es un número de elementos, pueden ser números o caracteres, empieza desde 0 porque esa es la posición inicial
int main(){
   
   float calificaciones[5]; //declarado nuestro primer arreglo
   float promedio=0; //para calcular el promedio.
   int i;

   printf("Se calculara el promedio de 10 calificaciones!!\n");

   for(i=0; i < 5; i++){ //este for está dirigido al arreglo de flotantes, se irá repitiendo desde 0 hasta menor a 5, para que se cicle 5 veces exactas

     printf("Dame la calificación %d: ", i+1); //por qué i+1?, porque se requiere que se muestre "calificación 1", como el ciclo empieza desde 0, pues no sería muy bien visto que apareciera el mensaje de "calificación 0"
     scanf("%f", &calificaciones[i]); //aquí el número ingresado de guardará en la posición i del arreglo de calificaciones

     promedio += calificaciones[i]; //se irá sumando la calificación de cada posición de 1
     printf("\n");
   }

   printf("El promedio de las calificaciones es: %.2f \n\n", promedio/5); //se imprimirá el promedio haciendo la operación desde printf

	return 0;
}
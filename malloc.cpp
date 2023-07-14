#include<stdio.h>
#include<stdlib.h>
//se liberará memoria para escribir una cadena
int main(){
int longitud; //se le pedirá la usuario de qué longitud será la cadena
char* cadena; //puntero apuntado a una variable de caracteres llamada cadena

printf("Ingresa la longitud de la cades: ");
scanf("%d", &longitud);

 //asignar la memoria dinámicamnete
 cadena=(char*)malloc((longitud + 1)*sizeof(char));

 if(cadena == NULL){
 	printf("Error");
 	return 1;
 }
 printf("Ingrese la cadena: ");
 scanf("%s",cadena);
 printf("La cadena es: %s\n",cadena);

 //liberar la memoria asignada
 free(cadena);
 

	return 0;
}
#include<stdio.h>
#include<string.h>
/*en este se desea hacer un programa que reciba como argumentos en la línea de comandos cuatro cadeas, además del nombre del programa. 
Las tres primeras cadenas corresponden a nombres de archivos, por ejemplo: arch1.txt, arch2.txt y arch3.txt. La cuarta cadena corresponde a una
palabra *(argv+4). El programa deberá abrir el primer archivo, arch1.txt, en modo lectura, y los otros en modo escritura. A través de una función
llama Divide, deberás copiar todas las palabras contenidas en arch1.txt a arch2.txt que sean lexicográficamente menores o iguales a la cadena en *(argv+4)
y las que sean mayores lexicográficamente a arch3.txt.  */
void Divide(FILE*, FILE*, FILE*, char[]);
int main(int argc, char *argv[]){

 FILE *a1=fopen(*++argv, "r");
 FILE *a2=fopen(*++argv, "w");
 FILE *a3=fopen(*++argv, "w");
 char *pal=*++argv; //esto hace referencia a la corricion de las cadenas, que trabaje con argv+4

  Divide(a1, a2, a3, pal);

	return 0;
}
void Divide(FILE *a1, FILE *a2, FILE *a3, char pal[]){

  char pal2[20];
  while(fscanf(ent,"%s",pal2)!=EOF){
  	if(strcmp(pal2,pal)<=0)
  		fprintf(a2,"%s",pal2);
  }
  else
  	fprintf(a3,"%s",pal2);

}
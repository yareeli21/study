#include<stdio.h>
int CreaTexto(FILE*);
int main(int argc, char *argv[]){

  FILE *sal=fopen(*++argv, "w"); //se pone el nombre del archivo y el mood en que se abre, se pone *++argv porque hace referencia a sal, de acuerdo a la línea de parámetros
  
  CreaTexto(sal); //se llama a la función
  fclose(sal);
	return 0;
}
int CreaTexto(FILE *sal){

  int c;
  int contador=0;

  while((c=getchar())!='@'){ //se irán poniendo caracteres mientras que sea diferente de @ 
  	fputc(c,sal); //se irá poniendo cada caracter en sal, porque se supone que ya está abierto en mood escritura
  	contador++; //va aumentando el contador
  }
  return contador;

}
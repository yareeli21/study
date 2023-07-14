#include<stdio.h>
#include<string.h>
/*definir una función que reciba como argumentos dos apuntadores a archivos de texto, ent y sal, y una cadena pal. 
La función deberá copiar todas las cadenas contenidas en el archivo al que apunta ent al archivo sal, con excepción de las 
ocurrencias de pal en ent*/
void EliminaPal(FILE*, FILE*, char[]);
int main(int argc, char *argv[]){
  char palabra[20];
  FILE *entrada=fopen(*++argv, "r");
  FILE *salida=fopen(*++argv, "w");
  printf("Ingrese la palabra que desea eliminar: ");
  scanf("%s",palabra);

  EliminaPal(entrada, salida, palabra);

	return 0;
}
void EliminaPal(FILE *ent, FILE *sal, char pal[]){
  char pal2[20];
  while(fscanf(ent, "%s", pal2)!=EOF){
  	if(strcmp(pal,pal2)!=0){ //las cadenas las estamos ocupando en las instrucciones de fondo, por ejemplo en esta se pide comparar cada palabra con la palabra escrita y ver si es la misma o no
  		fprintf(sal, "%s", pal2); //aquí ya se están escribiendo/copiando al archivo
  	}
  }


}

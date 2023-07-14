#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*este programa desea leer todas las palabras del archivo de entrada, copiarlas a un arreglo char *pals[], ordenarlas mediante la  
función void Burbuja(char *pals[], int n), para luego guardar la spalabras ordenadas en el arreglo, en el archivo de salida. Por
ejemplo*/
void Burbuja(char *[], int);
void OrdenaArch(FILE*, FILE*);
int main(int argc, char *argv[]){

  FILE *entrada=fopen(*++argv,"r");
  FILE *salida=fopen(*++argv,"w");

  OrdenaArch(entrada, salida);

	return 0;
}
void OrdenaArch(FILE *ent, FILE *sal){

 char *pals[200], pal[20];
 int i=0, n;
 while(fscanf(ent, "%s",pal)!=EOF){ /*desde el archivo se están escribiendo cadenas, esto dice= mientras que cada cadena leída 
 del archivo sea diferente de fin de archivo y la parte de fscanf es "el archivo, el control_string que viene siendo una cadena, y se guarda
 en el arreglo pal, porque pues una palabra, una cadena siempre va en un arreglo" */
 	pals[i]=(char*)malloc(20); /* entonces cada vez que se lean y sean diferentes de fin de archivo, se le asigna espacio de memoria a pals
 	 para esa palabra, porque cada palabra tiene un espacio de 20*/
 	strcpy(pals[i],pal);// ya asigando el espacio, se va a copiar esa pal a pals para que pals entre a burbuja y se ordenen
 	i++; //aquí se está contando cuántas palabras fueron en total
 }

 Burbuja(pals,i);
 for(n=0; n<=i; n++){ //pals tiene como numerador de posiicones a n, por eso estamos trabajando con n, ahora en cada pos de pals está una cadena (palabra)
 	fprintf(sal, "%s", pals[n]);
 }

 void Burbuja(char *pals[], int n){
 	int i, j;
 	char t[20];

 	for(j=0; j<n-1;j++){
 		for(i=n-1; i>j; i--){
 			if(strcmp(pals[i], pals[i-1])<0){
 				strcpy(t,pals[i]);
 				strcpy(pals[i],pals[i-1]);
 				strcpy(pals[i-1],t);
 			}
 		}
 	}
 }
	
}
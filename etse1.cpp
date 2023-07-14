#include<stdio.h>
#include<string.h>
void SinEspacios(char *, char *);
int main(){

char frase[100];
char frase2[100];

 printf("Escribe una frase: ");
 scanf("%s", frase);

 SinEspacios(frase, frase2);

	return 0;
}

void SinEspacios(char *palabra, char *palabra2){ //para que la frase no tenga espacios

  int i;

  while(*palabra)



}
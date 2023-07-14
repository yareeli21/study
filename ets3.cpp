#include<stdio.h>
void transforma(int, char); //prototipo de la función
int main(){

 int numero; 
 char numeroc[10];

 printf("Digite un numero: ");
 scanf("%d",&numero);

 transforma(numero, numeroc);

	return 0;
}
void transforma(int n, char cad[]){
    int aux=n;
	int dig;
	int i=0;
	//primero obtener los digitos del numero para saber cuantos elementos tendrá la cadena al final 
	while(aux!=0){
      dig=n%10;
      aux=n/10;
      i++;
	}
	//ahora llenaremos la cadena de derecha a izquierda e iniciaremos con el fin de cadena
	cad[i]='\0';
    aux=n;
    //como iremos agregandolos de derecha a izquierda, inciamos en la ultima pos
    int pos=i-1, dig2;
    while(pos>=0){
    	dig2=aux%10;
    	aux/10;
    	cad[pos]=dig2 + '0'; //de esta forma de vuelven caracteres los digitos
    	pos--;//irá disminuyendo porque va desde el último al primero
    }
}

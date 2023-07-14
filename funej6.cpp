// potencia de manera recursiva
#include"stdio.h"

int potencia(int, int); //para una potencia se necesita una base y un exponente, el exponente irá disminuyendo en la recursión

int main(){

  int b,e;
  printf("Digite el numero y a que potencia se quiere elevar: ");
  scanf("%d %d",&b,&e);

  printf("La potencia de %d es: %d", b, potencia(b,e));

	return 0;
}

int potencia(int b, int e){

 //condiciones de siempre
	if(e == 1){
		return b;
	}
	else if (e == 0){
		return 1;
	}
	else 
		return b * potencia(b, e-1); //aquí está la recursión, y vemos que la base se está reduciendo.


}
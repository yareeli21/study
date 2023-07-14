#include<stdio.h>
//agregar un elemento en una posición específica del arreglo, se hará un corrimiento a la derecha
int main(){

 int i, posicion, elemento;
 int a[5];
 printf("Elementos del arreglo: \n");
 for(i=0; i<5; i++){
 	scanf("%d",&a[i]);
 }

  printf("Digite la posicion donde desea el elemento: ");
  scanf("%d",&posicion);
  printf("Digite el elemento a insertar: ");
  scanf("%d",&elemento);

  //se empezará a hacer el corrimiento a la derecha, para hacerlo se hace un bucle decreciente
  for(i=4; i>=posicion; i--)//desde 4 porque es el último índice, es lo que ve la computadora
{
	a[i+1]=a[i]; //por ejemplo, el del índice 4 , se agregará al índice 6 (posición 6 a nuestros ojos)
}
a[posicion]=elemento;//se agrega a esa posicion el elemento después del for y ver hasta cuando se deja de cumplir i>=posición

  //imprimiendo arreglo completo
  for(i=0; i<=5; i++){
  printf("a[%d]=%d",i,a[i]);
  }
 
	return 0;
}
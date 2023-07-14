/*verificar si es un número perfecto, teniendo en cuenta que un número es perfecto si es un número entero positivo
del cual la suma de sus divisiores positivos propios dan el mismo número; como 6 es perfecto porque sus divisores positivos son
1,2 y 3, los cuales al sumarlos dan 6*/
#include<stdio.h>
int esPer(int);
int main(){

  int num;

  printf("Introduzca un numero: ");
  scanf("%d",&num);

  if(esPer(num)){
  	printf("%d es un numero perfecto :).",num);
  }
  else 
  	printf("Chin, %d no es un numero perfecto :(.",num);

	return 0;
}
int esPer(int n){

   int i;
   int suma=0;

   for(i=1; i<=n/2; i++){ //n/2 porque hasta la mitad un número tiene divisiores, inicia con 0 porque la divisiones empiezan a valer desde que se divide entre 1
   	if(n%i == 0) //estamos diciendo que si el módulo del número entre cada valor de i es 0, significa que es un divisor
   		suma +=i;
   }
   if(suma == n){
     return 1;
   }
   else
   	return 0;
}
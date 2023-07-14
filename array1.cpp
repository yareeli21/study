#include<stdio.h>
//program to read and display the elements of an array
int main(){

  int marks[100], i, n;
  printf("¿De cuantos elementos deseas tu arreglo?: ");
  scanf("%d", &n);

  for(i=0; i<n; i++){
  	printf("Digita el elemento %d del arreglo: ",i);
  	scanf("%d",&marks[i]); // va a ir apareciendo para que le agregues elementos a tu arreglo, las veces que dijiste el tamaño del arreglo
  }
  printf("Elementos del arreglo: ");
  for(i=0; i<n; i++){
  	printf("\n%d\n",marks[i]); 
  }



	return 0;
}
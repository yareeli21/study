#include<stdio.h>
//programa para que imprima las filas y columnas deseas rellenadas con un asterisco
void patron(int, int);
int main(){
 
 int filas, columnas;

 printf("Ingrese el número de filas y columnas: ");
 scanf("%d %d",&filas, &columnas);


	return 0;
}

void patron(int f, int c){
   int i, j;
   for(i=0; i<=f; i++){
     for(j=0; j<=c; j++){
     	printf("*");
     	
     }
     printf("\n");
   }


}
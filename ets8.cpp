#include<stdio.h>

int main(){

  int matriz[20][20], filamin[20], colmax[20];
  int i,j, f, c;
  printf("Escribe el numero de filas: ");
  scanf("%d",&f);
  printf("Escribe el numero de columnas: ");
  scanf("%d",&c);

  //darle valores a la matriz
  for(i=0; i<f; i++){
  	printf("\n");
      for(j=0; j<c; j++){
      	scanf("%d",&matriz[i][j]);
      }
  }
  /*la logica para un punto silla es recorrer todas las filas y de ahí obtener el valor mínimo  de cada fila, después de todos esos mínimo buscaremos el máximo 
  de estos, haremos lo mismo con las columnas pero al revés, recorreremos todas las columnas y de cada una obtendremos el máximo, ya teniendo todos
  los máximos de estos buscaremos el mínimo. Entonces, si el minmax de filas y el maxmin de columnas es igual, significa que existe un punto silla*/

  //primero encontrar el mínimo de cada fila para eso necesitamos unas vatiables extra y un arreglo donde guardaremos todos los mínimo de cada fila
  for(i=0; i<f; i++){
  	//se supone que el minimo es es el que está en la pos i de filas y en la columna 0, 
  	int minimo=matriz[i][0];
  	for(j=1; j<c; j++){ //se inicia desde 1 porque ya se había usado j en 0 al inicializar el mínimo
  		//la condición para encontrar el mínimo 
  		if(matriz[i][j]<minimo){
  			minimo=matriz[i][j];
  		}
  	}
  	filamin[i]=minimo; //al arreglo de mínimo se le va agregando cada mínimo
  }
 //ahora encontar el máximo de cada columna y guardarlo en un arreglo de colmax
 //como vamos a buscar en columnas, ahora iniciamos nuestros loops con las columnas
  for(j=0; j<c; j++){
     int maximo=matriz[0][j];
       for(i=0; i<c; i++){
       	if(matriz[i][j]>maximo){
       		maximo=matriz[i][j];
       	}
       }
       colmax[j]=maximo; // se van agregando los máximos, el máximo de cada columna
  }
  //ahora viene la comprobación de si hay o no un punto silla 
  //recorremos toda la matriz c
  for(i=0; i<f; i++){
  	for(j=0; j<f; j++){
  		//condicion para encontar el punto silla, si un mínimo es igual a un máximo, entonces sí hay un punto silla
  		if(matriz[i][j]==filamin[i] && matriz[i][j]==colmax[j]){
            printf("Se ha encontrado un punto silla en %d, %d, el cual es= %d",i,j,matriz[i][j]);
  		}	 
  	}
  }
  	printf("No se encontro un punto silla en esta matriz."); 
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
void media(int, int, float);
void superior(int, int, float);
int main(){
	int n, i, j; 
	int sumaven;
	float media[50];
	printf("¿Cuantos almacenes hay en la empresa?");
	scanf("%d",&n);
   //n se refiere al numero de filas y 12 a los meses, se hace la matriz dinámica
   int **matriz=(int**)malloc(12*sizeof(int*));
   for(i=0; i<n; i++){
   	matriz[i]=(int*)malloc(n*sizeof(int*));
   }
  //bucle para leer en pantalla cada venta de mes por cada almacen
  for(i=0; i<n; i++){
  	printf("Almacen %d\n",i+1); //las filas representan a los almacenes y se muestra el numero de almacen
  	for(j=0; j<12; j++){ //las columnas los meses y se muestra e numero de mes 
  		printf("Mes %d: ",j+1);
  		scanf("\n%d",&matriz[i][j]); // para escribir cada venta
  	}
  }
  
  media(matriz, n, media);
  superior(matriz, n, media);


   for(i=0; i<n; i++){
  	//printf("\n mes %d",i);
  	printf("Almacen %d\n",i+1);
  	for(j=0; j<12; j++){
  		printf("Mes %d: %d\n",j+1,matriz[i][j]);
  	}
  }
  for(i=0; i<n; i++){
  	free(matriz[i]);
  }
  free(matriz);
 
 
	return 0;
}
void media(int matriz[][12], int n, float media){
  int i, j;
  //suma de cada columna, o sea de cada mes
   for(j=0; j<12; j++){
    int sumaven=0;
    for(i=0; i<n; i++){
      sumaven+=matriz[i][j]; //se hace la suma para que con esta se pueda obtener la media de cada mes
    }
  media[j]=sumaven/n;// se está sacando la media de cada suma, por cada mes por eso se pone específicamente en el loop de los meses
  } 
}
void superior(int matriz[][12], int n, float media){
   //mostrar los almacenes superiores a la media, recordemos que las ventas se están trabajando por columnas, hay 12 columnas y n almacenes, en cada columna están las ventas de cada almacen
  int i, j;
  printf("Almacenes superiores a la media por mes:\n ");
  for(j=0; j<12; j++){
    printf("Mes %d:\n",j+1);
    for(i=0; i<n; i++){
      if(matriz[i][j]>media[j]){
        printf("Almacen %d: ventas=%d\n",n+1, matriz[i][j]);
      }
    }
    printf("\n");
  } 
}

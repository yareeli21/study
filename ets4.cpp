#include<stdio.h>
#include<stdlib.h>
int main(){
	int f, c,i, j;
	int sumafila, sumacol;
	int arrayf[20], arrayc[20];
	printf("Digita el numero de filas de la matriz: ");
	scanf("%d",&f);

	printf("Digita el numero de columnas de la matriz: ");
	scanf("%d",&c);

	int **matriz=(int**)malloc(f*sizeof(int*));
	for(i=0; i<f; i++){
		matriz[i]=(int*)malloc(c*sizeof(int));
	}

	//leer los numeros de la matriz
	printf("Ingrese los numeros que tendra la matriz");
		for(i=0; i<f; i++){
		printf("\n");
		for(j=0; j<c; j++){
			scanf("%d",&matriz[i][j]);
		}
	}
	//mostrar en pantalla la matriz
	for(i=0; i<f; i++){
		printf("\n");
		for(j=0; j<c; j++){
			printf("%d\t",matriz[i][j]);
		}
	}
	printf("\n");
	//hacer la suma de sus filas, para hacer la de las filas los loops se inician como siempre, con las filas, en cmabio para las columnas, se inician al revés
    for(i=0; i<f; i++){
    	sumafila=0; //inicializamos la suma de las filas en 0
    	for(j=0; j<c; j++){ //creamos el loop para las columnas
             sumafila+=matriz[i][j];
             arrayf[i]=sumafila;
    	}
    	//printf("\nLa suma de la fila %d es=%d",i,sumafila);
    }
    //hacer la suma de sus columnas, ahora los loop serán iniciados con el de las columnas
    for(j=0; j<c; j++){
    	sumacol=0;
    	for(i=0; i<f; i++){
    		sumacol+=matriz[i][j];
    		arrayc[j]=sumacol;
    	}
    }
    printf("Valores de la suma de cada fila de la matriz\n");
   for(i=0; i<f; i++){
   	printf("%d\n",arrayf[i]);
   }
   printf("Valores de la suma de cada columna de la matriz\n");
   for(j=0; j<c; j++){
   	printf("%d\n",arrayc[j]);
   }

	return 0;
}
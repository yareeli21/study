#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void votos(int **, int, int);
int main(){

  int regiones, partidos, i, j; 
  printf("Ingrese el numero de regiones del país: ");
  scanf("%d",&regiones);
  printf("Ingrese el numero de partidos del país: ");
  scanf("%d",&partidos);
  //asiganción de memoria dinámica  a la matriz
  int **info=(int**)malloc(regiones*sizeof(int*));
  for(i=0; i<regiones; i++){
  	info[i]=(int*)malloc(partidos*sizeof(int));
  }
  srand(time(NULL));
  //leer la matriz con numeros aleatorios del hasta 500
  for(i=0; i<regiones; i++){
  	printf("\n");
  	for(j=0; j<partidos; j++){
  		info[i][j]=(rand()%500+1);
  	}
  }
   for(i=0; i<regiones; i++){
  	printf("\n");
  	for(j=0; j<partidos; j++){
  		printf("%d\t",info[i][j]);
  	}
  }
  printf("\n");
 votos(info, regiones, partidos);

 //liberar memoria de una matriz
 for(i=0; i<regiones; i++){
 	free(info[i]);
 }
 free(info);

	return 0;
}
void votos(int **info, int reg, int par){
 //como se le está pasando una mtriz de manera dinámica, entonces la suma se hará en un arreglo dinámico usando calloc

	int i,j;
	int *sumapart=(int*)calloc(par,sizeof(int)); //ya se creo un arreglo dinámico para la suma de votos de acuerdo a los partidos
	float *porcentaje=(float*)malloc(par*sizeof(float)); //arreglo dinámico para guardar, como solo se guardan cosa es malloc, no efectúa suma
   //hacer la suma de los votos por cada partido (columnas)
	int votosfinal=0;
	int votsmax=0;
	int partidowin=0;
	for(j=0; j<par; j++){ //se empieza con el loop de j porque es el de los partidos(columnas)
		for(i=0;i<reg; i++){
			sumapart[j]+=info[i][j];//sumapart se le pone la j porque está sumando respecto a los partidos
			votosfinal+=info[i][j];
		}
		//ya se usa el arreglo para el porcentaje de cada partido por eso (j)
		porcentaje[j]= (sumapart[j]/(float)votosfinal)*100; //el porcentaje de cada uno se saca la division de la suma de cada partido sobre la de todos por 100
		//la condicion para ver el que tuvo mas votos y ver el partido ganador
		if(sumapart[j]>votsmax){
			votsmax=sumapart[j];
			partidowin=j+1;
		}
	}
    //aquí se muestran las sumas de cada partido, recorriendo cada partido pero con las columnas, de arriba hacia abajo
	for(j=0; j<par; j++){
		printf("La suma del partido %d es=%d\n",j+1, sumapart[j]);
	}
	float mayor=porcentaje[0];
	int total;
	//con este loop se muestran los porcentajes
	for(j=0; j<par; j++){
		printf("El porcentaje del partido %d es=%.2f%%\n",j+1,porcentaje[j]);
	}
	//con las previas comparaciones ahora sí se imprime el partido ganador
	printf("\nEl partido ganador es %d con %d votos",partidowin,votsmax);
	//printf("El partido que es el %d con %d votos",j+1,total);
	//liberar memoria de los arreglos dinámicos
	free(sumapart);
	free(porcentaje);

}
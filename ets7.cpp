#include<stdio.h>
#include<string.h>
int main(){
	//matrices de cadenas
	char supermercados[5][30];
	char regiones[7][30];
	//matriz de enteros para las ventas, los supermercados representan las filas y las regiones las columnas
	int ventas[5][7];
	int i,j;
	int masventas=0;
	char super[20];

   //inicializar las matrices
	for(i=0; i<5; i++){
		printf("\n");
		for(j=0; j<7; j++){
           printf("Ingresa las ventas del supermercado %d en la región %d : ",i+1, j+1);
           scanf("%d",&ventas[i][j]);
		}
	}
	printf("\n");
	//matriz de cadenas para los supermercados
	for(i=0; i<5; i++){
		printf("Ingrese el supermercado %d:  ",i+1);
		scanf("%s",supermercados[i]);
	}
    //matriz de cadenas para guardar las regiones de los países
    for(j=0; j<7; j++){
    	printf("Ingrese del nombre de la región %d:  ",j+1);
    	scanf("%s",regiones[j]);
    }

    //hacer la suma total de ventas por cada supermercado y por cada región

    //tendremos que recorrer la matriz de ventas y declarar variables para cada suma, pero deben ser arreglos porque después se van a desglosar, o crear otros arreglos
    //la cantidad de elementos de cada arreglo de suma es de acuerdo a lo que se suma, sumasuper, son 5 supermercados, por eso.
    int sumasuper[5], sumareg[7];
    for(i=0; i<5; i++){
    	for(j=0; j<7; j++){
    		sumasuper[i]+=ventas[i][j];
    		sumareg[j]+=ventas[i][j];
    	}
    }

   printf("Total de ventas por cada supermercado: \n");
   printf("SUPERMERCADO \t VENTAS\n");
   for(i=0; i<5; i++){
   	printf("%s\t %d\n",supermercados[i],sumasuper[i]);
   	//aquí mismo encontrar el supermercado que vendió más
   	if(sumasuper[i]>masventas){
   		masventas=sumasuper[i];
   		strcpy(super,supermercados[i]); //en esta condición primero vemos si la suma del super 0 es mayor a 0, va avanzando hasta darle la verdadera suma a masventas y después supermercados (cadenas) de esa posicion se va a copiar a la cadena que declaramos al principio 
   	}
   }
   printf("\n");

   printf("Total de ventas por cada region: \n");
   printf("REGION \t VENTAS\n");
   for(j=0; j<7; j++){
   	printf("%s\t %d\n",regiones[j],sumareg[j]);
   }
  printf("El supermercado que mas ventas tuvo fue: %s",super);
	return 0;
}
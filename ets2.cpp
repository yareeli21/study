#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(){
  int i, n, suma1=0, suma2=0;
  float m, varianza, desviacion;
  
  printf("# de datos: ");
  scanf("%d",&n);
  srand(time(NULL));
  int *arreglo=(int*)malloc(n*sizeof(int));
  
  for(i=0; i<n; i++){
    arreglo[i]=(rand()%500+1);
    suma1+=arreglo[i];
    }
    m= suma1 / n;
  //varianza
    for(i=0; i<n; i++){
      suma2+= pow(arreglo[i]-m,2);
    }
    varianza= suma2/n;
  
    //ahora ya la desviacion
    desviacion= sqrt(varianza);
  for(i=0;i<n; i++){
    printf("%d\n",arreglo[i]);
  }
  //desviacion(arreglo, n);
    printf("El numero de datos es=%d\n",n);
      printf("La suma de los datos es=%d\n",suma1);
     printf("La mediana es=%.2f\n",m);
     printf("La desviacion estandar es=%.2f",desviacion);
    
  return 0;
}

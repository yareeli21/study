#include<stdio.h>
void insertaOrd(int, int[], int);
void copiaOrd(int [], int [], int);
int main(){

  int a[20]={10,15,20,25,30}, elem=5, b[20];
  int n;

  printf("Digite el numero que desea ingresar: ");
  scanf("%d",&n);

  int i;
 insertaOrd(elem,a,n);
 for(i=0; i<elem; i++){
 	printf("%d\n",a[i]);

 copiaOrd(b,a,5);
 for(i=0; i<5; i++){
 	printf("%d\n",a[i]);
 }

 }

}
void insertaOrd(int elem, int a[], int n){

 int i=0, j;

 while((n>a[i])&&(i<elem)){//mientras que el numero sea mayor al numero de cada posicion del arreglo y que cada posicion del areglo sea menor al numero de elementos del arrelgo
 	i++; //se irá incrementando la posición del arreglo para analizarla
 for(j=elem-1; j>=i; j--){ /*se sigue tratando al mismo arreglo pero como son bucles anidados, se trabaja con otro letra, empieza aquí 
  desde la última posicion siempre y cuando sea mayor o igual a i(la posición que se obtuvo con el while)*/
 	a[j+1]=a[j]; //como inició desde el final dice que el el número de la posición j se pasará a j+1, o sea uno después de donde termina el arreglo
}
	a[i]=n; //la pos i es donde está el último número que se analiza en el bucle y en esa se pondrá el número
 
}
}
void copiaOrd(int arr1[], int arr2[], int t){
  int i;
  for(i=0; i<t; i++){
  	insertaOrd(arr1[i],arr2,i);
  }

}
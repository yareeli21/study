#include<stdio.h>
void copiainvertida(int [], int [], int);
int main(){

 int arr1[20]={13,20,15,19,18};
 int arr2[20];
 int n;

 printf("Digite cuantos numeros desea invertir: ");
 scanf("%d",&n);
 
 copiainvertida(arr1,arr2,n);

  int i;
  for(i=0; i<n; i++){

  	printf("%d\n",arr2[i]); // se imprimirá el arreglo 2 respecto a 1
  }

	return 0;
}

void copiainvertida(int a1[], int a2[], int n){

   int i, j;  // i es para el arreglo 1 y j es para el arreglo 2

   j=n-1; //esto hace referencia a la última posición de j respecto al arreglo 2
   for(i=0; i<n; i++){
   	a2[j--]=a1[i];
   }

}

}

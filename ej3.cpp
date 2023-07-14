#include<stdio.h>
/* Escriba un programa que le solicite al usuario el valor de los ángulos de un triángulo,
verifique, a través de una función, si es isosceles, equilátero o escaleno. Considera que la suma 
los ángulos interiores de un triángulo debe ser igual a 180 grados; un triángulo isosceles tiene dos ángulo iguales, uno equilátero 
tiene todos sus ángulos iguales, y un escaleno no es isosceles, ni escaleno, es decir todos sus ángulos diferentes*/
void TipoTriangulo(int, int, int);
int main(){
  int v1, v2, v3;
  puts("Ingresa los valores de los ángulos de tu triángulo: ");
  scanf("%d %d %d",&v1,&v2,&v3);

  TipoTriangulo(v1,v2,v3);

	return 0;
}
void TipoTriangulo(int uno, int dos, int tres){

  if ((uno == dos) && (dos == tres)){
  	printf("Es equilátero.");
  }
  else if((uno == dos) || (uno == tres) || (dos == tres)){
  	printf("Es isosceles.");
  }
  else 
  	printf("Es escaleno.");
  


}
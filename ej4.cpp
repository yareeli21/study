#include<stdio.h>
#include<math.h>
/* Escribe un programa que calcule las raíces de una ecuación de segundo grado. El programa deberá
solicitarle al usuario que introduzca los coeficientes (float a, b, c); de una ecuación de segundo grado 
(ax² + bx + c=0). El programa deberá dar respuesta a los casos en los que a==0, o (b² - 4*a*c)<0. En este úlitmo
deberá calcular las raíces imaginarias. Asume que tienes a tu disposición la función float raizcuad(float) que 
devuelve la raíz de un número flotante*/
void raizCua(float, float, float);
int main(){

 float a,b,c;

 puts("Ingresa los valores de tu ecuación como buen matemático que eres!");
 printf("a: ");
 scanf("%f",&a);
 printf("b: ");
 scanf("%f",&b);
 printf("c: ");
 scanf("%f",&c);

raizCua(a, b, c);
 

	return 0;
}
void raizCua(float a, float b, float c){

 float dentroraiz= b*b -4 *a * c;
 float raiz= - b / (2*a);
 float imaginaria= sqrt(-dentroraiz)/(2*a);

 if(dentroraiz < 0){
 	printf("X1 = %.2f",raiz + imaginaria);
 }


}
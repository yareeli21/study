#include<stdio.h>
struct hora{
	
	int horas;
	int minutos;
	int segundos;
};

int main(){
   int seg, segT;
   struct hora mihora; 
   printf("Introduce la hora: ");
   scanf("%d",&mihora.horas);
   printf("Introduce los minutos: ");
   scanf("%d",&mihora.minutos);
   printf("Introduce los segundos: ");
   scanf("%d",&mihora.segundos);
   printf("Introduce una cantidad de segundos: ");
   scanf("%d",seg);

   mihora.segundos +=seg;
   mihora.minutos +=(mihora.segundos)/60;
   mihora.segundos %=60;
   mihora.horas += (mihora.minutos)/60;
   mihora.minutos %=60;
   mihora.horas %=24;

  /* //convertir todo a segundos, y así obtener los segundos totales de la hora escrita
   //1 hora tiene 3600 segundos y un minuto 60 segundos, haces las respectivas multiplicaciones
   segT=((mihora.horas*3600)+(mihora.minutos*60)+mihora.segundos+seg);

   //ahora calcular la hora final, si estuvimos multiplicando, ahora divvidiremos y usaremos el módulo
   //obtener la hora final, los minutos finales y los segundos finales, usando los seguntos totales obtenidos anteriormente
   mihora.horas=segT/3600;
   mihora.minutos=((segT%60)/60);
   mihora.segundos=((segT%60)%60);*/

   printf("La hora final es: %02d:%02d:%02d",mihora.horas, mihora.minutos, mihora.segundos); 
   	return 0;
}
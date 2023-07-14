#include <stdio.h>

int main(int argc, char *argv[]) {
   if (argc != 3) {
      printf("Uso: programa <archivo_entrada> <archivo_salida>\n");
      return 1;
   }

   char *nombreArchivoEntrada = argv[1];
   char *nombreArchivoSalida = argv[2];

   FILE *archivoEntrada = fopen(nombreArchivoEntrada, "r");
   if (archivoEntrada == NULL) {
      printf("No se pudo abrir el archivo de entrada.\n");
      return 1;
   }

   FILE *archivoSalida = fopen(nombreArchivoSalida, "w");
   if (archivoSalida == NULL) {
      printf("No se pudo abrir el archivo de salida.\n");
      return 1;
   }

   // Aquí puedes realizar las operaciones que necesites con los archivos

   fclose(archivoEntrada);
   fclose(archivoSalida);

   printf("Proceso completado exitosamente.\n");

   return 0;
}


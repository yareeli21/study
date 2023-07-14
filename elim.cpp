#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void eliminarPalabraArchivo(const char* archivoEntrada, const char* archivoSalida, const char* palabraEliminar) {
    FILE* archivoEntradaPtr = fopen(archivoEntrada, "r");
    FILE* archivoSalidaPtr = fopen(archivoSalida, "w");

    if (archivoEntradaPtr == NULL || archivoSalidaPtr == NULL) {
        printf("Error al abrir los archivos.\n");
        return;
    }

    char linea[100]; // Tamaño máximo de una línea en el archivo (ajústalo según tus necesidades)
    while (fgets(linea, sizeof(linea), archivoEntradaPtr)) {
        // Buscar y eliminar la palabra especificada
        char* palabra = strtok(linea, " \n"); // Separar la línea en palabras
        while (palabra != NULL) {
            if (strcmp(palabra, palabraEliminar) != 0) {
                // La palabra no coincide, copiarla al archivo de salida
                fputs(palabra, archivoSalidaPtr);
                fputs(" ", archivoSalidaPtr); // Agregar un espacio entre palabras
            }
            palabra = strtok(NULL, " \n");
        }
        fputs("\n", archivoSalidaPtr); // Agregar un salto de línea después de cada línea
    }

    fclose(archivoEntradaPtr);
    fclose(archivoSalidaPtr);

    printf("Palabra eliminada y archivo de salida creado exitosamente.\n");
}

int main() {
    const char* archivoEntrada = "entrada.txt";
    const char* archivoSalida = "salida.txt";
    const char* palabraEliminar = "eliminar";

    eliminarPalabraArchivo(archivoEntrada, archivoSalida, palabraEliminar);

    return 0;
}

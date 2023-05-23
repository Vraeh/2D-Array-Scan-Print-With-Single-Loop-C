#include <stdio.h>

// Definimos las constantes para el arreglo, discriminando estos valores con mayusculas.
// El arreglo que utilizaremos es de 3 filas y 3 columnas. (Cuadrado de 3x3)
#define FILAS 3
#define COLUMNAS 3

int main()
{
    int arreglo[FILAS][COLUMNAS];           // Definimos el arreglo de dos dimensiones.
    int total_elementos = FILAS * COLUMNAS; // Al ser de dos dimensiones, podemos obtener el total de elementos al multiplicar (a * b).
    int i;                                  // Definimos un contador para utilizarlo en el loop.

    printf("Ingrese los valores del arreglo de %d filas y %d columnas:\n", FILAS, COLUMNAS);

    for (i = 0; i < total_elementos; i++) // Iteramos sobre el total de elementos del arreglo.
    {
        int fila = i / COLUMNAS;    // Obtenemos la fila dividiendo el indice por la cantidad de columnas.
        int columna = i % COLUMNAS; // Obtenemos la columna calculando el resto de la division del indice por la cantidad de columnas.

        printf("Ingrese el valor para el elemento [%d][%d]: ", fila, columna);
        scanf("%d", &arreglo[fila][columna]); // Guardamos el valor en el indice correspondiente, y se repite el loop hasta que se completen todos los elementos.
    }

    printf("\n");
    printf("El arreglo ingresado es:\n");

    // Iteramos sobre el total de elementos del arreglo, exactamente igual que en el loop anterior, pero ahora para mostrar los valores en pantalla.
    for (i = 0; i < total_elementos; i++)
    {
        int fila = i / COLUMNAS;
        int columna = i % COLUMNAS;
        int valor_arreglo = arreglo[fila][columna]; // Obtenemos el valor del arreglo en el indice correspondiente.

        printf("%d ", valor_arreglo);
    }

    printf("\n");

    return 0;
}

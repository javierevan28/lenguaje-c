#include <stdio.h>
#include <stdbool.h>

int main() {
    // Variables
    char nombre[30];
    int edad;
    float altura;
    char inicial;
    int tempStatus; // Usamos una variable temporal de tipo int para leer el estado
    bool status;

    // Mostrar con printf
    printf("Ingresa el nombre: ");
    // Almacenar el valor en la variable
    scanf("%s", nombre);

    // Mostrar con printf
    printf("Ingresa la edad: ");
    // Almacenar el valor en la variable
    scanf("%d", &edad);

    // Mostrar con printf
    printf("Ingresa la altura: ");
    // Almacenar el valor en la variable
    scanf("%f", &altura);

    // Mostrar con printf
    printf("Ingresa la inicial: ");
    // Almacenar el valor en la variable
    scanf(" %c", &inicial); // El espacio antes de %c es importante para consumir cualquier salto de línea sobrante

    // Mostrar con printf
    printf("Ingresa el status (1 para true, 0 para false): ");
    // Almacenar el valor en la variable temporal de tipo int
    scanf("%d", &tempStatus);
    status = tempStatus != 0; // Convertimos tempStatus a bool

    // Imprimir valores de las variables
    printf("El nombre es: %s \n", nombre);
    printf("La edad es: %d \n", edad);
    printf("La altura es: %.2f \n", altura);
    printf("La inicial es: %c \n", inicial);
    printf("El status es: %d \n", status);

    return 0;
}

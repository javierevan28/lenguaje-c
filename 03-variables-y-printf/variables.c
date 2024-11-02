#include<stdio.h>
#include<stdbool.h>
int main(){
        //varibales
        char nombre[30] = "Javier";
        int edad = 25;
        float altura = 1.60;
        char inicial = 'J';
        bool status = true;

        // Imprimir las variables
        printf("El nombre es: %s \n",nombre);
        printf("La edads es: %d \n",edad);
        printf("La altura es: %f \n",altura);
        printf("La inicial es: %c \n",inicial);
        printf("El status es: %d \n",status);

    return 0;
}
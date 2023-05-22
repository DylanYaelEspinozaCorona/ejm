#include <stdio.h>

int main() {
    int numeroAdivinar = 123;
    int numeroIngresado;
    char respuesta = 's';
    int intentosMaximos = 5;
    int intentosRealizados = 0;

    for (; respuesta == 's' || respuesta == 'S'; intentosRealizados++) {
        if (intentosRealizados >= intentosMaximos) {
            printf("Agotaste el numero máximo de intentos. El numero era %d\n", numeroAdivinar);
            break;
        }

        printf("Adivina el numero: ");
        scanf("%d", &numeroIngresado);

        if (numeroIngresado == numeroAdivinar) {
            printf("¡Felicitaciones! Adivinaste el numero.\n");
            break;
        } else if (numeroIngresado < numeroAdivinar) {
            printf("El numero ingresado es menor. Intenta de nuevo.\n");
        } else {
            printf("El numero ingresado es mayor. Intenta de nuevo.\n");
        }

        printf("¿Deseas repetir el juego? (s/n): ");
        scanf(" %c", &respuesta);
    }

    return 0;
}


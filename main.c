#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b != 0) {
        return a / b;
    }
}

int main() {
    int num1=5, num2= 7;
    // Solicita dos numeros
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);


    printf("Suma: %d\n", suma(num1, num2));
    printf("Resta: %d\n", resta(num1, num2));
    printf("Multiplicacion: %d\n", multiplicacion(num1, num2));
    printf("Division: %d\n", division(num1, num2));


    return 0;
}

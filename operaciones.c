#include <stdio.h>
#include <string.h>

int main(void) {
    int a, b;
    printf("Ingrese un numero: ");
    if (scanf("%d", &a) != 1) {
        fprintf(stderr, "Entrada inválida.\n");
    return 1;
    }
    printf("Ingrese otro numero: ");
    if (scanf("%d", &b) != 1) {
        fprintf(stderr, "Entrada inválida.\n");
    return 1;
    }
    int sum = a + b;
    int product = a * b;
    int difference = b - a;
    int difference2 = a - b;
    printf("Suma: %d, Producto: %d, Diferencia: %d, Otra diferencia: %d\n", sum, product, difference, difference2);

    if (a != 0) {
        printf("b/a = %.2f\n", (float)b / a);
    } else {
        fprintf(stderr, "Error: no se puede dividir b/a porque a = 0.\n");
    }

    if (b != 0) {
        printf("a/b = %.2f\n", (float)a / b);
    } else {
        fprintf(stderr, "Error: no se puede dividir a/b porque b = 0.\n");
    }
    
    char nombre[100];
    printf("Ingrese su nombre completo: ");
    getchar();
    scanf("%[^\n]", nombre);
    printf("Hola, %s!\n", nombre);
    
    size_t espacios = 0;
    for(size_t i = 0; nombre[i] != '\0'; i++) {
        if(nombre[i] == ' ') {
            espacios++;
        }
    }
    printf("Tu nombre tiene %zu caracteres (incluyendo espacios).\n", strlen(nombre));
    printf("Tu nombre tiene %zu caracteres (sin incluir espacios).\n", strlen(nombre) - espacios);
    printf("Tu primer nombre de pila es: ");
    for(size_t i = 0; i < strlen(nombre); i++) {
        if(nombre[i] == ' ') break;
        putchar(nombre[i]);
    }
    char incial = nombre[0];
    printf("\nLa inicial de tu primer nombre es: %c\n", incial);
    return 0;
}
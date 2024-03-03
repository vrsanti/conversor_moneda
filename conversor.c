#include <stdio.h>

#define TC_USD_GTQ 7.85
#define TC_EUR_GTQ 8.45

int main() {
    int opcion;
    float cantidad;
    
    printf("Bienvenido al conversor de monedas\n");
    printf("1. convertir USD a GTQ\n");
    printf("2. convertir GTQ a USD\n");
    printf("3. convertir EUR a GTQ\n");
    printf("4. convertir GTQ a EUR\n");
    printf("Ingrese una opción: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Ingrese la cantidad en US dórales a Quetzales");
        scanf("%f", &cantidad);
        printf("%.2f USD equivale a %.2f GTQ\n", cantidad, cantidad * TC_USD_GTQ);
        break;
    case 2:
        printf("Ingrese la cantidad en Quetzales a US dórales");
        scanf("%f", &cantidad);
    printf("%.2f GTQ equivale a %.2f USD\n", cantidad, cantidad / TC_USD_GTQ);
        break;
    case 3:
        printf("Ingrese la cantidad en Euros a Quetzales");
        scanf("%f", &cantidad);
        printf("%.2f EUR equivale a %.2f GTQ\n", cantidad, cantidad * TC_EUR_GTQ);
        break;
    case 4:
        printf("Ingrese la cantidad en Quetzales a Euros");
        scanf("%f", &cantidad);
        printf("%.2f GTQ equivale a %.2f EUR\n", cantidad, cantidad / TC_EUR_GTQ);
        break;
    default:
        printf("Opción no válida\n");
        break;
    }

    return 0;
}

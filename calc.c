#include <stdio.h>
#include <math.h>

int main() {
    printf("------ Renato Bressan Calculator | Version 4.0 ------\n");
    printf("Avaliable operations: '+' (add), '-' (subtract), '*' (multiply), '/' (divide), '^' (power of)\n");
    float num1, num2;
    char operador;
    char continuar = 'Y';
    while (continuar == 'Y' || continuar == 'y') {
        printf("Enter the first number, the arithmetic operator and the second number: ");
        scanf("%f %c %f", &num1, &operador, &num2);
        switch (operador) {
            case '+':
                printf("Result: %.2f\n", num1 + num2);
                break;
            case '-':
                printf("Result: %.2f\n", num1 - num2);
                break;
            case '*':
                printf("Result: %.2f\n", num1 * num2);
                break;
            case '/':
                if (num2 == 0) {
                    printf("No numbers can be divided by 0\n");
                } else {
                    printf("Result: %.2f\n", num1 / num2);
                }
                break;
            case '^':
                printf("Result: %.2f\n", pow(num1, num2));
                break;
            default:
                printf("Invalid number(s) or operator\n");
        }
        printf("Enter 'Y' ('Yes') to continue or 'N' ('No') to exit: ");
        scanf(" %c", &continuar);
        while (continuar != 'Y' && continuar != 'y' && continuar != 'N' && continuar != 'n') {
            printf("Error, please enter 'Y' ('Yes') to continue or 'N' ('No') to exit: ");
            scanf(" %c", &continuar);
        } 
    } 
    printf("Thanks for using the calculator!\n");
    return 0;
}


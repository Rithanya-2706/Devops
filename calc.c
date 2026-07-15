#include <stdio.h>

int main() {
    float a, b;
    int choice;

    printf("Calculator\n");
    printf("1. Multiplication\n");
    printf("2. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(choice) {
        case 1:
            printf("Result = %.2f\n", a * b);
            break;

        case 2:
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

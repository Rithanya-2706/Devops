#include <stdio.h>

int main() {
    int a, b, choice;

    printf("Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice) {
        case 1:
            printf("Result = %d\n", a + b);
            break;

        case 2:
            printf("Result = %d\n", a - b);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    float num1, num2;

    // Input
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("\n--- Results ---\n");

    // Using switch to perform all operations
    for(int i = 1; i <= 4; i++) {
        switch(i) {
            case 1:
                printf("Addition = %.2f\n", num1 + num2);
                break;

            case 2:
                printf("Subtraction = %.2f\n", num1 - num2);
                break;

            case 3:
                printf("Multiplication = %.2f\n", num1 * num2);
                break;

            case 4:
                if(num2 != 0) {
                    printf("Division = %.2f\n", num1 / num2);
                } else {
                    printf("Division = Not possible (division by zero)\n");
                }
                break;
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("Select operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter choice (1/2/3/4): ");
    scanf("%d", &choice);

    // 올바른 선택인지 확인
    if (choice >= 1 && choice <= 4) {
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("The result is: %.2f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("The result is: %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("The result is: %.2f\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("The result is: %.2f\n", result);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;
        }
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}


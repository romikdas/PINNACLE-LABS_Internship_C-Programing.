#include <stdio.h>

int main() {
    char operator;
    double Num1, Num2;

    printf("Enter an operator (+, -, *, /):- ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &Num1, &Num2);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", Num1, Num2, Num1 + Num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", Num1, Num2, Num1 - Num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", Num1, Num2, Num1 * Num2);
            break;
        case '/':
            if (Num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%.2lf / %.2lf = %.2lf\n", Num1, Num2, Num1 / Num2);
            }
            break;
        default:
            printf("Invalid Operator\n");
    }

    return 0;
}

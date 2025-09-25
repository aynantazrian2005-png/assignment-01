#include <stdio.h>

int main()
{
    double num1, num2, result;
    char operator;
    printf("Simple calculator\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator(+,-,*,/): ");
    scanf("%c", &operator);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            printf("Error:Division by zero!\n");
            return 1;
        }
        break;
    default:
        printf("Error invalid operator!\n");
        return 1;
    }
    printf("Result:%.2f %c %.2f=%,2f\n", num1, operator, num2, result);
    return 0;
}
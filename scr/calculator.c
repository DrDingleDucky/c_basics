#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int number1;
    char operator;
    int number2;
    int answer;
    bool invalidOperator = false;

    printf("enter a whole number1: ");
    scanf("%d", &number1);

    printf("enter an operator (+ - * / ^): ");
    scanf(" %c", &operator);

    printf("enter a whole number2: ");
    scanf("%d", &number2);

    if (operator== '+')
    {
        answer = number1 + number2;
    }
    else if (operator== '-')
    {
        answer = number1 - number2;
    }
    else if (operator== '*')
    {
        answer = number1 * number2;
    }
    else if (operator== '/')
    {
        answer = number1 / number2;
    }
    else if (operator== '^')
    {
        answer = pow(number1, number2);
    }
    else
    {
        printf("unknown operator: %c", operator);
        invalidOperator = true;
    }
    if (!invalidOperator)
    {
        printf("%d %c %d = %d", number1, operator, number2, answer);
    }

    return 0;
}

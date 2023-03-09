#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temperature;
    float converted_temperature;

    printf("is the temerature in (c) or (f): ");
    scanf("%c", &unit);

    unit = tolower(unit);

    if (unit == 'c')
    {
        printf("enter the temperature in celsius: ");
        scanf("%f", &temperature);

        converted_temperature = (temperature * 9 / 5) + 32;

        printf("%.1f celsius in fahrenheit is %.1f\n", temperature, converted_temperature);
    }
    else if (unit == 'f')
    {
        printf("enter the temperature in fahrenheit: ");
        scanf("%f", &temperature);

        converted_temperature = (temperature - 32) * 5 / 9;

        printf("%.1f fahrenheit in celsius is %.1f\n", temperature, converted_temperature);
    }
    else
    {
        printf("unknown unit\n");
    }
}
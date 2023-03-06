#include <stdio.h>

int main()
{
    double width;
    double lenght;
    double area;
    double perimeter;

    printf("enter width: ");
    scanf("%lf", &width);

    printf("enter lenght: ");
    scanf("%lf", &lenght);

    area = lenght * width;
    perimeter = lenght * 2 + width * 2;
    
    printf("area: %lf\n", area);
    printf("perimeter: %lf\n", perimeter);

    return 0;
}
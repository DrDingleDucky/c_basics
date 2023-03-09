#include <stdio.h>

int main()
{
    const double PI = 3.14159;
    double radius;
    double circumferences;
    double area;

    printf("enter radius of circle: ");
    scanf("%lf", &radius);

    circumferences = 2 * PI * radius;
    area = PI * radius * radius;

    printf("circumferences: %lf\n", circumferences);
    printf("area: %lf\n", area);

    return 0;
}
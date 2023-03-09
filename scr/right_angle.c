#include <stdio.h>
#include <math.h>

int main()
{
    double sideA;
    double sideB;
    double sideC;

    printf("enter side a: ");
    scanf("%lf", &sideA);

    printf("enter side b: ");
    scanf("%lf", &sideB);

    sideC = sqrt(sideA * sideA + sideB * sideB);

    printf("side c is %lf\n", sideC);
    return 0;
}
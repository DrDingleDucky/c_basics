#include <stdio.h>
#include <math.h>

int main()
{
    double side_a;
    double side_b;
    double side_c;

    printf("enter side a: ");
    scanf("%lf", &side_a);

    printf("enter side b: ");
    scanf("%lf", &side_b);

    side_c = sqrt(side_a * side_a + side_b * side_b);

    printf("side c is %lf\n", side_c);
    return 0;
}
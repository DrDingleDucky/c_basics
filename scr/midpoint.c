#include <stdio.h>

int main()
{
    float x1;
    float y1;
    float x2;
    float y2;
    double midPointX;
    double midPointY;

    printf("point x1: ");
    scanf("%f", &x1);

    printf("point y1: ");
    scanf("%f", &y1);
    
    printf("point x2: "); 
    scanf("%f", &x2);

    printf("point y2: ");
    scanf("%f", &y2);

    printf("point 1: (%f, %f), point 2: (%f, %f)\n", x1, y1, x2, y2);

    midPointX = (x1 + x2) / 2;
    midPointY = (y1 + y2) / 2;

    printf("midpoint: (%lf, %lf)", midPointX, midPointY);

    return 0;
}

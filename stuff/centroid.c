#include <stdio.h>

int main()
{
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
    int centroidX;
    int centroidY;

    printf("point x1: ");
    scanf("%d", &x1);

    printf("point y1: ");
    scanf("%d", &y1);

    printf("point x2: ");
    scanf("%d", &x2);

    printf("point y2: ");
    scanf("%d", &y2);

    printf("point x3: ");
    scanf("%d", &x3);

    printf("point y3: ");
    scanf("%d", &y3);

    printf("point 1: (%d, %d), point 2: (%d, %d), point 3: (%d, %d)\n", x1, y1, x2, y2, x3, y3);

    centroidX = (x1 + x2 + x3) / 3;
    centroidY = (y1 + y2 + y3) / 3;

    printf("centroid: (%d, %d)", centroidX, centroidY);

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int intQueue[256];
int count = 0;

void insert(int x)
{
    if (count == 256)
    {
        printf("there is not space left in the int stack\n");
        return;
    }
    intQueue[count] = x;
    count ++;
}

int delete()
{
    if (count == 0)
    {
        printf("nother to take from the int stack\n");
        exit(-1);
    }
    int result = intQueue[0];
    for (int i = 0; i < count - 1; i++)
    {
        intQueue[i] = intQueue[i + 1];
    }
    count --;
    return result;
}

int main()
{
    insert(1);
    insert(2);
    insert(5);
    insert(10);

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", delete());
    }

    return 0;
}

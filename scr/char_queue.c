#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char charQueue[256];
int count = 0;

void insert(char x)
{
    if (count == 256)
    {
        printf("there is not space left in the char stack\n");
        return;
    }
    charQueue[count] = x;
    count ++;
}

char delete()
{
    if (count == 0)
    {
        printf("nother to take from the char stack\n");
        exit(-1);
    }
    char result = charQueue[0];
    for (int i = 0; i < count - 1; i++)
    {
        charQueue[i] = charQueue[i + 1];
    }
    count --;
    return result;
}

int main()
{
    insert('1');
    insert('b');
    insert('+');

    for (int i = 0; i < 3; i++)
    {
        printf("%c\n", delete());
    }

    return 0;
}

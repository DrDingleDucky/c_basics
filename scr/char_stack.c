#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char charStack[256];
int count = 0;

void push(char x)
{
    if (count == 256)
    {
        printf("there is not space left in the int stack\n");
        return;
    }
    charStack[count] = x;
    count++;
}

char pop()
{
    if (count == 0)
    {
        printf("nother to take from the int stack\n");
        exit(-1);
    }
    char result = charStack[count - 1];
    count--;
    return result;
}

int main()
{
    push('1');
    push('b');
    push('+');

    for (int i = 0; i < 3; i++)
    {
        printf("%c\n", pop());
    }

    return 0;
}

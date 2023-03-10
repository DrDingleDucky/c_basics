#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int intStack[256];
int count = 0;

void push(int x)
{
    if(count == 256)
    {
        printf("there is not space left in the int stack\n");
        return;
    }
    intStack[count] = x;
    count++;
}

int pop()
{
    if(count == 0)
    {
        printf("nother to take from the int stack\n");
        exit(-1);
    }
    int result = intStack[count - 1];
    count--;
    return result;
}

int main()
{
    push(2);
    push(11);
    push(-8);
    push(27);
    push(-125);
    push(296);

    for(int i = 0; i < 6; i++)
    {
        printf("%d\n", pop());
    }

    return 0;
}

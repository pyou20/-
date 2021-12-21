#include<stdio.h>
int main()
{
    char x[100];
    int i, word = 0, number = 0;
    for (i = 0; i < 100; i++)
    {
        scanf_s("%c", x[i]);
    }
    for (i = 0; i < 100; i++)
    {
        if (x[i] == ' ')
        {
            word = 0;
        }
        else if (word == 0)
        {
            number++;
            word = 1;
        }
    }
    printf("%d", number);
    return 0;
}

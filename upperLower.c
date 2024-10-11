#include <stdio.h>

int main()
{
    char c;
    for (;;)
    {
        c = getchar();
        if (c == EOF)
        {
            break;
        }
        c -= 32;
        putchar(c);
    }
    return 0;
}
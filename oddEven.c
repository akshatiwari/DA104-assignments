#include <stdio.h>

int main()
{
    int n, num;
    printf("Enter the number of cases: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            printf("The number is even.\n");
        }
        else
        {
            printf("The number is odd.\n");
        }
    }
    return 0;
}
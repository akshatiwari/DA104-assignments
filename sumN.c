#include <stdio.h>

int main(void)
{
    int n, sum=0;
    printf("Enter the number N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        sum += i;
    }
    printf("The sum of the series is %d\n", sum);
    return 0;
}
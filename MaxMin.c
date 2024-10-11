#include<stdio.h>

int main() {
    int a, b, c;
    int max, min;

    printf("Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    printf("The maximum of three numbers is %d.\n", max);
    printf("The minimum of three numbers is %d.\n", min);
    return 0;
}
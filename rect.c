#include <stdio.h>

int main(void)
{
    int length, breadth, perimeter, area;
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("\nEnter the breadth: ");
    scanf("%d", &breadth);
    // scanf("%d %d", &length, &breadth);
    perimeter = 2 * (length + breadth);
    area = length * breadth;
    printf("\nThe perimeter of the rectangle is %d units and area is %d units\n", perimeter, area);

    return 0;
}
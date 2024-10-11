#include <stdio.h>

int main(void)
{

    int input_days, days, weeks, years;

    printf("Enter the number of days: ");
    scanf("%d", &input_days);

    years = input_days / 365;
    weeks = (input_days % 365) / 7;
    days = input_days - (years * 365) - (weeks * 7);

    printf("Years: %d\nWeeks: %d\nDays: %d\n", years, weeks, days);

    return 0;
}
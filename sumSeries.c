#include<stdio.h>
#include<math.h>

int SumSeries(int a, int n) {
    if (a==1) return n+1;

    int result=0;
    for (int i=n; i>=1; --i) {
        result += pow(a,i);
    }
    result += 1;
    return result;
}

int main() {
    int a, n;

    printf("Enter values of a and n: ");
    scanf("%d %d", &a, &n);

    int sum = SumSeries(a,n);
    printf("The sum is %d.\n", sum);
    return 0;
}
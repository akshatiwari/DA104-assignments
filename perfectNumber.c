/* A perfect number is a positive number equal to the sum of its proper divisors, excluding the number itself. 

Consider number 6. Its divisors are 1, 2 and 3. Now, the sum of the divisors (excluding 6) equals the number itself. 
Thus, 6 is a perfect number.
Consider another number, 27. Its divisors are 1, 3 and 9. It is not a perfect number.
Write a function to check whether a number is perfect or not. 
The function returns 1 if the number is perfect else 0. The function prototype is 

        int perfect(int);

Sample output #1:
        Enter a number: 6
        The number is a perfect number.

Sample output #2:
        Enter a number: 27
        The number is not a perfect number.

The algorithm to check whether a number is perfect or not is given below.

Step 1: Initialize the sum (s) to 0.

Step 2: For k varying from 1 to n-1, do the following

	a). If k divides n perfectly, then add k to s.

Step 3: If s and n are equal, return 1 else return 0. */

#include<stdio.h>

int perfect(int a) {
    int sum=0;
    for (int k=1; k<=a-1; k++) {
        if (a%k == 0) {
            sum += k;
        }
    }
    
    if (sum == a) return 1;
    else return 0;
    return sum;
}

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    int result = perfect(a);
    if (result ==1) {
        printf("The number is a perfect number.\n");
    }
    else {
        printf("The number is not a perfect number.\n");
    }
    return 0;
}
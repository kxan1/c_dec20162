//generated w/copilot
#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d is %llu\n", num, factorial(num));
    }

    return 0;
}

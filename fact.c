#include <stdio.h>


long long factorial(int n) {
    if (n < 0) {
        return -1; 
    } else if (n == 0) {
        return 1;
    } else {
        long long result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    long long fact = factorial(num);

    if (fact == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("The factorial of %d is %lld\n", num, fact);
    }

    return 0;
}

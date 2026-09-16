#include <stdio.h>

int main() {
    int num, original, digit, fact, sum = 0;

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;

        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == original)
        printf("%d is a Strong number.\n", original);
    else
        printf("%d is NOT a Strong number.\n", original);

    return 0;
}

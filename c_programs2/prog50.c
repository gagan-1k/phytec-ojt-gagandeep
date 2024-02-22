//WAP to print the given number is armstrong number

#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    int sum = 0;
    int temp = n;

    while (temp != 0) {
        int digit = temp % 10;
        temp = temp / 10;
        sum = sum + digit * digit * digit;
    }

    if (sum == n) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }

    return 0;
}


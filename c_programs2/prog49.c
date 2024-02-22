#include<stdio.h>

int main() {
    int arr[10];

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int num_to_zero;  // Corrected variable name
    printf("Enter a number to set to zero: ");
    scanf("%d", &num_to_zero);  // Corrected variable name

    int position = -1;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == num_to_zero) {  // Corrected variable name
            position = i;
            arr[i] = 0;
            break;
        }
    }

    printf("\nModified array:\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    if (position != -1) {
        printf("\nPosition of %d in the array: %d\n", num_to_zero, position + 1);  
    } else {
        printf("\n%d not found in the array.\n", num_to_zero);  
    }

    return 0;
}


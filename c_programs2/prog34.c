//WAP pattern4
#include<stdio.h>

int main() {
    int row = 1, rowcount = 10, i, j, k;

    while(row <= 6) {
        for(i = 1; i < row; i++) {
            printf(" ");
        }

        for(j = 0; j <= (rowcount / 2); j++) {
            printf("A");
        }

        for(k = 0; k <= (rowcount / 2); k++) {
            printf("B");
        }

        printf("\n");
        rowcount = rowcount - 2;
        row++;
    }

    return 0;
}


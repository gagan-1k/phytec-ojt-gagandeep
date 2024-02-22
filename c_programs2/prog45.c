//WAP to print the bcd value of a given number

#include<stdio.h>

int main() {
  int n, a, i, binary[10];
  
  printf("Enter the number for BCD: ");
  scanf("%d", &n);

  for(i = 0; i <= 3; i++) {
    a = n % 2;
    n = n / 2;
    binary[i] = a;
  }

  for(i = 3; i >= 0; i--) {
    printf("%d", binary[i]);
  }

  return 0;
}


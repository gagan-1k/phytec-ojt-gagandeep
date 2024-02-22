//wap gcd of 2no's

#include<stdio.h>

int main() {
  int n1, n2, i, gcd;
  
  printf("Enter any two numbers: ");
  scanf("%d%d", &n1, &n2);

  for (i = 1; i <= n1 && i <= n2; i++) {
    if (n1 % i == 0 && n2 % i == 0) {
      gcd = i;
    }
  }
  
  printf("GCD of two numbers %d, %d is %d\n", n1, n2, gcd);

  return 0;
}


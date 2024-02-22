//WAP to check the given number is palindrome or not

#include<stdio.h>

int main() {
  int num, r, sum = 0, t;

  printf("Enter a number: ");
  scanf("%d", &num);

  t = num;

  for (t = num; num != 0; num = num / 10) {
    r = num % 10;
    sum = sum * 10 + r;
  }

  if (t == sum) {
    printf("%d is a palindrome", t);
  } else {
    printf("%d is not a palindrome", t);
  }

  return 0;
}


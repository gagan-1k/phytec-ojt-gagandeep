//WAP in series 

#include<stdio.h>

int main() {
  int r, count;
  
  printf("Enter the count range: ");
  scanf("%d", &r);
  
  count = 1;

  while(count <= r) {
    printf("%d ", count * 2);
    printf("%d\n", count * 4);
    count++;
  }

  return 0;
}



//WAP to print the bill of a shopping

#include<stdio.h>

int main() {
  int n, i = 0, p[100], q[100], itemcount = 0, itemprice, totalbill = 0;

  printf("Enter the number of items: ");
  scanf("%d", &n);

  while (i < n) {
    printf("Enter item number: ");
    scanf("%d", &i);

    printf("Enter the price: ");
    scanf("%d", &p[itemcount]);

    printf("Enter the quantity: ");
    scanf("%d", &q[itemcount]);

    itemprice = p[itemcount] * q[itemcount];
    totalbill += itemprice;
    itemcount++;
  }

  printf("%-5s%-8s%-8s\n", "Item", "Price", "Quantity");

  for (int a = 0; a < itemcount; a++) {
    printf("%-5d%-8d%-8d\n", a + 1, p[a], q[a]);
  }

  printf("Total bill: %d\n", totalbill);

  return 0;
}


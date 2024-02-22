//WAP to print factorial of agiven number

#include<stdio.h>
int main()
{
  int num,count;
  unsigned long long fact=1;

  printf("enter a number:");
  scanf("%d",&num);

  count=1;
  while (count<=num)
   {
     fact =fact * count;
     count ++;
   }
  printf("factorial of %d =%llu\n",num,fact);

  return 0;
}

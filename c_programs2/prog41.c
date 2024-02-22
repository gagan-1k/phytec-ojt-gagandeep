//wap to print fibonacci series

#include<stdio.h>
int main()
{
  int n,n1=0,n2=1,sum;

  printf("enter the number of terms in the fibonacci series:");
  scanf("%d",&n);

  printf("fibonacci series:");

  for(int i=0;i<n;++i)
  {
    printf("%d",n1);

    sum =n1+n2;
    n1 =n2;
    n2 =sum;
  }

  printf("\n");

  return 0;
}

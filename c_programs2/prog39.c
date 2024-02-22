//WAP to print the given number is prime or not

#include<stdio.h>
int main()
{
  int num,isprime=1;

  printf("enter a number above 2:");
  scanf("%d",&num);

  for(int i=2;i<=num/2;++i)
  {
    if(num%i==0)
    {
      isprime=0;
      break;
    }
  }

  if(isprime)
  {
   printf("%d is a prime number\n",num);
  }
  else
   {
    printf("%d is not a prime number\n",num);
   }

  return 0;
}

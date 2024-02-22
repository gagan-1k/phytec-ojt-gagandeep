//WAP pattern3

#include<stdio.h>
int main()
{
  int row =5;

  for(int i=1;i<=row;++i)
  {
	  for (int j=1;j<i;++j)
	  {
	      printf(" ");
	  }

   for(int k=i;k<=row;++k)
   {
      printf("B");
   }
     printf("\n");
  }
  return 0;
}

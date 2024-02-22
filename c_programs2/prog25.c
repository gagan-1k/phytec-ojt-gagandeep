#include<stdio.h>
int main()
{
  int N;
  
  printf("enter the value of N:");
  scanf("%d",&N);
  
  if(N<=0)
  {
  printf("invalid input\n");
  return 1;
  }
   printf("first %d even numbers in reverse order: \n",N);
   
   for(int i=N*2;i>=2;i-=2)
   {
    printf("%d\n",i);
   }

  return 0;
}

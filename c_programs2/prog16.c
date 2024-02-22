//WAP to get age of a person to print whether he is eligible for driving license or not

#include<stdio.h>
int main()
{
  int age;

  printf(" enter the age of a person:");
  scanf("%d",&age);

  if(age>=18)
  {
	  printf("eligible for driving license:\n");
  }
  else
  {
	  printf("not eligible for driving license:\n");
  }
  
  return 0;
}


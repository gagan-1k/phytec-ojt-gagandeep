//WAP to print the sum of five subjects marks of a student

#include<stdio.h>
int main()
{
	float sum,a1,a2,a3,a4,a5;

	printf("enter five subjects marks");
       scanf("%f,%f,%f,%f,%f",&a1,&a2,&a3,&a4,&a5);
       sum =a1+a2+a3+a4+a5;
       printf("sum of five subject marks is %2f\n",sum);
       
 return 0;
}

#include<stdio.h>
int main()
{
 int age;

 printf(" enter the age:");
 scanf("%d",&age);

 if(age<=5)
 {
	 printf("nice child\n");
 }
 else if(age<=10)
 {
	 printf("nice kid\n");
 }
 else if(age<=15)
 {
	 printf("teenage\n");
 }
 else if(age<=25)
 {
	 printf("young dynamic\n");
 }
 else if(age<=50)
 {
	 printf("middle age\n");
 }
 else
 {
	 printf("old age\n");
 }

 return 0;
}

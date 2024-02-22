//WAP to print first n natural numbers in reverse order

#include<stdio.h>
int main()
{
 int N,n;
 printf("enter the number:");
 scanf("%d",&N);

 while(n=N)
 {
	 if(n>=1)
	 {
		 N=n-1;
		 printf("%d\n",n);
		 n--;
	 }
 }
 return 0;
}

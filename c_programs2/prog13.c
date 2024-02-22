//WAP to print biggest of three numbers

#include<stdio.h>
int main()
{
	int A,B,C;
	printf("enter any three numbers:\n");
	scanf("%d%d%d",&A,&B,&C);

	if(A>B)
	{
         if(A>C)
	 {
		 printf("%d is the biggest\n",A);
	 }
	 else
	 {
		 printf("%d is the biggest\n",C);
	 }
	}
	else
	{
         if(B>C)
	 {
		 printf("%d is the biggest\n",B);
	 }
	 else
	 {
		 printf("%d is the biggest\n",C);
	 }
	}
	return 0;
}

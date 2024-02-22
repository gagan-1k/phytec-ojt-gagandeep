//WAP to read the number from the user and print the bigger value

#include<stdio.h>
int main()
{
	int A,B;
	printf("enter two numbers :\n");
	scanf("%d,%d",&A,&B);

	if(A>B){
          printf("%d is the Big",A);
	}
	else
        {
	printf("%d is the Big",B);
	}
	return 0;
}

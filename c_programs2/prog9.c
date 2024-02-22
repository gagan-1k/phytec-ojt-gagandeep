#include<stdio.h>
int main()
{
	int I1,I2,I3,I4,I5,I6,sum;
	printf("enter the values of current:\n");
	scanf("%d,%d,%d,%d,%d,%d%",&I1,&I2,&I3,&I4,&I5,&I6);
	sum = I1+I2-I3+I4+I5-I6;
	printf("sum of current :%d",sum);
	return 0;
}

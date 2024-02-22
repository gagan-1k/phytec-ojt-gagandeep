#include<stdio.h>
int main()
{
	int V,I,R1,R2,R3;
	float x;

	printf("enter the value of V,I,R1,R2,R3:\n");
	scanf("%d,%d,%d,%d,%d",&V,&I,&R1,&R2,&R3);
	x = (R2/R3)*R3;
        printf("the value of unknown x is:%2f\n",x);
	return 0;
}


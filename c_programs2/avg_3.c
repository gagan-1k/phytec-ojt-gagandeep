//WAP to print avg of three numbers

#include<stdio.h>
int main()
{
	float a,b,c;
	float avg;

	printf("enter three numbers");
	scanf("%f,%f,%f",&a,&b,&c);
	avg =(a+b+c)/3;
	printf("average of number is %2f,%2f,%2f is %2f\n",a,b,c,avg);
	return 0;
}

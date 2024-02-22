//WAP to print the power when current and resistance is provided

#include<stdio.h>
int main()
{
	float I=12,r=23, power;

	power =I*I*r;
	printf("power is %2f",power);

	return 0;

}

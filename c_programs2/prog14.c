#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,avg;

	printf("enter the student marks for five subjects:\n");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	avg =(s1+s2+s3+s4+s5)/5;

	char grade;

	if(avg>80)
	{
	grade ='A';
	}
	else if(avg>60)
	{
	grade ='B';
	}
	else if(avg>40)
	{
	grade ='c';
	}
	else
	{
	grade ='D';
	}

	printf("average marks :%2f\n",avg);
	printf("the student grade :%c\n",grade);

	return 0;
}

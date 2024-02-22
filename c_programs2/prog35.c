//WAP pattern5

#include<stdio.h>
int main()
{
 int row =5,rowcount=1,i,j,k;
 while(row>0)
 {
	 for(i=0;i<row*2;i++)
	 {
	   printf(" ");
	 }

	 for(j=1;j<=rowcount/2;j++)
	 {
           printf("A");
	 }
	 for(k=1;k<=rowcount/2;k++)
	 {
           printf("B");
	 }
	 printf("\n");

	 rowcount =rowcount+2;
	 row--;
 }
 return 0;
}


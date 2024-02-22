//WAP pattern 

#include<stdio.h>
int main()
{
  int row=5,rowcount=1,columncount;
  while(rowcount<=row)
  {
	  for(columncount=1;columncount<=rowcount; columncount++)
	  {
		  printf("X");
	  }
	  rowcount++;
	  printf("\n");
  }

  return 0;
}

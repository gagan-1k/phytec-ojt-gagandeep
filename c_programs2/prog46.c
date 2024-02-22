//WAP to print hex value of a given number

#include<stdio.h>
int main()
{
 int n,i,count=0,hexadecimal[5],a;
 printf("enter the number:");
 scanf("%d",&n);

 while(n!=0)
 {
   a=n%16;
   if(a<10)
   {
     hexadecimal[count++]=a+ '0';
   }
   else
   {
     hexadecimal[count++]=a-10 +'A';
   }
   n=n/16;
 }

 printf("hexadecimal equivalent:0*\n");

 for(i=count-1;i>=0;i--)
 {
   printf("%c",hexadecimal[i]);
 }
 printf("\n");

 return 0;
}

//WAP which follows kirchoffs law or not

#include<stdio.h>
int main()
{
 float I1,I2,I3,I4,I5,I6,sumentering, sumleaving;
 printf("enter the value of current entering the node I1,I2,I4,I5 :\n");
 scanf("%f%f%f%f",&I1,&I2,&I4,&I5);
 printf("enter the value of current leaving node I3,I6 :\n");
 scanf("%f%f",&I3,&I6);

 sumentering = I1+I2+I4+I5;
 sumleaving = I3+I6;

 if(sumentering == sumleaving)
 {
	 printf("kirchoff's law is satisfied \n");
 }
 else
 {
	 printf("kirchoff's law is not satisfied \n");
 }
 return 0;
}



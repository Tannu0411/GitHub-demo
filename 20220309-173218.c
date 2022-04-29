#include<stdio.h>
#include<conio.h>
void main()
{ 
   enum{red=5, yellow,green=-4,blue};
   printf("red=%d\n",red);
   printf("yellow=%d\n",yellow);
   printf("green=%f\n",green);
   printf("blue=%d\n",blue);
   getchar();
}
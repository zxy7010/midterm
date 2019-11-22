#include<stdio.h>
int main()
{
 unsigned long int c=1;
 unsigned long int a=0;
 int d = 0;
 while(c>0)
 {
   c=c<<1;
   d=d+1;
 }
   printf("max=%u, min=%u\n",c-1,d);
}

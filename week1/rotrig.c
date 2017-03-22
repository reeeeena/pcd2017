#include<stdio.h>
unsigned int rightshift(unsigned int x,unsigned int n)
{
int i;
for(i=1;i<=n;i++)
   {
     if(x%2==0)
   {
   x=x>>1;
   }
   else
   {
  x= x>>1;
   x=x+(1<<31);
   }}
   return x;
 }
 
 int main()
 {
 unsigned int x,n,r;
 printf("enter x:");
 scanf("%u",&x);
 printf("enter how many times to rotate");
 scanf("%u",&n);
 r=rightshift(x,n);
 printf("the answer is %u",r);
 }
   

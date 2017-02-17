#include<stdio.h>
int add(int a,int b)
{
int c=a+b;
return c;
}
int main()
{
int x,y,z;
 printf("enter any two numbers\n");
scanf("%d%d",&x,&y);
z=add(x,y);
printf("Sum of two numbers is %d",z);
}










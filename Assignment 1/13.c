//Write a C program to find the maximum between three numbers.

#include<stdio.h>
void main()
{
int a,b,c,max;
printf("**Maximum Between Three Numbers**\n");
printf("Name: Purbasa Seal, Class: MCA1A, Roll: 40\n");
printf("Enter 1st Number :");
scanf("%d",&a);
printf("Enter 2nd Number :");
scanf("%d",&b);
printf("Enter 3rd Number :");
scanf("%d",&c);
max=a;
if(b>max)
max=b;
if(c>max)

max=c;
printf("%d is the Maximum Number\n",max);
}

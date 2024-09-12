//Write a C program to generate the first n terms of the Fibonacci sequence.

#include<stdio.h>
void main()
{
printf("\n**Fibonacci Series**\n");
printf("Name: Purbasa Seal, Class: MCA1A, Roll: 40\n");
int a=0,b=1,s=0,n;
printf("Enter the range : ");
scanf("%d",&n);
printf("Fibonacci Series =\n");
printf("%d ",s);
s=a+b;
for(int i=2;i<=n;i++)
{
printf("%d ",s);
s=a+b;

a=b;
b=s;
}
printf("\n");
}

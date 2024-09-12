//Write a C program to check if the given number is a perfect number.

#include<stdio.h>
void main()
{
printf("\n**Perfect Number**\n");
printf("Name: Purbasa Seal, Class: MCA1A, Roll:40\n");
int n,i,s=0;
printf("Enter a number :");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
s=s+i;
}
if(n==s)
printf("Perfect Number\n");
else

printf("Not Perfect Number\n");
}

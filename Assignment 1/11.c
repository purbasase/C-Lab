//Write a C program to check whether a number is a palindrome or not.

#include<stdio.h>
void main()
{
int n,d,r=0;
printf("\n**Palindrome Number**\n");
printf("Name: Purbasa Seal, Class: MCA1A, Roll: 40\n");
printf("Enter a Number :");
scanf("%d",&n);
d=n;
while(n!=0)
{
r=r*10+(n%10);
n=n/10;
}
if(r==d)

printf("Palindrome Number\n");
else
printf("Not Palindrome Number\n");
}

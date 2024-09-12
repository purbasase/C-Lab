//Write a C program to check whether a year is a leap year or not.

#include<stdio.h>
void main()
{
int y;
printf("**Leap Year**\n");
printf("Name: Purbasa Seal, Class: MCA1A, Roll: 40\n");
printf("Enter a Year :");
scanf("%d",&y);
if(y%400==0)
printf("Leap Year\n");
else if(y%4==0 & y%100!=0)
printf("Leap Year\n");
else
printf("Not Leap Year\n");
}

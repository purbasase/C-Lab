//Write a C program to input any character and check whether it is an alphabet, digit, or special character.

#include<stdio.h>
#include<ctype.h>
void main()
{
char ch;
printf("**Input any character and check whether it is an
alphabet, digit, or special character**\n");
printf("Name: Purbasa Seal, Class: MCA1A, Roll: 40\n");
printf("Enter a character :");
scanf("%c",&ch);
if(isalpha(ch))
printf("Alphabet\n");
else if(isdigit(ch))
printf("Digit\n");
else
printf("Special Character\n");
}

//Write a C program to add, subtract, multiply, and divide two integers using a user-defined type function with a return type.

#include<stdio.h>
int add(int x,int y)
{
return x+y;
}
int sub(int x,int y)
{
return x-y;
}
int mul(int x,int y)
{
return x*y;
}
float div(int x,int y)
{
return x/y;
void main()
{
int a,b;
printf("** C program to add, subtract, multiply and divide
two integers using a user-defined type function with a return
type. **\n");
printf("Name: Purbasa Seal, Class: MCA1A, Roll: 40\n");
printf("Enter Two Numbers :: \n");
scanf("%d %d",&a,&b);
printf("The Addition Result := %d\n",add(a,b));
printf("The Subtraction Result := %d\n",sub(a,b));
printf("The Multiplication Result := %d\n",mul(a,b));
printf("The Division Result := %f\n",div(a,b));
}

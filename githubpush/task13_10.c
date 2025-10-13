#include<stdio.h>

int Add(int a,int b)
{
int add=0;
add=a+b;
printf("Sum : %d",add);
}
int Subtract(int a,int b)
{
int subtract=0;
subtract=a-b;
printf("Subtract : %d",subtract);
}
int Multiply(int a,int b)
{
int multiply=0;
multiply=a*b;
printf("multiply : %d",multiply);
}
int Divide(int a,int b)
{
int divide=0;
divide=a/b;
printf("divide : %d",divide);
}
int main()
{
    int first,second,number;
printf("please enter the first number: ");
scanf("%d",&first);
printf("please enter the second number: ");
scanf("%d",&second);
printf("\npress 1 for adddition\npress 2 for subtract\npress 3 for multiply\npress 4 for divide\n");
printf("please enter the number: ");
scanf("%d",&number);
if(number==1)
{
    Add(first,second);
}
else if (number==2)
{
    Subtract(first,second);
}
else if (number==3)
{
    Multiply(first,second);
}
else if (number==4)
{
    Divide(first,second);
}
else
{
    printf("wrong input");
}

return 0;
}
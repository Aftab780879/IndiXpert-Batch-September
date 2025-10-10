#include<stdio.h>

int main()
{
int number;
printf("please enter a numer: ");
scanf("%d", &number);
if (number == 0)
{
    printf("please enter naturan numbers");
}
   else if(number%2==0)
{
    printf("number is a even number");
}
else
{
    printf("number is odd");
}

    return 0;
}
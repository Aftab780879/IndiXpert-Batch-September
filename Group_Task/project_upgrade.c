#include<stdio.h>

int Number_Entry(int number[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("please enter number %d: ",i+1);
        scanf("%d",&number[i]);
    }
    return size;
}
int Menu()
{
    int choice;
    printf("\n\n******MENU******\n");
    printf("1.Delete Last Entry\n");
    printf("2.View Records\n");
    printf("3.Insert number\n");
    printf("4.Exit\n");
    printf("Please Enter Your Choice: ");
    scanf("%d",&choice);
    return choice;
}
int View_Records(int number[],int size)
{
    if(size>0)
    {
        printf("\nRECORDS : ");
        for(int i=0;i<size;i++)
        {
        printf("\n%d",number[i]);
        }
    }
    else
    {
        printf("\n Record is Empty");
    }
    return size;
}
int Insert(int number[],int size)
{
   
    if(size<5)
    {
    printf("Please Insert a number: ");
    scanf("%d",&number[size]);
    size++;
    }
    else
    {
        printf("you have already inserted the maximum numbers");
    }
    return size;
}
int main()
{
int number[5];
int choice;
int size=5;
size = Number_Entry(number,size);
while(1)
{
   choice = Menu();
   if(choice==1)
   {
    if(size>0)
    {
    size--;
    }
   }
   else if(choice==2)
   {
    size=View_Records(number,size);
   }
   else if(choice==3)
   {
    size = Insert(number,size);
   }
   else if(choice==4)
   {
    break;
   }
   else
   {
printf("Invalid Input");
   }
}
    return 0;
}
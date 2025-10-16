#include<stdio.h>

int Number_Entry(int number[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("\nplease enter number %d: ",i+1);
        scanf("%d",&number[i]);
    }
}
int Menu()
{
    int choice;
    printf("\n\n******MENU******\n");
    printf("1.Delete Last Entry\n");
    printf("\n2.View Records");
    printf("3.Exit\n");
    printf("Please Enter Your Choice: ");
    scanf("%d",&choice);
    return choice;
}
int View_Records(int number[],int size)
{
    if(size>0)
    {
        printf("RECORDS : \n");
        for(int i=0;i<size;i++)
        {
        printf("\n%d",number[i]);
        }
    }
    else
    {
        printf("\n Record is Empty");
    }
}

int main()
{
int number[5];
int choice;
int size=5;
Number_Entry(number,size);
do
{
   choice = Menu();
   if(choice==1)
   {
    size--;
   }
   else if(choice==2)
   {
    View_Records(number,size);
   }
   else if(choice==3)
   {
    break;
   }
   else
   {
printf("Invalid Input");
   }
}while(1);

    return 0;
}
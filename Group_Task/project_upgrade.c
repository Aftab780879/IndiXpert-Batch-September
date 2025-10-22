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
    int choise;
    printf("\n\n******MENU******\n");
    printf("1.Delete Last Entry\n");
    printf("2.View Records\n");
    printf("3.Insert number\n");
    printf("4.Exit\n");
    printf("5.Report\n");
    printf("Please Enter Your Choice: ");
    scanf("%d",&choise);
    return choise;
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
int Report_Menu()
{
    int report_choise;
    printf("\n****** Report Menu ******\n");
    printf("1.Deleated numbers\n");
    printf("2.Inserted Numbers\n");
    printf("3.Back\n");
    printf("please enter your choise: ");
    scanf("%d",&report_choise);
    return report_choise; 
}
int Report_Operations(int deleted[],int inserted[],int inserted_count,int delete_count)
{
    int report_choise;
    while(1)
    {
    report_choise = Report_Menu();
    if(report_choise==1)
    {
        printf("\nDeleted numbers are: ");
        for(int i=0;i<delete_count;i++)
        printf("\t%d",deleted[i]);
    }
    else if(report_choise==2)
    {
        printf("Inserted numbers are: ");
        for(int i=0;i<inserted_count;i++)
        printf("\t%d",inserted[i]);
    }
    else if(report_choise==3)
    {
        break;
    }
    else
    {
        printf("wrong input");
    }
}
}

int Main_Operations(int choise,int size,int deleted[],int delete_count,int number[],int inserted[],int inserted_count)
{
while(1)
{
   choise = Menu();
   if(choise==1)
   {
    if(size>0)
    {
     deleted[delete_count]=number[size-1];
     delete_count++;
    size--;
    }
   }
   else if(choise==2)
   {
    size=View_Records(number,size);
   }
   else if(choise==3)
   {
    size = Insert(number,size);
    inserted[inserted_count]=number[size-1];
    inserted_count++;
   }
   else if(choise==4)
   {
    break;
   }
   else if(choise==5)
   {
    Report_Operations(deleted,inserted,inserted_count,delete_count);
   }
   else
   {
printf("Invalid Input");
   }
}
}



int main()
{
int number[5];
int deleted[5];
int inserted[5];
int inserted_count=0;
int delete_count=0;
int choise;
int size=5;
int report_choise;
size = Number_Entry(number,size);
Main_Operations(choise,size,deleted,delete_count,number,inserted,inserted_count);
    return 0;
}
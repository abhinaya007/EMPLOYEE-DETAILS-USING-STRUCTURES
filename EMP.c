#include<stdio.h>
struct employee
{
    int phno,age,salary;
    char name[30];
}emp[20];

void main()
{
    int i,n;
    printf("Enter the number of employees : ");
    scanf("%d",&n);
    printf("\nEnter employee details as  Name, Age, Phone Number, salary\n");
    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",(i+1));
        scanf("%s %d %d %d",emp[i].name,&emp[i].age,&emp[i].phno,&emp[i].salary);
    }
    printf("\nNAME\tAGE\tPHONE NUMBER\tSALARY\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%d\t%d\t\t%d\n",emp[i].name,emp[i].age,emp[i].phno,emp[i].salary);
    }
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Employee{
    int EID;
    char EFName[50];
    char ELName[50];
    
    struct HireDate
    {
        int a,b,c;
    }HD;
    
    int BSal;
    float NP;
};


int main()
{
    int t;
    printf("Enter number of employees whose data is to be added - ");
    scanf("%d",&t);
    printf("\n");
    
    struct Employee var[t];
    
    for(int i=0; i<t;i++)
    {
        printf("\nEnter data for employee %d\n",i+1);
        printf("   :-Enter employeeID - ");
        scanf("%d",&var[i].EID);
        
        printf("   :-Enter employee name - ");
        scanf("%s%s",&var[i].EFName, &var[i].ELName);
        
        printf("   :-Enter HireDate - ");
        scanf("%d %d %d",&var[i].HD.a, &var[i].HD.b, &var[i].HD.c);
        
        printf("   :-Enter employee Basic Salary - ");
        scanf("%d",&var[i].BSal);
        
        var[i].NP = var[i].BSal + 0.4*var[i].BSal + 0.1*var[i].BSal + 0.05*var[i].BSal;
    }
    
    for(int j=0; j<t; j++)
    {
        printf("\n\nThe data of employee with EmployeeID  %d is\n", var[j].EID);
        
        printf("   :-Employee name is - %s %s\n", var[j].EFName, var[j].ELName);
        
        printf("   :-Employee HireDate is %d-%d-%d\n", var[j].HD.a, var[j].HD.b, var[j].HD.c);
        
        printf("   :-Employee Basic salary is %d\n", var[j].BSal);
        
        printf("   :-Calculated Net Salary for the Employee is %.2f", var[j].NP);
    }
    
    
    
    
    return 0;
}

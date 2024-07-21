#include<stdio.h>
#include<conio.h>
#include<string.h>


typedef struct Employee
{
    int empID;
    char name[100];
    float salary;
}Employee;

int removeNewLine(char []);

int removeNewLine(char s[])
{
    int l= strlen(s);
    if(l>0 && s[l-1]=='\n')
    {
        s[l-1]='\0';
    }
    return l;
}

Employee inputStructure( )
{
    Employee e;
    printf("Enter details of Employee i.e. Employee ID: \n");
    scanf("%d", &e.empID);
    while(getchar()!='\n');
    printf("Enter details of Employee i.e.Name: \n");
    fgets(e.name, sizeof(e.name), stdin);
    removeNewLine(e.name);
    printf("Enter details of Employee i.e. Salary : \n");
    scanf("%f", &e.salary);

    return e;
}

int main()
{
    Employee e1;
    e1=inputStructure();

    printf("Employee ID of E1 is %d.\nEmployee name is %s.\nEmployee salary is %.2f", e1.empID, e1.name, e1.salary);
    getch();
    return 0;
}

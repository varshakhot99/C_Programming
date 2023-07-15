
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct stud
{
    int RollNo;
    char Name[20];
    char City[8];
    float Per;
};

int main()
{
    struct stud std1, std2, std3 = {2, "Varsha Khot", "Karad", 88.40};

    std1.RollNo = 7;
    strcpy(std1.Name,"Pooja Khot");
    strcpy(std1.City,"Tulsan");
    std1.Per = 78.77;

    printf("\n\n\t*************************************************************************************************************");

    printf("\n\t\tEnter Roll No. = ");
    scanf("%d",&std2.RollNo);

    printf("\n\t\tEnter Name = ");
    scanf(" %[^\n]",&std2.Name);
    fflush(stdin);

    printf("\n\t\tEnter City = ");
    scanf(" %[^\n]",&std2.City);
    fflush(stdin);

    printf("\n\t\tEnter Percentage = ");
    scanf("%f",&std2.Per);

    printf("\n\n\t*************************************************************************************************************");

    printf("\n\n\t\t1st Student Details =>\n\n\t\tRoll No = %d\n\n\t\tName = %s\n\n\t\tCity = %s\n\n\t\tPercentage = %f",std1.RollNo,std1.Name,std1.City,std1.Per);

    printf("\n\n\t*************************************************************************************************************");

    printf("\n\n\t\t2nd Student Details =>\n\n\t\tRoll No = %d\n\n\t\tName = %s\n\n\t\tCity = %s\n\n\t\tPercentage = %f",std2.RollNo,std2.Name,std2.City,std2.Per);

    printf("\n\n\t*************************************************************************************************************");

    printf("\n\n\t\t3rd Student Details =>\n\n\t\tRoll No = %d\n\n\t\tName = %s\n\n\t\tCity = %s\n\n\t\tPercentage = %f",std3.RollNo,std3.Name,std3.City,std3.Per);

    printf("\n\n\t*************************************************************************************************************");


}

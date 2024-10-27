#include <stdio.h>

struct Student
{
    char Name[50];
    char Address[100];
    unsigned int Student_ID;
};

int main()
{
    struct Student Record[20];
    printf("Enter Student details\n");
    for(int i = 0;i < 20;i++)
    {
        Record[i].Student_ID = i+1;
        printf("For Student Id = %d\n",Record[i].Student_ID);
        printf("Enter Student Name\n");
        gets(&Record[i].Name);
        printf("Enter Student Address\n");
        gets(&Record[i].Address);
    }

    printf("Student Record\n");
    printf("ID\tNAME\t\tADDRESS\n");
    for(int i = 0;i < 20;i++)
    {

        printf("%d\t%s\t\t%s\n",Record[i].Student_ID,Record[i].Name,Record[i].Address);
    }
    return 0;
}

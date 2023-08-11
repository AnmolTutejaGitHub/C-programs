// Read and print info of student using structures
#include <stdio.h>
struct student
{
    int rno;
    char name[30];
    float marks;
};

int main()
{
    struct student s;
    printf("\nEnter name,roll number and marks of a student:");
    gets(s.name);
    scanf("%d",&s.rno);
    scanf("%f",&s.marks);

    printf("\nStudent details are.....");
    printf("\nRoll number:%d",s.rno);
    printf("\nName:%s\nMarks:%f",s.name,s.marks);

    return 0;
}

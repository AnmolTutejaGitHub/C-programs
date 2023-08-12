//Nested Structures in C Programming
#include <stdio.h>
struct student
{
    int rno;
    float marks;
     struct date
     {
         int d,m,y;
     }dob,doadm,doexm;
};

int main()
{
    struct student s;

    printf("\nEnter roll number:");
    scanf("%d",&s.rno);

    printf("\nEnter marks:");
    scanf("%f",&s.marks);

    printf("\nEnter date of birth:");
    scanf("%d%d%d",&s.dob.d,&s.dob.m,&s.dob.y);

    printf("\nEnter date of admission:");
    scanf("%d%d%d",&s.doadm.d,&s.doadm.m,&s.doexm.y);

    printf("\nEnter date of examination:");
    scanf("%d%d%d",&s.doexm.d,&s.doexm.m,&s.doexm.y);

    printf("\nStudent Details.......");
    printf("\nRoll Number:%d",s.rno);
    printf("\nMarks:%f",s.marks);
    printf("\nDate of birth:%d-%d-%d",s.dob.d,s.dob.m,s.dob.y);
    printf("\nDate of admission:%d-%d-%d",s.doadm.d,s.doadm.m,s.doexm.y);
    printf("\nDate of admission:%d-%d-%d",s.doexm.d,s.doexm.m,s.doexm.y);


    return 0;
}

/* write a program which takes marks obtained in an examination out
of 100 from user and display to appropriate grade
90<marks<=100  A
80<marks<=90   B
70<marks<=80   C
60<marks<=70   D
50<marks<=60   E
   marks<=50   F*/

#include<stdio.h>
int main()
{
    int marks;

printf("Enter marks:");
scanf("%d",&marks);

switch(marks)
{
case 91 ... 100:      //  ...  used to denote range
    printf("Grade A");
    break;

case 81 ... 90:
    printf("Grade B");
    break;

case 71 ... 80:
    printf("Grade C");
    break;

case 61 ... 70:
    printf("Grade D");
    break;

case 51 ... 60:
    printf("Grade E");
    break;

case 0 ... 50:
     printf("Grade F");
     break;

default:
    printf("Enter valid marks");
}
return 0;
}

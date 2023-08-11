//Initializing an array of structures

#include <stdio.h>
struct date
{
    int d,m,y;
};

int main()
{
    struct date myDate[5]={{12,8,1987},{23,5,2000},{4,9,1984}}; //Initializes first three structures of array

  /* struct date myDate[5]={[3]={12,10,1975}}; //initializes 3rd index / 4th element of the array

   struct date myDate[5]={[4].m=12,[4].d=23}; //initializes m and d of 4th indexes of array  */



    return 0;
}

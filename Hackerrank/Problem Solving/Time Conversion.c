#include<stdio.h>
#include<string.h>

struct time 
{
    int h,m,s;
    char str[3];
};

int main()
{
    struct time t1;
    scanf("%d:%d:%d%s",&t1.h,&t1.m,&t1.s,t1.str);

    if(strcmp(t1.str,"PM")==0 && t1.h!=12)
       {
           t1.h=12+t1.h;
       }
    else if (strcmp(t1.str,"AM")==0 && t1.h==12)
    {
        t1.h=00;
    }
    else 
    {
        t1.h=t1.h;
    }
   printf("%02d:%02d:%02d",t1.h,t1.m,t1.s); //To print upto 2 digits , it will print 7 as 07 as per test cases
   
   return 0;
   
}

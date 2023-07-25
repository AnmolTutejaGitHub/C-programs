#include<stdio.h>
#include<windows.h>// for sleep function


int main()
{
    int hour,minute,second;
    printf("Enter current time:");
    scanf("%d%d%d",&hour,&minute,&second);

    start: ;
    for(hour;hour<24;hour++) //<=24 why not because there is nothing like 24:45:56
    {
        for(minute;minute<60;minute++)
        {
            for(second;second<60;second++)
            {
                Sleep(1000);
                printf("%d:%d:%d",hour,minute,second);
                system("cls"); //To clear screen

            } second =0;
        } minute=0;//when get out of loop after 60 it sets again to 0 to start next 60min
    }hour=0;
   goto start; //to get back after and start it again after completion of hr loop

   getch();

   return 0;
}

/* Logic clicked taken help for
1) goto function otherwise I would be creating another loop day putting condition day<2888899 or infinite day loop

2) when I run it(without sleep) it was running very fast so asked chatgpt a solution to cope up with time

 chatgpt:

The `sleep(1000)` function, used in this context, is a system call or library function that pauses the execution of
the program for a specified amount of time. The argument to `sleep` represents the number of seconds
(or in some systems, milliseconds) that the program should sleep or pause. In the provided code,
the `sleep(1000)` function call is used to pause the execution of the program for 1000 milliseconds,
which is equivalent to 1 second. This is done to ensure that the displayed time updates every second,
creating the effect of a real-time clock ticking. The `sleep` function is often used in programs
when you want to introduce delays or periodic actions without consuming CPU resources during that time.
It is especially useful in scenarios where you want to time an event or create animations, as well as in
cases where you want to control the pace of the program's execution.*/

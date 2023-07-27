//goto can be used in nested loop

#include<stdio.h>
int main()
{
    int num;

    for(int i=0;i<8;i++)
    {
        printf("\n%d",i);

         for(int j=0;j<8;j++)
         {
             printf("\nEnter the number.Enter 0 to exit.");
             scanf("%d",&num);

             //if(num==0)
                //break;  //this will only make us exit from 'j' loop so use goto to get out of all loops

                if(num==0)
                goto end;
         }
    }
    end:

return 0;
}

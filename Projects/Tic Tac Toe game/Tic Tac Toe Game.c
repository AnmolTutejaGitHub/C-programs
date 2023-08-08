//Tic Tac Toe Game

#include<stdio.h>
#include<stdlib.h>
int main()
{
 printf("\nThis is Tic Tac Toe Game.\n ");

 int arr[9];

  for(int i=0;i<9;i++)
 {
   arr[i] = i+1;
 }


 printf("\nEnter user A symbol(except numbers)");
 char n1;
 scanf("%c",&n1);
 printf("\nYour Entered character will be displayed as %d on the screen.",n1);

 back1:

 fflush(stdin);
 printf("\nEnter user B symbol(except numbers)");
 char n2;
 scanf("%c",&n2);
  printf("\nYour Entered character will be displayed as %d on the screen.\n",n2);
 if(n2==n1)
 {
  printf("\nInvalid Input.\nEnter again.!!!");
  goto back1;
 }

 int n=1;
 while(n)
 {
  start:
 printf("  %d  |  %d  | %d \n",arr[0],arr[1],arr[2]);
 printf("  %d  |  %d  | %d\n" ,arr[3],arr[4],arr[5]);
 printf("  %d  |  %d  | %d \n",arr[6],arr[7],arr[8]);

 back3 :
 printf("\nUser A turn:");
 printf("\nEnter number which you want to replace:");
 int turnA;
 scanf("%d",&turnA);
 if(turnA!=n1 && turnA!=n2) //So That user doesn't replace already changed no.'
  {
   for(int i=0;i<9;i++)
   {
    if(arr[i]==turnA)
    {
       arr[i]=n1;
    }
   }
  }

  else if (turnA==n1 || turnA==n2)
  {
   printf("\nIllegal Move..\nEnter Again...\n");
   goto back3;
  }
  back2 :
  back4 :
  printf("\nUser B turn:");
 printf("\nEnter number which you want to replace:");
 int turnB;
 scanf("%d",&turnB);
 if(turnB!=n1 && turnB!=n2)
  {
    if(turnB == turnA)
     {
      printf("\nInvalid Move.\nEnter Again!!\n");
      goto back2;
     }
   for(int i=0;i<9;i++)
   {
    if(arr[i]==turnB)
    {
       arr[i]=n2;
    }
   }
  }
   else if (turnB==n1 || turnB==n2)
  {
   printf("\nIllegal Move..\nEnter Again\n");
   goto back4;
  }
//Tic Tac Toe Logic

    if(arr[0]==n1 && arr[1]==n1  && arr[2]==n1)
    {
       printf("\nPlayer A wins !!");
        return 0;
    }

   else if(arr[3]==n1 && arr[4]==n1  && arr[5]==n1)
     {
        printf("\nPlayer A wins !!");
         return 0;
     }

    else  if(arr[6]==n1 && arr[7]==n1  && arr[8]==n1)
      {
        printf("\nPlayer A wins !!");
         return 0;
      }

    else if(arr[0]==n1 && arr[3]==n1  && arr[6]==n1)
       {
           printf("\nPlayer A wins !!");
           return 0;
       }

    else if(arr[1]==n1 && arr[4]==n1  && arr[7]==n1)
    {
       printf("\nPlayer A wins !!");
       return 0;
    }

    else  if(arr[2]==n1 && arr[5]==n1  && arr[8]==n1)
     {
         printf("\nPlayer A wins !!");
         return 0;
     }

   else  if(arr[0]==n1 && arr[4]==n1  && arr[8]==n1)
      {
          printf("\nPlayer A wins !!");
          return 0;
      }

    else  if(arr[2]==n1 && arr[4]==n1  && arr[6]==n1)
       {
           printf("\nPlayer A wins !!");
           return 0;
       }



  else if(arr[0]==n2 && arr[1]==n2  && arr[2]==n2)
  {
       printf("\nPlayer B wins !!");
        return 0;
   }


  else  if(arr[3]==n2 && arr[4]==n2  && arr[5]==n2)
   {
       printf("\nPlayer B wins !!");
       return 0;
   }

  else  if(arr[6]==n2 && arr[7]==n2  && arr[8]==n2)
    {
        printf("\nPlayer B wins !!");
        return 0;
    }

   else  if(arr[0]==n2 && arr[3]==n2  && arr[6]==n2)
     {
         printf("\nPlayer B wins !!");
         return 0;
     }

   else  if(arr[1]==n2 && arr[4]==n2  && arr[7]==n2)
      {
          printf("\nPlayer B wins !!");
          return 0;
      }

    else  if(arr[2]==n2 && arr[5]==n2  && arr[8]==n2)
       {
           printf("\nPlayer B wins !!");
           return 0;
       }

   else  if(arr[0]==n2 && arr[4]==n2  && arr[8]==n2)
       {
           printf("\nPlayer B wins !!");
           return 0;
       }

    else  if(arr[2]==n2 && arr[4]==n2  && arr[6]==n2)
      {
          printf("\nPlayer B wins !!");
          return 0;
      }

    else  if(arr[0]==n1 && arr[1]==n1 && arr[2]==n1 && arr[3]==n1 &&   arr[4]==n1 && arr[5]==n1 &&  arr[6]==n1 && arr[7]==n1 &&  arr[8]==n1 && arr[0]==n2 && arr[1]==n2 && arr[2]==n2 && arr[3]==n2 &&   arr[4]==n2 && arr[5]==n2 &&  arr[6]==n2 && arr[7]==n2 &&  arr[8]==n2)
       {
           printf("\nDraw !!! ");
           return 0;
       }

system("cls");
goto start;

 }
}


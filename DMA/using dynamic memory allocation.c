/* write a program that allows a user to input a text string.The program will print the text
that was inputted . The program will utilize dynamic memory allocation */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    char*text=NULL;

    printf("\nEnter limit of the text: ");
    scanf("%d",&size);

    text=(char*)malloc(size*sizeof(char));

    if(text!=NULL)
    {
        printf("\nEnter some text:");
        scanf(" "); //To read next character
        gets(text);

        printf("\nInputted text is %s",text);
    }
    free(text);
    text=NULL;

    return 0;
}

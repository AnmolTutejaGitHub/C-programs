//write a function to check whether a given pattern is present in a string or not
//(return starting index of this pattern , if not present return -1)

int findPattern(char str[], char p[])
{
    int i,j,k;

     for (i=0;i<=strlen(str)-strlen(p);i++)
     {
         for(j=i,k=0;p[k];j++,k++)
         {
             if(p[k]!=str[j])
                break;
         }
         if(!p[k])
            return i;
     }
     return -1;
}

int main()
{
    printf("%d",findPattern("ahfkdrysrkhfy5dk6rdk6kee6dkkkkkkk","6rdk6"));

    getch();

    return 0;
}

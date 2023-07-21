//write a function to count number of vowels in a given string

int countVowels(char s[])
{
    int i;
    int count=0;
for(i=0;s[i];i++)
{
    if(s[i]=='a'|| s[i]=='e' || s[i]=='o'|| s[i]=='i'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E' || s[i]=='O' || s[i]=='U')
        count ++;
}
   return count;
}

main()
{
    printf("%d",countVowels("Anmol Tuteja"));

    getch();
}
/* int countVowels()
{
   int i,v,count;

   char v[]="aeiouAEIOU" ;

   for(i=0;s[i];i++)
   {
   for(j=0;v[i];j++)
   {
     if(s[i]==v[j])
     {
     count++;
     break;
     }
   }
   }
   return count;
}
*/

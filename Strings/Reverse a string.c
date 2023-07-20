//write a function to reverse a string

int length(char s[])
{
    int i;

    for(i=0;s[i]!='\0';i++);

    return i;
}

char*reverse(char s[])
{
    int i,l,j;
    char temp[20];
    l=length(s);

    for(i=l-1,j=0;i>=0;i--,j++)
    {
        temp[j]=s[i];
    }

    for(i=0;i<l;i++)   //to store rev s (temp) back into s
       s[i]=temp[i];

       return s;
}

// now make main()

main()
{

}

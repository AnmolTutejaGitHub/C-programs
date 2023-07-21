//write a function to convert a string into uppercase

char* upper (char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]=s[i] - 32;
    }
       return s;
}

main()
{

}

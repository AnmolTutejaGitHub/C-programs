//write  a function to check whether a given string is alphanumeric or not
#define true 1
#define false 0
 _Bool isAlphanumeric(char s[])
{
    int i;
    _Bool alpha = false;
    _Bool digit = false;

    for(i=0;s[i];i++)
    {
        if(s[i]>='0'&&s[i]<='9')
            digit = true ;

        if(s[i]>='a' && s[i]<='z' || s[i]>='A'&& s[i]<='Z')
            alpha = true;
    }

    if(digit && alpha)
        return true;

    return false;
}

int main()
{
    printf("%d",isAlphanumeric("abc123"));
    getch();

return 0;
}

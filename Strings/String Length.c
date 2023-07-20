//Write a function to calculate length of a string

int length (char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++); // can also write s[i] instead of s[i]!='\0' because ASCCI value of \0 is zero so condition becomes false and loop will end

        return i;
}

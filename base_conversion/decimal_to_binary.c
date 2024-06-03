#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    char str[26];
    dToB(n,str);
    reverse(str);
    printf("%s",str);
    return 0;
}

void dToB(int n,char str[]){
    int i =0;
    if(n==0) {
        str[i]='0';
        str[++i]='\0';
    return;
    }
    while(n!=0){
        int rem = n%2;
        str[i++]=(rem==0)?'0':'1';
        n = n / 2;
    }
   str[i]='\0';
}

void reverse(char str[]){
    int s = 0;
    int e = strlen(str)-1;
    while(s<e){
        char temp = str[s];
        str[s]=str[e];
        str[e] = temp;
        s++;
        e--;
    }
}

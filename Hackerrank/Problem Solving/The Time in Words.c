#include<stdio.h>

//here can be done without using pointers using 2D array
//not 1D array because eg char hour[100] this array can hold 100 characters but not multiple string .
//note char array is string char name[10] ="Anmol"; is declaration of srting
//Thats why need of 2D char array; one D for string and another is array of string
//2D array declaration this type:
//char hours[13][10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"};
//in above 10 is lenght for each string 
// otherwise if I have to make like this:
// char hours0="";
// char fours1="one"; ........
// then an array to strore all these above strings  
//      OR    use 2D array;

// char minutes [30][10]={"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten","eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"};

//   OR most simple solution is to use pointers

// Pointer to 2d array:
//

char* hours[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"};

char* minutes[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten","eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"};

int main() {
    
    int h, m;
    scanf("%d%d", &h, &m);
    if (m == 0) {
        printf("%s o' clock\n", hours[h]);
    } else if (m == 15) {
        printf("quarter past %s\n", hours[h]);
    } else if (m == 30) {
        printf("half past %s\n", hours[h]);
    } else if (m == 45) {
        printf("quarter to %s\n", hours[h % 12 + 1]);
    } else if (m < 30) {
        printf("%s %s past %s\n", minutes[m], (m == 1) ? "minute" : "minutes", hours[h]);
    } 
    else
     {  printf("%s %s to %s\n", minutes[60 - m], (60 - m == 1) ? "minute" : "minutes", hours[h % 12 + 1]);
    }
    return 0;
}

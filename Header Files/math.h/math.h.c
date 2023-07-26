//Use of math.h
#include <stdio.h>
#include <math.h>

int main()
{
    double A= sqrt(9);
    printf("\n%lf",A);

    double B=pow(2,4);
    printf("\n%lf",B);

    int C= round(3.14); //it will round off
    printf("\n%d",C);

    int D = ceil(3.14); //rounds up
    printf("\n%d",D);

    int E = floor(3.99); //rounds down

    double F = fabs(-22); //absolute value
    printf("\n%lf",F);

    double G = log(3); //log of a number
    printf("\n%lf",G);

    double H = sin(45);
    printf("\n%lf",H);

    double I = cos(45);
    printf("\n%lf",I);

    double J = tan(45);
    printf("\n%lf",J);


    return 0;
}

#include<stdio.h>
int main()
{
    int rd;          //returned on this date
    int rm;
    int ry;
    scanf("%d %d %d",&rd,&rm,&ry);
    
    int dd;                  //due date
    int dm;
    int dy;
    scanf("%d %d %d",&dd,&dm,&dy);
    
    
    if(rd<=dd && rm<=dm && ry<=dy)
    printf("0");
   else if(rm<dm && ry<=dy)
    printf("0");
   else if(ry<dy)
    printf("0");
    
    
    
   else if(rd>dd && rm==dm && ry==dy)
   printf("%d",15*(rd-dd));
   
   else if (rm>dm && ry==dy)
   printf("%d",500*(rm-dm));
   
   else if(ry>dy)
   printf("%d",10000);
    
}

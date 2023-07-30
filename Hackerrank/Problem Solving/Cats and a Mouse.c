#include<stdio.h>
#include<math.h>

int main()
{
    int q;
    scanf("%d",&q);
    
    int x;            //Cat A
   // scanf("%d",&x);  //reads only one time
    
    int y;            //Cat B
   // scanf("%d",&y);
    
    int z;
    // scanf("%d",&z);    //Mouse C
    
    while(q)
    {
      scanf("%d%d%d",&x,&y,&z);
    
      if( abs (  (z-x) ) > abs ( (z-y) ) )
        printf("Cat B\n");
        
        else if( abs ( (z-x) ) < abs( (z-y) ) )
        printf("Cat A\n");
        
        else if(abs((z-x))==abs((z-y))) 
        printf("Mouse C\n");
        
        q--;
        
    }
}

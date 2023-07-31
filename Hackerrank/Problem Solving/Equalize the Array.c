#include<stdio.h>

//Aim -- To delete min no. of elements in the array so that the remaining array has only equal value elements(2,2) as in exaMPLE.
//so find value with max no. of frequency in the array and delete the remaining elements.

int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    // int freq[n]={0}; //to keep trace of frequency ofeach element of array  ;; freq[n] cant be initialised as variable size array cant be initialised
    int freq[100]={0}; //see constraints in que
    // all elements of freq array initialised to zero
    
    
    int maxfreq; //to keep trace of max frequency
    
    int maxfreqElement;
    
    maxfreq = freq[0]; //initialise with 1st element of frequency
    
    //first form array of frequency then find max of elements of frequency array
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        
         if(arr[i]==arr[j])
          freq[i]++;   //if ai !=aj then freqi=0
           
           //thinking og logic to avioid this:
           // arr={1,2,2,3}; then:
           //freq={0,2,2,0};
           //so no proble with two times two , I think stop thinking
        //now think of logic to finding max element of frequency array    (maxfreq)
    }
    
    for(int i=0;i<n;i++)
    {
        if(maxfreq<freq[i])   //largest< wala logic
        {   maxfreq=freq[i];
         // //   maxfreqElement=arr[i];
        }
    }
  //  //now form array with maxfreqElement with maxfreq times
   // // == array of n same valued elements (array size is to n)
  //  //== printing maxfreqElement , maxfreq times using loop
    
  // // for(int i=0;i<maxfreq;i++)
 //  //  printf("%d ",maxfreqElement);
  
  //our aim is to print no. of deletions not this so commented out(double comments)
  
  int minDeletion = n - maxfreq;
  printf("%d",minDeletion);
}

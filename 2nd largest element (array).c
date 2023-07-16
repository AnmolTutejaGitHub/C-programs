/*A C program that takes input from user to populate an array of integers.
the program then finds and display the second largest element in the array */
#include <stdio.h>

  main()
{
  int size,i;
  int largest,secondLargest;

  printf("Enter the size of the array:");
  scanf("%d",&size);

  int arr[size];

  printf("enter the elements of the array:\n");
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);

  //initializing the largest and secondLargest with first two elements

  if(arr[0]>arr[1]){
    largest=arr[0];
    secondLargest= arr[1];
  }

  //Finding largest and 2nd largest element in the array
  for(i=2;i<size;i++){
    if(arr[i]>largest){
        secondLargest=largest;
        largest = arr[i];
    }
    else if (arr[i]>secondLargest && arr[i]<largest){
        secondLargest=arr[i];
    }
  }
  printf("Second largest element is:%d\n",secondLargest);
}

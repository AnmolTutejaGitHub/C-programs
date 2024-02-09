#clearing buffer in c

    int a;
    int b;
    char operation;
    scanf("%d/n",&a);
    scanf("%d/n",&b);
    printf("Enter operation :");
     while(getchar() != '\n'); // clears buffer 
     // fflush (stdin);
    scanf("%c",&operation);
    // or can clear buffer with  scanf(" %c",&operation);

  note : In C, fflush(stdin); is undefined behavior according to the C standard. It's primarily used for output streams, not input streams. Its behavior is unpredictable on input streams and can lead to unexpected results.

To clear the input buffer in C, you can use a loop to read and discard characters until you encounter a newline character '\n'.   while(getchar() != '\n'); // clears buffer 

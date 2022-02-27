#include <stdio.h>
 
int main()
{
   int num1, num2; //declaring 2 numbers of type int 
 
   printf("\nEnter the value of the first number\n"); //printf to ask user to input values
   scanf("%d", &num1); //scanf to input values
   printf("Enter the value of the second number\n");
   scanf("%d", &num2);
 
   printf("\nBefore Swapping, the numbers as you entered are \n");
   printf("first number = %d\n", num1);
   printf("second number = %d\n", num2);
   printf("\n");
   num1 = num1 + num2; //swapping without temp variable
   num2 = num1- num2;
   num1 = num1 - num2;
 
   printf("After swapping, the numbers become :  \n"); //displaying the required output
   printf("first number becomes = %d\n", num1);
   printf("second number becomes = %d\n", num2);
   printf("\n");
 
   return 0;
}

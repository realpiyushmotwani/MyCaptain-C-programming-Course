#include <stdio.h>
 
int main()
{
   int marks; //declaring int type variable for marks
 
   printf("\nEnter the marks obtained \n");
   scanf("%d", &marks);
   
   //85 - 100 -> Grade A 70 - 84 -> Grade B 55 - 69 -> Grade C 40 - 54 -> Grade D Below 40 -> Grade F
   //Hence, we use  an if - else ladder
   if(marks<=100 && marks>=85)
   {
       printf("%d out of 100 -  Grade A", marks);
   }
   
   else if(marks<=84 && marks>=70)
   {
       printf("%d out of 100 -  Grade B", marks);
   }
  
   else if(marks<=69 && marks>=55)
   {
       printf("%d out of 100 -  Grade C", marks);
   }
  
   else if(marks<=54 && marks>=40)
   {
       printf("%d out of 100 -  Grade D", marks);
   }
  
   else
   {
       printf("%d out of 100 -  Grade F", marks);
   }
  
 
   return 0;
}

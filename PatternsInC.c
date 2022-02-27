#include <stdio.h>
 
int main()
{

int i,j,n;
printf("Enter the number of rows: ");
scanf("%d",&n);


/***
 pattern 1
 
 
* * * * * * 
* * * * *
* * * *
* * *
* *
*


 * ***/

for(i=1;i<=n;i++)
{
    for (j = n;j>=i;j--)
    {
        printf("* ");
    }
    printf("\n");
    
}



/***
 pattern 2
             *
           * *
         * * *
       * * * *
     * * * * *
   * * * * * * 
 

 
 ***/

//Outer loop work for rows  
for (i=0; i<n; i++)   
{  
//inner loop work for space      
for (j=2*(n-i); j>=0; j--)         
{  
//prints space between two stars      
printf(" ");   
}   
//inner loop for columns  
for (j=0; j<=i; j++ )   
{   
//prints star      
printf("* ");   
}   
//throws the cursor in a new line after printing each line  
printf("\n"); 
}




/***
 pattern 3 

     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *




 * ***/   
//Outer loop work for rows  
for (i=0; i<n; i++)   
{  
//inner loop work for space      
for (j=n-i; j>1; j--)   
{  
//prints space between two stars  
printf(" ");   
}   
//inner loop for columns  
for (j=0; j<=i; j++ )   
{   
//prints star      
printf("* ");   
}
printf("\n");
}
}

#include <stdio.h>
 
int main()
{
    
    int ch;    //to store the choice in switch case function

/***
1. Pizza, Rs 239
2. Burger, Rs 129
3. Pasta, Rs 179
4. French Fries, Rs 99
5. Sandwich, Rs 149
***/
    
    printf("Enter your choice (1,2,3,4,5)): "); //choosing a number for the menu
    scanf("%d",&ch);
     
    
    switch(ch)  
    {
        case 1:
            printf("Food Item: Pizza \n");
            printf("Price: Rs 239");
            break;
             
        case 2:
            printf("Food Item: Burger \n");
            printf("Price: Rs 129");
            break;
         
        case 3:
            printf("Food Item: Pasta \n");
            printf("Price: Rs 179");
            break;
             
        case 4:
            printf("Food Item: French Fries \n");
            printf("Price: Rs 99");
            break;
             
        case 5:
            printf("Food Item: Sandwich \n");
            printf("Price: Rs 149");
            break;

        default:
            printf("Invalid input.\n");
    }
    return 0;
}

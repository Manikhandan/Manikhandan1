#include <stdio.h>
 
int main()
{
    int     num;
    char    choice;
    do
    {
        printf("Enter an integer number :");
        scanf("%d",&num);
  
        if(num==0)      
            printf("Number is ZERO.");
        else if(num>0)   
            printf("Number is POSITIVE.");
        else          
            printf("Number is NEGATIVE.");
  
        printf("\n\nWant to check again (press Y/y for 'yes') :");
        fflush(stdin);      /*to clear input buffer*/
        scanf(" %c",&choice); /*Here is a space before %c*/
    }while(choice=='Y' || choice=='y');
 
    printf("\nBye Bye!!!");
  
    return 0;
}

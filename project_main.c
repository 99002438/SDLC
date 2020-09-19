#include "calculator_operations.h"
int main()
{
    int option;
    int n1;
    int n2;
 
    // Function call 
    //calculator_operations();
        //printf("%s : ", KEY);
 
        //Calc_oprn=getche();
 
        switch(option)
        {
            case '+': addition(n1,n2);
                      break;
 
            case '-': subtraction(n1,n2);
                      break;
 
            case '*': multiplication(n1,n2);
                      break;
 
            case '/': division(n1,n2);
                      break;
 
            case '%': modulus(n1,n2);
                      break;
 
            case '!': factorial(n1,n2);
                      break;
 
            case '^': power(n1,n2);
                      break;
                
            case '!':factorial(n1);
                      break;
 
           /* case 'H':
            case 'h': calculator_operations();
                      break;
 
            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      calculator_operations();
                      break;
 
            default : system("cls");
            */
 
    }
    return 0;
}
 
//Function Definitions
 
/*void calculator_operations()
{
    //system("cls");  use system function to clear 
    //screen instead of clrscr();
    printf("\n             Welcome to C calculator \n\n");
 
    printf("******* Press 'Q' or 'q' to quit ");
    printf("the program ********\n");
    printf("***** Press 'H' or 'h' to display ");
    printf("below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");
 
    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter ? symbol for Modulus\n");
    printf("Enter ^ symbol for Power \n");
    printf("Enter ! symbol for Factorial \n\n");
}*/

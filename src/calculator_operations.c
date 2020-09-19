#include "calculator_operations.h"
int add(int number1,int number2)
{
    int total;
    total=number1+number2;
    return total;
}
 
int subtract(int number1,int number2)
{ 
   int total;
    total=number1-number2;
    return total;
}
 
int multiply(int number1,int number2)
{
    int total;
    total=number1*number2;
    return total;
}
 
float divide(int number1,int number2)
{
   float total;
    total=number1/number2;
    return total;
}
 
int modulus(int number1,int number2)
{
   int answer=0;
    answer=number1%number2;
    return answer;
}
 
int power(int number,int pow)
{
   int answer=1;
    while(pow !=0)
    {
        answer *= number;
        --pow;
    }
}
 
int factorial(int number)
{
   int i;
    int factorial=1;
    if(number<0)
    {
        printf("\nEnter positive number");
        return 1;
    }
    for(i=1;i<=number;i++)
        factorial=factorial*i;
    return factorial;
}
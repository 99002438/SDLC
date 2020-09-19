#include "calculator_operations.h"
int add(int number1,int number2)
{
   int result;
    result=number1+number2;
    return result;
}
 
int subtract(int number1,int number2)
{ 
  int result;
    result=number1-number2;
    return result;
}
 
int multiply(int number1,int number2)
{
   int result;
    result=number1*number2;
    return result;
}
 
float divide(int number1,int number2)
{
    float result;
    result=number1/number2;
    return result;
}
 
int modulus(int number1,int number2)
{
   int ans=0;
    ans=number1%number2;
    return answer;
}
 
int power(int number,int pow)
{
    int ans=1;
    while(pow!=0)
    {
        anw *=number;
        --pow;
    }
    return ans;
}
 
int factorial(int number)
{
    int i;
    int factorial=1;
    if(number<0)
    {
        printf("\nEnter positive number");
        printf("\n Factorial can't be found for negative numbers");
        return 1;
    }
    for(i=1;i<=number;i++)
        factorial=factorial*i;
    return factorial;
    
}

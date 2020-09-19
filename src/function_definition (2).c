#include "calculator_operations.h"
int add(int number1,int number2)
{
    int n, total=0, k=0, number;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    { 
        scanf("%d",&number);
        total=total+number;
        k=k+1;
    }
    return total;
}
 
int subtract(int number1,int number2)
{ 
    int a, b, c = 0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &a); 
    printf("Please enter second number : "); 
    scanf("%d", &b); 
    c = a - b; 
    return c;
}
 
int multiply(int number1,int number2)
{
    int a, b, mul=0; 
    printf("\nPlease enter first numb   : "); 
    scanf("%d", &a); 
    printf("Please enter second number: "); 
    scanf("%d", &b);
    mul=a*b;
    return mul;
}
 
float divide(float number1,float number2)
{
    int a, b, d=0; 
    printf("\nPlease enter first number  : "); 
    scanf("%f", &a); 
    printf("Please enter second number : "); 
    scanf("%f", &b);
    d=a/b;
    return d;
}
 
float modulus(float number1,float number2)
{
    int a, b, d=0; 
    printf("\nPlease enter first number   : "); 
    scanf("%f", &a); 
    printf("Please enter second number  : "); 
    scanf("%f", &b);
    d=a%b;
    return d;
}
 
double power(double number1,double number2)
{
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);
 
    printf("power : ");
    scanf("%lf",&num);
 
    p=pow(a,num);
 
    return p;
}
 
int factorial(int number1)
{
    int i,fact=1,num;
 
    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);
 
    if (num<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }               
 
    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    return 0;
}

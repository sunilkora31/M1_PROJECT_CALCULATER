#include <iostream>
#include <calculator.h>
using namespace std; 
  

int addition(int number1,int number2)
{
   long sum=0;
   sum=number1+number2;
   return sum;
}

 int subtraction(int number1,int number2)
{
	int subtract=0;
	subtract = number1-number2;
	return subtract;
}

int multiplication(int number1,int number2)
{
	int multiply=0;
	multiply = number1*number2;
	return multiply;
}

int division(int number1,int number2)
{
	int division;
	
	if(number2==0)
		return 0;
	else
	{
		division = number1/number2;
		return division;
	}
}

int modulus(int number1,int number2)
{
	int modulus;
	modulus = number1%number2;
	return modulus;
}

int power(int number1,int number2)
{
	int power=1;
	while(number2!=0)
	{
		power= power*number1;
		--number2;
	}
	return power;
}

int factorial(int number1)
{
	int temp;
	long fact=1;
	if(number1<0)
	{
		cout << "Enter positive number\n";
	}
	else
	{ 
	       for(temp=1;temp<=number1;temp++)
	       {
		    fact=fact*temp;
               }
	           return fact;
	}
}
	

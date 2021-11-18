# M1_application_CALCULATER
I wish to create calculater program by c programming
#include <stdio.h>
int main(){
    printf("my calculater");
    return 0;
}


my project requirment are;

The calculator has the following keys: 0..9, ., +, -, *, /, ±, =, C, CE and 1-operand keys: 1/x, x2
sqrt. 
In any situation the calculator has to produce a correct result defined by the well known
arithmetic rules.
 If the calculations is impossible the calculator has to display information helping
the user to resolve the erroneous situation,
 like:
On encountering a division by 0 the display should read "Cannot divide by 0" and typing the
key “C” should reset the calculator.
 On calculating the square root value of a negative operand the display should read "Wrong
operand".
On erroneous operand or operation keys the display should read “Reset (C) to continue” or
“Clear (CE) to continue” as appropriate.
Of course, any situation can be cleared using the main reset key “C”.

Design
The calculator design system
Before we start to think about a calculator state machine we should make a design of the
calculator control system. 
Parse the incoming keys and assign them to the appropriate control value.
• Complete an Expression string from incoming keys.
• Perform a calculation defined by the Expression string according to arithmetic rules, when
1/12
encountering operator keys +, -, *, / as well as the Equals key =. We notice that we need
several calculation functions as the the rule for a calculation after Equals key and addition
and subtraction operators are different than for multiplication and division operators. 

Architecture of calculater
 Casio FX-115ES Plus Scientific Calculator
Casio fx-300MS Plus Scientific Calculator
Bambalio BL82MS Scientific Calulator
Protokart Battery Powered 2 Line LCD Display Business SAT/AP Test Engineering Scientific Calculator.
these are the some calculater Architecture im reffering to build my mini project.
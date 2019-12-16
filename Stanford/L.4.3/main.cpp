/*
 * File: rpncalc.cbp
 * -----------------
 * This program simulates an electronic calculator that uses
 * reverse Polish notation, in which the operators come after
 * the operands to which they apply.
 */

#include <iostream>
#include <cctype>
#include "genlib.h"     // Stanford lib
#include "simpio.h"     // Stanford lib
#include "strutils.h"   // Stanford lib
#include "stack.h"      // Stanford lib

// Private function prototypes

void ApplyOperator(char op, Stack<double>& operandStack);
void HelpCommand();
void ClearStack(Stack<double>& operandStack);

using namespace std;

int main()
{
    Stack<double> operandStack;

    cout << "RPN Calculator Simulation (type H for Help)" << endl;

    while (true)
    {
        cout << "> ";
        string line;
        getline(cin, line);
        char ch = toupper(line[0]);
        if (ch == 'Q')
        {
            break;
        }
        else if (ch== 'C')
        {
            ClearStack(operandStack);
        }
        else if (ch == 'H')
        {
            HelpCommand();
        }
        else if (isdigit(ch))
        {
            operandStack.push(StringToReal(line));
        }
        else
        {
            ApplyOperator(ch, operandStack);
        }
    }
    return 0;
}

/*
 * Function: ApplyOperator()
 * Usage: ApplyOperator(op, operandStack);
 * ---------------------------------------
 * This function applies the operator to the top two elements on
 * the operand stack. Because the element on the stack are
 * popped in reverse order, the right operand is popped before
 * the left operand.
 */

void ApplyOperator(char op, Stack<double>& operandStack)
{
    double result;

    double rhs = operandStack.pop();
    double lhs = operandStack.pop();

    switch (op)
    {
    case '+':
        result = lhs + rhs;
        break;
    case '-':
        result = lhs - rhs;
        break;
    case '*':
        result = lhs * rhs;
        break;
    case '/':
        result = lhs / rhs;
        break;
    default:
        Error("Illegal operator");
    }
    cout << result << endl;
    operandStack.push(result);
}

/*
 * Function: HelpCommand()
 * Usage: HelpCommand();
 * -----------------------
 * This function generates a help message for the user.
 */

 void HelpCommand()
 {
     cout << "Enter expressions in Reverse Polish Notation," << endl;
     cout << "in which operators follow the operands to which" << endl;
     cout << "they apply. Each line consists of a number, an" << endl;
     cout << "operator, or one of the following commands:" << endl;
     cout << "  Q -- Quit the program" << endl;
     cout << "  H -- Display this help message" << endl;
     cout << "  C -- Clear the calculator stack" << endl;
 }

 /*
  * Function: ClearStack()
  * Usage: ClearStack(stack);
  * -------------------------
  * This function clears the stack by popping elements until empty.
  */

void ClearStack(Stack<double>& stack)
{
    while (!stack.isEmpty())
    {
        stack.pop();
    }
}

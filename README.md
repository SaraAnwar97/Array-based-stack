# Array-based-stack
## About
A stack is a container of objects that are inserted and removed according
to the last in, first-out (LIFO) principle.<br>
• Inserting an item is known as “pushing” onto the stack.<br>
• Removing an item is known as “Popping” from the stack.<br>
So there are 2 main operations in stack push and pop.
## Program
### Part 1:
A Stack Array Based C program with the following function:
1. Initialize<br>
Prototype -> void initialize(Stack * s);<br>
It initializes stack so that there are no elements inserted.
2. Pop<br>
Prototype -> int pop (Stack *s);<br>
It removes the last inserted element in the stack and return it.
3. Push<br>
Prototype  -> void push(Stack *s,int value);<br>
It inserts element at the top of the stack.
4. Top<br>
Prototype  -> int top( Stack *s);<br>
It returns the last inserted element in the stack without removing it.
5. isEmpty<br>
Prototype  -> int isEmpty(Stack *s);<br>
It returns 1 if stack is empty or 0 otherwise.
### Part 2:
a C function that takes a postfix expression as
input and shows the value of the expression as output.
The input will be a postfix (not infix) and the stack
implementation is used to evaluate the expression.<br>
Function prototype -> int evaluatePostfix(char postfix[]);<br>
For Example:<br>
Input (Postfix): 124\*\+3+ <br>
Output: 12<br>
### Part 3:
a C function that takes a infix expression as
input and convert it to postfix then evaluate the value of the expression
using the function made in part 2.<br>
Function prototype -> void infixTopostfix(char infix[], char postfix[]);<br>
Note that infix input is the infix expression and postfix is an empty array and will be filled with postfix expression.
Then string is taken as input from user, Converted it using function made in part 3 and then postfix function made in part 2 is called.<br>
Example 1:<br>
Input (Infix): 1+2\*4+3 <br>
Output (Postfix): 124\*\+3+<br>
Value 12<br>
Example 2:<br>
Input (Infix): (1+2)\*4+3<br>
Output (Postfix): 12+4\*3+<br>
Value 15

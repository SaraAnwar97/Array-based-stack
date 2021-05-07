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

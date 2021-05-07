#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 1000
#define TYPE int
#include<string.h>
typedef struct{
TYPE items[SIZE];
TYPE top;
}stack;
void initialize (stack *s){
    s->top=0;
}
void push(stack *s, TYPE value){
s->items[s->top]=value;
s->top++;
}
TYPE pop(stack *s){
s->top--;
return s->items[s->top];
}
TYPE top (stack *s){
return s->items[s->top-1];}
TYPE isempty(stack *s){
if(s->top==0)
    return 1;
    return 0;
}
TYPE peek (stack *s)
{
    TYPE value= pop(s);
    push(s,value);
    return value;
    }
TYPE evaluatePostfix(char postfix[]){
stack* s=(stack *)malloc(sizeof(stack));
 initialize(s);
TYPE i;
for(i=0;i<strlen(postfix);i++){
    if(isdigit(postfix[i])){
        push(s,postfix[i]-'0');
    }
     else  {
        TYPE a=pop(s);
    TYPE b= pop(s);
    switch (postfix[i]){
    case '+':
        push(s,a+b);
        break;
    case'-':
        push(s,b-a);
         break;
    case'*':
        push(s,a*b);
        break;
    case'/':
        push(s,b/a);
         break;
    default:
        break;}
    }
}
 TYPE y=pop(s);
 return y;
}
TYPE priority(char c){
    if (c>='0'&& c<='9')
        return 0;
    switch (c){
case '+' :
case '-' :
     return 1;
case '*' :
case '/' :
    return 2;
case '(' :
       return 9;
default :return
-1;
    }
}
void infixTopostfix1(char infix[],char postfix[]){
    stack* p= (stack* )malloc(sizeof(stack));
    char c;
    TYPE index=0;
    while (c=*infix++){
        TYPE pr= priority(c);
        if(!pr)
            postfix[index++]=c;
        else if (c=='('){
            while(!isempty(p)&&peek(p)!=')')
                postfix[index++]=pop(p);
                pop(p);
        }
        else {
            while (!isempty(p)&&priority(peek(p))>=pr&&peek(p)!='(')
            {
                char value=pop(p);
                if(value!='(')
                   postfix[index++]=value;
            }
            push(p,c);
        }

    }

    while (!isempty(p))
        postfix[index++]=pop(p);
    postfix[index++]=0;
    for (index=0;index<strlen(postfix);index++) printf("%c ",postfix[index]);printf("\n");

}
void infixTopostfix(char infix[],char postfix[]){
    char ch;TYPE index=0;
    stack *s=(stack *)malloc(sizeof(stack));
while (ch=*infix++) {
TYPE pr=priority(ch);
if (!pr) postfix[index++]=ch;
else if (ch==')') // pop up to (
{
while(!isempty(s) && peek(s)!='(') postfix[index++]=pop(s);
pop(s);
}
else {
while(!isempty(s) && priority(peek(s))>=pr && peek(s)!='(')
{char value=pop(s); if (value!='(') postfix[index++]=value;}
push(s,ch);
}
}
while(!isempty(s)) postfix[index++]=pop(s);// remaining
postfix[index++]=0;
for (index=0;index<strlen(postfix);index++) printf("%c ",postfix[index]);printf("\n");
}

int main()
{
 char str[100];
 char infix[100];
 char postfix[100];
 printf("please enter the expression: *Postfix Expression* ");
 scanf("%s",str);
printf("%d\n",evaluatePostfix(str));
printf("Please enter the expression: *Infix Expression* ");
scanf("%s",infix);
infixTopostfix(infix,postfix);
printf("value of expression=%d\n",evaluatePostfix(postfix));

    return 0;
}

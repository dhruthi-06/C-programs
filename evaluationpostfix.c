#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#define max_size 10
void push(int s[max_size],int *top,int elem)
{ 
    if((*top)==max_size-1)
    {
        printf("Overflow Condition\n");
        return;
    }
    (*top)++;
    s[*top]=elem;
}
int pop(int s[max_size],int *top)
{   int elem;
    if((*top)==-1)
    {
        printf("Underflow condition\n");
    }
    else{
         elem=s[*top];
    (*top)--;
    return elem;

    }
   
}
int compute(int op1,char op,int op2)
{
    while(1)
    {
        switch(op)
        {
            case '+':return op1+op2;
            case '-':return op1-op2;
            case '*':return op1*op2;
            case '/':return op1/op2;
            case '%':return op1%op2;
            case '$':
            case '^':return pow(op1,op2);
        }
    }
}
int eval_post(char postfix[20])
{
    int i,s[max_size],top=-1,op1,op2,res;
    char symbol;
    for(i=0;postfix[i]!='\0';i++)
    {
        symbol=postfix[i];
        if(isdigit(symbol))
          push(s,&top,symbol-'0');
        else
        {
            op2=pop(s,&top);
            op1=pop(s,&top);
            res=compute(op1,symbol,op2);
            push(s,&top,res);
        }
    }
    return pop(s,&top);
}
int main()
{
    char postfix[20];
    int res;
    printf("Enter the postfix expression\n");
    scanf("%s",postfix);
    res=eval_post(postfix);
    printf("Result of evaluated expression is=%d\n",res);
    return 0;
}

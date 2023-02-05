#include<stdio.h>
#include<stdlib.h>
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
void pop(int s[max_size],int *top)
{   int elem;
    if((*top)==-1)
    {
        printf("Underflow condition\n");
        return;
    }
    elem=s[*top];
    (*top)--;
}
void display(int s[max_size],int top)
{
    printf("The elements of stack are\n");
    for(int i=0;i<=top;i++)
    printf("%d\n",s[i]);
}
int main()
{
    int s[max_size],ch,elem,top=-1;
    while(1)
    {
        printf("Enter the choice 1:Push\n2:Pop\n3:Display\n4:Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the element to be pushed\n");
                   scanf("%d",&elem);
                   push(s,&top,elem);
                   break;
            case 2:pop(s,&top);
                   break;
             case 3:display(s,top);
                    break;
             default:exit(0);
                     break;


        }
    }
}

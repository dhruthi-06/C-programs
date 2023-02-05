#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* link;
};
typedef struct node* NODE;
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("Memory not available");
        exit(0);
    }
    return x;
}
NODE insert_front (NODE last ,int item )
{
    NODE  temp;
    temp=getnode();
    temp->info=item;
    if(last==NULL)
    last=temp;
    else
    temp->link=last->link;
    last->link=temp;
    return last;
}
int count(NODE last)
{
     int count1=1;
     if(last==NULL)
     {
         return 0;
     }
     NODE cur;
     cur=last->link;
     while(cur!=last)
     {
         count1++;
         cur=cur->link;
     }
     count1++;
     return count1;
}
void sort(NODE last)
{
    int n,t;
    NODE first,next;
    n=count(last);
    for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<n-i-1;j++)
      {
        first=last->link;
        next=first->link;
        do
        { 
            
            if(first->info>next->info)
            {
                t=first->info;
                first->info=next->info;
                next->info=t;
            }
            first=next;
            next=first->link;
            /* code */

        } 
        while (next!=last);
      }
    }
}
NODE display(NODE last)
  {
    if(last==NULL)
    {
        printf("no elements :");
        return NULL;
    }
    NODE cur;
    printf("contents of circular queue are:\n");
    cur=last->link;
    while(cur!=last)
    {
        printf("%d\n",cur->info);
        cur=cur->link;
        
    }

    printf("%d\n",cur->info);
    
  }

int main()
{    int item,t=0,ch;
     NODE last;
     last=NULL;
     while(1)
     {

         printf("Enter the choice\n");
         scanf("%d",&ch);
         switch(ch)
         {
             case 1:printf("Enter the element\n");
                    scanf("%d",&item);
                    last=insert_front(last,item);
                    break;
            case 2:t=count(last); 
                       printf("The number of nodes are %d\n",t);
                        break;
            case 3:sort(last);
                   break;
            case 4:display(last);
                   break;
            default:exit(0);
                    
         }
     }
     
     
      
}
